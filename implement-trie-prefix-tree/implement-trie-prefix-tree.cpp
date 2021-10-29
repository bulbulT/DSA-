class TrieNode{
    public:
    char data;
    TrieNode** children;
    bool isTerminal;
    
    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        
        isTerminal = false;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertWord(TrieNode* root, string word) {
        //Base Case
        if(word.size() == 0){
            root->isTerminal = true;
            return;
        }
        
        int index = word[0] - 'a';
        TrieNode* child;
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        //Recursive Call
        insertWord(child, word.substr(1));
    }
    
    void insert(string word){
        insertWord(root, word);
    }
    
    bool searchword(TrieNode* root, string word){
        if(word.size() == 0){
            return root->isTerminal;
        }
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            return false;
        }
        return searchword(child, word.substr(1));
    }
    
    bool search(string word) {
        return searchword(root, word);
    }
    
    
    bool startsWith(string prefix) {
        if(root == NULL) return false;
        
        int n = prefix.size();
        TrieNode* parent = root;
        
        for(int i = 0; i < n; i++){
            int index = prefix[i] - 'a';
            if(parent->children[index] == NULL){
                return false;
            }
            
            parent = parent->children[index];
                
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */