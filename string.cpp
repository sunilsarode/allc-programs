#include<bits/stdc++.h>

using namespace std;

  void remove_sub_string(std::string &base_str,std::string remove_str){
      std::string::size_type i = base_str.find(remove_str);
      while (i != std::string::npos) {
        base_str.erase(i, remove_str.length());
        i = base_str.find(remove_str, i);
      }
  } 

int main(){

string str="const volatile short *";

/*size_t pos=str.find("volatile");
cout<<pos<<"\n";
string sub1=str.substr(0,pos);
string sub=str.substr(pos+9);
cout<<sub1<<" "<<sub1.size()<<"\n";
cout<<sub<<" "<<sub.size()<<"\n";

cout<<sub1+sub<<"\n";

string s="const short *";
cout<<s.find("const short *")<<"\n";*/
size_t pos1=str.find("const");
string sub1=str.substr(0,6);
string sub=str.substr(6);

str=sub1+sub;
std::cout<<sub1<<" "<<sub<<"\n";
cout<<str<<"\n";
remove_sub_string(str,"volatile ");
std::cout<<str<<"\n";

long long int a = 123456789;
long long b = a*a;
cout << b << "\n"; // -1757895751

return 0;
}
