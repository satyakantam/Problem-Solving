class Solution {
public:

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        
        map<int, map<int, vector<int>>> nodes;

        queue<tuple<TreeNode*, int, int>> q;

        q.push({root, 0, 0});

        while (!q.empty()) {

            auto [curr, row, col] = q.front();
            q.pop();

            nodes[col][row].push_back(curr->val);

           
            if (curr->left) {
                q.push({curr->left, row + 1, col - 1});
            }

            
            if (curr->right) {
                q.push({curr->right, row + 1, col + 1});
            }
        }

        vector<vector<int>> ans;

       
        for (auto &col : nodes) {

            vector<int> temp;

            
            for (auto &row : col.second) {

                
                sort(row.second.begin(), row.second.end());

                for (int value : row.second) {
                    temp.push_back(value);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};