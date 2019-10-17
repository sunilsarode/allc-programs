#include <bits/stdc++.h>

using namespace std;
# define MAX 100000

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

     int hindex=MAX;
     for(int i=0;i<s.length();i++){
         if(s[i]=='h'&& i<hindex){
              hindex=i;
         }
     }

     if(hindex==MAX){
         return "NO";
     }
     int aindex=MAX;
     for(int i=hindex+1;i<s.length();i++){
         if(s[i]=='a'&& i<aindex){
              aindex=i;
         }
     }
     if(aindex==MAX)
        return "NO";

    int cindex=MAX;
    for(int i=aindex+1;i<s.length();i++){
         if(s[i]=='c'&& i<cindex){
              cindex=i;
         }
    }

    if(cindex==MAX)
        return "NO";

    int kindex=MAX;
    for(int i=cindex+1;i<s.length();i++){
         if(s[i]=='k'&& i<kindex){
              kindex=i;
         }
    }

    if(kindex==MAX)
        return "NO";

    
    int eindex=MAX;
    for(int i=kindex+1;i<s.length();i++){
         if(s[i]=='e'&& i<eindex){
              eindex=i;
         }
    }

    if(eindex==MAX)
        return "NO";

    int rindex=MAX;
    for(int i=eindex+1;i<s.length();i++){
         if(s[i]=='r'&& i<rindex){
              rindex=i;
         }
    }

    if(rindex==MAX)
        return "NO";

    int rindex1=MAX;
    for(int i=rindex+1;i<s.length();i++){
         if(s[i]=='r'&& i<rindex1){
              rindex1=i;
         }
    }

    if(rindex1==MAX)
        return "NO";

    int aindex1=MAX;
    for(int i=rindex1+1;i<s.length();i++){
         if(s[i]=='a'&& i<aindex1){
              aindex1=i;
         }
    }

    if(aindex1==MAX)
        return "NO";

    int nindex=MAX;
    for(int i=aindex1+1;i<s.length();i++){
         if(s[i]=='n'&& i<nindex){
              nindex=i;
         }
    }

    if(nindex==MAX)
        return "NO";

    int kindex1=MAX;
    for(int i=nindex+1;i<s.length();i++){
         if(s[i]=='k'&& i<kindex1){
              kindex1=i;
         }
    }

    if(kindex1==MAX)
        return "NO";

    if(hindex<aindex && aindex<cindex && cindex<kindex && kindex<eindex && eindex<rindex && rindex <rindex1 
     && rindex1<aindex1 && aindex1 <nindex && nindex<kindex1 ){
          return "YES";

    }
     return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

