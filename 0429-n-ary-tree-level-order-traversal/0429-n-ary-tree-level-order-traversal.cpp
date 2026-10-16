class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) 
        {
            int n = q.size();
            vector<int> temp;
            for (int i = 0; i < n; ++i) 
            {
                Node* point = q.front();
                q.pop(); 
                temp.push_back(point->val);
                for (auto x : point->children) 
                {
                    if (x != nullptr) 
                    {
                        q.push(x);
                    }
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};