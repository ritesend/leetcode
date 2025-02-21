/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
    unordered_set<int> nums;

    void build(TreeNode* root){
        if(!root) return;
        int x= root->val;
        nums.insert(x);
        if(root->left){
            (root->left)->val= 2*x+1;
            build(root->left);
        }
        if(root->right){
            (root->right)->val= 2*x+2;
            build(root->right);
        }
    }

public:
    FindElements(TreeNode* root) {
        if(root) root->val=0;
        build(root);
    }
    
    bool find(int target) {
        return nums.find(target)!=nums.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */