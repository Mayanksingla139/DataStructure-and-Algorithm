#include<iostream>
#include<string>
using namespace std;

class trieNode{
    public:
    char ch;
    trieNode* children[26];
    bool isTerminal;

    trieNode(char ch){
        ch = this->ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie{
    public:
    trieNode* root;
    trie(){
        root = new trieNode('\0');
    }

    void insertUtil(trieNode* root, string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        trieNode* child;
        int idx = word[0] -'a';
        if(root->children[idx] != NULL){
            child = root->children[idx];
        }else{
            child = new trieNode(word[0]);
            root->children[idx] = child;
        }
        insertUtil(child, word.substr(1));

    }

    void insert(string word){
        insertUtil(root, word);
    }

    bool searchUtil(trieNode* root, string word){
        if(word.length() == 0){
            return root->isTerminal;
        }
        trieNode* child;
        int idx = word[0] - 'a';
        if(root->children[idx] != NULL){
            child = root->children[idx];
        }else{
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool search(string word){
        return searchUtil(root, word);
    }

    bool prefixUtil(trieNode* root, string word){
        if(word.length() == 0){
            return true;
        }
        trieNode* child;
        int idx = word[0] - 'a';
        if(root->children[idx] != NULL){
            child = root->children[idx];
        }else{
            return false;
        }
        return prefixUtil(child, word.substr(1));
    }

    bool startWith(string word){
        return prefixUtil(root, word);
    }

};


int main(){
    trie* obj = new trie();
    string str = "word";
    obj->insert(str);
    
    string srch = "word";
    bool param1 = obj->search(srch);
    if(param1 == 1){
        cout<<"word is present"<<endl;
    }else{
        cout<<"word is not present"<<endl;
    }

    string prefix = "wor";
    bool param2 = obj->startWith(prefix);
    if(param2 == 1){
        cout<<"prefix is present"<<endl;
    }else{
        cout<<"prefix is not present"<<endl;
    }

    return 0;
}
