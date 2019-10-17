#include<bits/stdc++.h>
using namespace std;

class Data{
  int x,y;
  public :
    Data(int _x,int _y){
      x=_x;
      y=_y;
    }
   int getX() const { return x; }
   int getY() const { return y; }
};
class cmp{
public :
bool operator() (Data &d,Data &d1){
    return d.getY()<d1.getY();
}
};
int main(){

priority_queue<Data,vector<Data>,cmp> Q;
Q.push(Data(1,10));
Q.push(Data(2,40));
Q.push(Data(3,30));

while(!Q.empty()){
  
  Data d=Q.top();
  Q.pop();

  cout<<d.getX()<<" "<<d.getY()<<endl;
 }
return 0;
}
