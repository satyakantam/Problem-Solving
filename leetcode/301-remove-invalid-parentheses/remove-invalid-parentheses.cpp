
class Solution {
public:
    vector<string> ans;

    void solve(string &s, int index, int leftRemove, int rightRemove,
               int open, string curr) {

        if (index == s.size()) {
            if (leftRemove == 0 && rightRemove == 0 && open == 0) {
                ans.push_back(curr);
            }
            return;
        }

        char ch = s[index];

        if (ch == '(') {

            if (leftRemove > 0) {
                solve(s, index + 1, leftRemove - 1, rightRemove,
                      open, curr);
            }

            solve(s, index + 1, leftRemove, rightRemove,
                  open + 1, curr + ch);
        }

        else if (ch == ')') {

            if (rightRemove > 0) {
                solve(s, index + 1, leftRemove, rightRemove - 1,
                      open, curr);
            }

            if (open > 0) {
                solve(s, index + 1, leftRemove, rightRemove,
                      open - 1, curr + ch);
            }
        }

        else {
            solve(s, index + 1, leftRemove, rightRemove,
                  open, curr + ch);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;

        for (char ch : s) {
            if (ch == '(') {
                leftRemove++;
            }
            else if (ch == ')') {
                if (leftRemove > 0)
                    leftRemove--;
                else
                    rightRemove++;
            }
        }

        solve(s, 0, leftRemove, rightRemove, 0, "");

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};