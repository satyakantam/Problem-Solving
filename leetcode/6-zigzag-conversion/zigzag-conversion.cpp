class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
            return s;

        vector<string> row(numRows);

        int r = 0;
        bool down = true;

        for (char ch : s) {

            row[r] += ch;

            if (r == numRows - 1)
                down = false;

            if (r == 0)
                down = true;

            if (down)
                r++;
            else
                r--;
        }

        string cutee = "";

        for (int i = 0; i < numRows; i++)
            cutee += row[i];

        return cutee;
    }
};