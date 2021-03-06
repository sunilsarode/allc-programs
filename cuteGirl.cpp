#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>

#define lld long long
#define llu unsigned long long

#define rep(i, x, y) for (i = x; i < y; i++)
#define rrep(i, x, y) for (i = x; i >= y; i--)
#define trv(y, x) for (typeof(x.begin()) y = x.begin(); y != x.end(); y++)

using namespace std;

llu Ans;
vector<llu> Primes_list;
vector<bool> IsPrime(1e6 + 1, true);
vector<bool> Prime;
void PrimeSieve(int n) {
  IsPrime[0] = IsPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (IsPrime[i])
      for (int j = i * i; j <= n; j += i)
        IsPrime[j] = false;
  for (int i = 2; i <= n; i++)
    if (IsPrime[i])
      Primes_list.push_back(i);
}

void SegmentedPrimeSieve(llu m, llu n) {
  Prime.clear();
  Prime = vector<bool>(n - m + 1, true);
  llu i, j;
  for (i = 0; (Primes_list[i] * Primes_list[i]) <= n && i < Primes_list.size();
       i++) {
    if (Primes_list[i] != 0)
      j = m / Primes_list[i];
    j *= Primes_list[i];
    for (; j <= n; j += Primes_list[i]) {
      if (j < m || j == Primes_list[i])
        continue;
      Prime[j - m] = false;
    }
  }
  for (i = 0; i < n - m + 1; i++)
    if (Prime[i] == true)
      Ans++;
}

int No_Of_Factors(llu n) {
  if (n == 0)
    return 0;
  int i, divisors = 1, power;
  int N = sqrt(n);
  for (i = 2; i <= N; i++) {
    power = 0;
    while (n % i == 0) {
      power++;
      n /= i;
    }
    divisors *= (power + 1);
  }
  if (n > 1)
    divisors *= 2;
  return divisors;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  PrimeSieve(1e6);
  int t;
  llu m, n;
  cin >> t;
  while (t--) {
    Ans = 0;
    cin >> m >> n;
    if (m == 1)
      m = 2;
    llu _M = ceil(sqrt(m));
    llu _N = sqrt(n);
    for (llu i = _M; i <= _N; i++)
      if (IsPrime[No_Of_Factors(i * i)])
        Ans++;
    SegmentedPrimeSieve(m, n);
    cout << Ans << "\n";
  }
  Primes_list.clear();
  IsPrime.clear();
  return 0;
}
