class Solution {
public:
    struct TrieNode {
        TrieNode* c[2];
        TrieNode() {
            c[0] = nullptr;
            c[1] = nullptr;
        }
    };

    bool insert(vector<int>& arr, TrieNode* root) {
        TrieNode* curr = root;
        bool isrep = true;
        for (int bit : arr) {
            if (curr->c[bit] == nullptr) {
                curr->c[bit] = new TrieNode;
                isrep = false;
            }
            curr = curr->c[bit];
        }
        return isrep;
    }

    vector<int> repeatedRows(vector<vector<int>>& matrix, int M, int N) {
        TrieNode* root = new TrieNode();
        vector<int> ans;
        for (int i = 0; i < M; i++) {
            if (insert(matrix[i], root)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
