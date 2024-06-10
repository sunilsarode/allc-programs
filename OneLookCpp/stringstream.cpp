class Solution {
public:
    class TrieNode{
        public:

        bool isEndOfWord=false;
        vector<TrieNode*> arr;

        TrieNode(){
            arr.resize(26);
            for(int i=0;i<26;i++){
                arr[i]=NULL;
            }
        }
    };

    class Trie{
        public:

        TrieNode* root=NULL;
        
        Trie(){
            root=new TrieNode();
        }

        void insert(string word){
            
            TrieNode* t=root;

            for(auto x:word){
                if(t->arr[x-'a']==NULL){
                    t->arr[x-'a']=new TrieNode();
                }
                t=t->arr[x-'a'];
            }
            t->isEndOfWord=true;
        }

        TrieNode* find(string word){
            TrieNode* t=root;
            for(auto x:word){
                if(t!=NULL){
                    t=t->arr[x-'a'];
                }else{
                    break;
                }
            }

            return t;
        }
    };


    string convertToRoot(string word,Trie& t){
        
        string str;
        
        for(auto x:word){
            str.push_back(x);
            TrieNode* node=t.find(str);
            if(node!=NULL && node->isEndOfWord){
                return str; //pefix exist in trie
            }
        }

        return word;//word does not exist in trie
    }
    

    string replaceWords(vector<string>& dictionary, string sentence) {
        
        Trie t;

        for(auto s:dictionary){
            t.insert(s);
        }
        
        string newSen;

        string word;

        stringstream ss(sentence);

        while(getline(ss,word,' ')){
            newSen+=convertToRoot(word,t);
            newSen+=" ";
        }

        newSen.pop_back();

        return newSen;
    }
};