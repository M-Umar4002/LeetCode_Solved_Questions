class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios::sync_with_stdio(false); cin.tie(0);
        
        if(strs.size() == 1) return strs[0];

        string ans = "";

        for(int i = 0, j = 0; i < strs.size() - 1 && j < strs[0].size(); i++) {
            if(strs[i][j] != strs[i+1][j]) break;
            
            if(i == strs.size() - 2) {
                ans += strs[i][j];
                i = -1;
                j++;
            }
        }
        return ans;
    }
};