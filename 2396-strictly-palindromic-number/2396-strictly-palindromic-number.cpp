class Solution {
    // bool isPalindrome(string n) {
    //     int l = 0, r = n.size()-1;
    //     while(l < r) {
    //         if(n[l] != n[r]) return false;
    //     }
    //     return true;
    // }
public:
    bool isStrictlyPalindromic(int n) {
        // Approach 1:
        // for(int i = 2, x; i <= n - 2; i++) {
        //     string base = "";
        //     x = n;
        //     while(x) {
        //         base = to_string(x % i) + base;
        //         x /= i;
        //     }
        //     if(!isPalindrome(base)) return false;
        // }
        // return true;

        // Approach 2:
        return n == 1;
    }
};