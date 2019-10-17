#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t-- > 0) {

        map<char, list<int>> mymap;

        string str;
        string str1;
        cin >> str;
        cin >> str1;


        map<char, list<int>>::iterator it;

        for (int i = 0; i < str.length(); i++) {

            it = mymap.find(str[i]);

            if (it == mymap.end()) {

                list<int> newlist;
                newlist.push_back(i);
                mymap.insert({str[i], newlist});
            } else {

                /*list<int> list1 = it->second;
                list1.push_back(i);
                mymap.insert({str[i], list1});*/
                mymap[str[i]].push_back(i);

            }
        }

        /* map<char, list<int>>::iterator it1;
         for (it1 = mymap.begin(); it1 != mymap.end(); it1++) {
             cout << it1->first << " ";
             list<int>::iterator iterator1;
             for (iterator1 = it1->second.begin(); iterator1 != it1->second.end(); ++iterator1) {
                 cout << *iterator1 << " ";
             }
             cout << endl;


         }*/
        int min = 1000000;
        char min_char='\0';
        map<char, list<int>>::iterator itr;
        for (int j = 0; j < str1.length(); ++j) {
            itr = mymap.find(str1[j]);
            if (itr != mymap.end()) {
                list<int> list1 = mymap[str1[j]];
                list<int>::iterator iterator1;
                for (iterator1 = list1.begin(); iterator1 != list1.end(); ++iterator1) {
                    if (min > *iterator1) {
                        min = *iterator1;
                        min_char=str1[j];
                    }
                }
            }
        }

        if(min_char){
            cout<<min_char<<endl;
        } else{
            cout<<"No character present"<<endl;
        }
        //cout<<min<<" "<<min_char<<endl;


    }
    return 0;
}
