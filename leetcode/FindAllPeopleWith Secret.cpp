struct Data{
    int x;
    int y;
    int t;
};

struct CompareTime {
    bool operator()(Data const& p1, Data const& p2)
    {
        
        return p1.t > p2.t;
    }
};

typedef long long int ll;

class DS{
 
 private :
    vector<ll> arr;
    vector<ll> size;
    
    int nn;
 public:
 
   DS(int n){
        nn=n;
	arr.resize(n);
	size.resize(n);

   }
   
   void init(){
      for(int i=0;i<nn;i++){
         arr[i]=i;
         size[i]=1;   
      }
   }
          
   void weighted_union(int a,int b)
    {
        int root_A = root(a);
        int root_B = root(b);
        arr[root_A]=root_B; 
    	// if(size[root_A] < size[root_B ])
    	// {
    	// 	arr[ root_A ] = arr[root_B];
    	// 	size[root_B] += size[root_A];
    	// }
    	// else
    	// {
    	// 	arr[ root_B ] = arr[root_A];
    	// 	size[root_A] += size[root_B];
    	// }

    }
    
        //finding root of an element
    int root(int i){
        while(arr[ i ] != i)           //chase parent of current element until it reaches root
        {
         i = arr[ i ];
        }
        return i;
    }
    
   bool find(int A,int B){
        if(root(A)==root(B))       //if A and B have the same root, it means that they are connected.
        return true;
        else
        return false;
    }
    
    void reset(int i){
        arr[i]=i;
    }

};



class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
        priority_queue<Data, vector<Data>, CompareTime> Q;
        for(int i=0;i<meetings.size();i++){

            Data d;
            d.x=meetings[i][0];
            d.y=meetings[i][1];
            d.t=meetings[i][2];    
            Q.push(d);
        }
                
        DS ds(n);
        ds.init();
        ds.weighted_union(0,firstPerson);
      
        while (!Q.empty()) {
                Data d = Q.top();
                Q.pop();
                ds.weighted_union(d.x,d.y);
                
                if(!ds.find(d.x,0)){
                    ds.reset(d.x);
                }
                if(!ds.find(d.y,0)){
                    ds.reset(d.y);
                }
                //cout<<d.x<<" "<<d.y<<"\n"; 
    
        }
        
        cout<<Q.size()<<"\n";
        
        vector<int> allPpl;
        for(int i=0;i<n;i++){
           
            if(ds.find(i,0)) {
              allPpl.push_back(i);
            }    
        }
        return allPpl;
    }
};

int main(){
   int n;
   int fp;
   
}

