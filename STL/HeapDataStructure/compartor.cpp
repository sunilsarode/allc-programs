#include<bits/stdc++.h>
using namespace std;

struct Student{
  int total;
  int math;
  int algo;
  int rank;

};

int comp(Student s1,Student s2){
 
  if(s1.total!=s2.total)
        return s1.total>s2.total;
  if(s1.math!=s2.math)
        return s1.math>s2.math;
  
  return s1.algo>s2.algo;
  

}
int main(){
 int n;
 cin>>n;
 struct Student arr[n];
 int math;
 int algo;
 for(int i=0;i<n;i++){
   cin>>math>>algo;
   arr[i].math=math;
   arr[i].algo=algo;
   arr[i].total=math+algo;
   arr[i].rank=0;
 }
 sort(arr,arr+n,comp);
 for(int i=0;i<n;i++){
    arr[i].rank=i+1;
 } 
 for(int i=0;i<n;i++){
    cout<<arr[i].rank<<" "<<arr[i].total<<" "<<arr[i].math<<" "<<arr[i].algo<<endl;
 }


return 0;
}
