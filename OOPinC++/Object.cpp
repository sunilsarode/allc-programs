#include<iostream>

using namespace std;

class Data{
   int love;
   public:
   Data(){
       love=0;
   }
   Data(int val){
     love=val;
   }
   ~Data(){
      cout<<"Destruct ";
   }
   void display(){
     cout<<love<<endl;
   }
}; 
int main(){

  Data d(1);
  d.display();

  Data* d1=new Data(2);
  d1->display();
  delete d1; 

return 0;
}
