
SPOJ SOLUTIONS
Here you will find solutions of many problems on spoj. If you want solution of some problem which is not listed in blog or have doubt regarding any spoj problem (which i have solved) or any programming concept (data structure) you can mail me @ raj.nishant360@gmail.com
And my humble request to you all that don't copy the code only try to understand the logic and algorithm behind the code. I have started this because if you tried as hard as you can and still can't find any solution to the problem then you can refer to this.
You can read my answer how to start competitive programming CLICK HERE

Saturday, October 10, 2015
SHPATH-The Shortest Path
The Shortest Path
Given Below code is for shpath spoj or the shortest path spoj.



/*
===================================================
Name :- Nishant Raj
Email :- raj.nishant360@gmail.com
College :- Indian School of Mines
Branch :- Computer Science and Engineering
Time :- 08 September 2015 (Tuesday) 20:11
===================================================*/
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define mod 1000000009
struct cmp
{
    bool operator()(const pair<int , int> &a , const pair<int , int> &b){
        return a.first > b.first;
    }
};
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        vector<int> graph[n+9];
        vector<vector<int> > cost(n+1 , vector<int>(n+1 , 0));
        map<string, int> map_name;
        for(int i = 1 ; i <= n ; i++){
            cin>>s;
            map_name[s] = i;
            int path , k , c;
            cin>>path;
            for(int j = 0 ; j < path ; j++){
                cin>>k>>c;
                graph[i].pb(k);
                cost[i][k] = c;
            }
        }
        int k;
        cin>>k;
        while(k--){
            char source_temp[12] , dest_temp[12];
            string source , dest;
            source.assign(source_temp);
            dest.assign(dest_temp);
            cin>>source>>dest;
            priority_queue<pii , vector<pii >, cmp > pq;
            ll dist[n+9];
            fill(dist , dist+n , INT_MAX-100000);
            int dist_num = map_name[dest] , source_num = map_name[source];
            dist[source_num] = 0;
            pq.push(mp(0 , source_num));
            while(!pq.empty()){
                int wt = pq.top().first;
                int node = pq.top().second;
                pq.pop();
                if(node == dist_num){
                    cout<<wt<<endl;
                    break;
                }
                for(auto it:graph[node]){
                    if(dist[it] > dist[node] + cost[node][it]){
                        dist[it] = dist[node] + cost[node][it];
                        pq.push(mp(dist[it] , it));
                    }
                }
            }
        }
    }
    
    return 0;
}
Posted by Nishant Raj at 10:46 PM 
Reactions: 	
  
Email This
BlogThis!
Share to Twitter
Share to Facebook
Share to Pinterest

Labels: Graph
 
Newer Post Older Post Home
Subscribe to: Post Comments (Atom)
Google+ Badge

Labels
2D-BIT (1)
AVL Tree (2)
BFS (8)
Binary Search (12)
Bipartite Graph (1)
BIT (7)
contest (1)
Convex Hull (2)
DFS (6)
Dynamic Programming (10)
easy (9)
Edit distance (1)
factorization (2)
fibonacci (2)
floyd warshall (1)
Game Theory (2)
Graph (12)
greedy (6)
Grundy Numbers (1)
Hash (5)
Heap (1)
Height Balanced Tree (2)
implementation (23)
inverse modulo (1)
LCP (1)
Linked List data structure (1)
math (28)
matrix exponentiation (2)
moderate (1)
offline query (1)
Policy Based Data Structure (1)
prime (11)
prime factorization (7)
Priority Queue (1)
queue (1)
Rolling Hash (1)
Segment Tree (5)
sieve (1)
sorting (2)
stack (1)
string matching (1)
Strings (8)
Suffix Array (5)
tetranacci (1)
tree (1)
Tries Data structure (1)
two pointer (1)
Z-function (2)
Popular Posts
AGGRCOW-Aggressive cows
Below given code is for AGGRCOW spoj Aggressive cows spoj. Hint:- Think Binary search, #include <bits/stdc++.h> using namespac...
PALIN - The Next Palindrome
It is a solution to the 5th and one of most attractive problem to novice, as well as experienced hacker if they haven't done with it ...
HASHIT-Hash it!
Hash it! Given below c++ code for HASHIT spoj or Hash it! spoj. If You Give up! Then click here to view code #include <bit...
PT07Z-Longest path in a tree
Longest path in a tree Given below code is for PTZ07Z spoj or Longest path in a tree spoj. You can solve this using DFS of applying ...
PPATH-Prime Path
  Prime Path Below given code is for PPATH spoj or Prime path spoj. Hint:- Use BFS and sieve. #include <bits/stdc++.h> us...
NISHNAT RAJ. Simple theme. Theme images by gaffera. Powered by Blogger.
