// User function template for C++

// Function to insert string into TRIE.

// struct TrieNode{
//     bool wordEnd=false;
//     vector<TrieNode*> arr[26];
//     for(int i=0;i<26;i++){
//         arr[i]=nullptr;
//     }
// };
void insert(struct TrieNode *root, string key) {
    // code here
    int siz=key.length();
    for(int i=0;i<siz;i++){
        int index=key[i]-'a';
        if(root->children[index]==nullptr){
            root->children[index]=new TrieNode();
        }
        root=root->children[index];
    }
    root->isEndOfWord = true;
}

// Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) {
    int siz=key.length();
    for(int i=0;i<siz;i++){
        int index=key[i]-'a';
        if(root->children[index]==nullptr){
            return false;
        }
        root=root->children[index];
    }
    return root->isEndOfWord;
    // code here
}
