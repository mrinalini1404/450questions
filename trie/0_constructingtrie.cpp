#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
	struct TrieNode *children[26];
	bool isEnd;
};

struct TrieNode *getNode(void){
	struct TrieNode *t=new TrieNode;
	
	t->isEnd=false;
	
	for(int i=0;i<26;i++){
		t->children[i]=NULL;
	}
	
	
	return t;
}

void insert(struct TrieNode *root,string key){

	struct TrieNode *t=root;
	for(int i=0;i<key.length();i++){
		int index=key[i]-'a';
		
		if(!t->children[index]){
			t->children[index]=getNode();
		}
		
		t=t->children[index];
	}
	
	t->isEnd=true;	
}


bool search(struct TrieNode *root,string key){

	struct TrieNode *t=root;
	
	for(int i=0;i<key.length();i++){
		int index=key[i]-'a';
		
		if(!t->children[index]){
			return false;
		}
		
		t=t->children[index];
	}	
	
	return (t!=NULL && t->isEnd);
}

// Driver
int main()
{
	// Input keys (use only 'a' through 'z'
	// and lower case)
	string keys[] = {"the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct TrieNode *root = getNode();

	// Construct trie
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);

	// Search for different keys
	search(root, "the")? cout << "Yes\n" :
						cout << "No\n";
	search(root, "there")? cout << "Yes\n" :
						cout << "No\n";
	return 0;
}

