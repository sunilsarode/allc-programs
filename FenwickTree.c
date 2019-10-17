#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const ll MOD = 1000000007;
const int MAX = 1000005;
int tree[MAX][30];
int read(int idx1, int idx2)
{
    int sum = 0;
    while(idx1 > 0)
    {
        sum += tree[idx1][idx2];
        idx1 -= (idx1 & -idx1);
    }
    return sum;
}
void update(int idx1, int idx2, int val, int n)
{
    while(idx1 <= n)
    {
        tree[idx1][idx2] += val;
        idx1 += (idx1 & -idx1);
    }
}
int main()
{
    int n, q, l, r, idx, k, c, ans;
    char y;
    string s;
    cin >> n >> q >> s;

    for(int i = 0;i < n;++i)
        update(i + 1, s[i] - 'a', 1, n);

    for(int i = 0;i < q;++i)
    {
        scanf("%d", &c);
        if(c)
        {
            scanf("%d %d %d", &l, &r, &k);
            ans = 0;
            int j;
            for(j = 0;j < 26;++j)
            {
                ans += read(r, j) - read(l - 1, j);
                if(ans >= k)
                    break;
            }
            if(ans >= k)
                printf("%c\n", j + 'a');
            else printf("Out of range\n");
        }
        else
        {
            scanf("%d %c", &idx, &y);
            update(idx, s[idx-1] - 'a', -1, n);
            s[idx-1] = y;
            update(idx, s[idx-1] - 'a', 1, n);
        }
    }
    return 0;
}
