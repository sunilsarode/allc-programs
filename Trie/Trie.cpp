class TrieNode{

public :
	TrieNode* nodeArr[26];
	bool endOfWord;
	
	TrieNode(){
		for(int i=0;i<26;i++){
			nodeArr[i]=NULL;
		}
		endOfWord=false;
	}

}

class Trie{
public:

	TrieNode* root=NULL;

	Trie(){
		root=new TrieNode();	
	}
	
	void insert(string s){
	
		TriedNode *t=root;
		for(int i=0;i<s.size();i++){
			if(t->nodearr[s[i]-'a']==NULL){
				t->nodearr[s[i]-'a']=new TrieNode();
			}
			t=t->nodearr[s[i]-'a'];
		}
		t->endOfWord=true;
	}
	
	TrieNode* find(string s){
		
		TrieNode* t=root;
		for(int i=0;i<s.size();i++){
			if(t!=NULL){
				t=t->nodearr[s[i]-'a'];
			}else{
				break;
			}
		}
	
	    return t;	
	}
   
       bool search(string word){
       	TrieNode* t=find(word);
       	
       	if(t!=NULL&&t->endOfWord==true){
       		return true;	
       	}
       	
       	return false;
       }
       
       bool startWith(string prefix){
       	TrieNode* t=find(prefix);
       	
       	return t!=NULL;	
       }
       
   	
}
