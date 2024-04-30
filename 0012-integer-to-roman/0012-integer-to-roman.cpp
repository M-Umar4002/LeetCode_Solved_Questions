class Solution {
    string checkDigit(int x, char l, char m, char h) {
        if(!x) return "";
        
        string a = "";
        
        if(x < 4) {
            while(x) {
                a += l, x--;
            }
        } else if(x > 4) {
            if(x == 9) {
                a = string(1, l) + h;
            } else {
                a = m, x -= 5;
                while(x) {
                    a += l, x--;
                }
            }
        } else {
            a = string(1, l) + m;
        }
        
        return a;
    }
public:
    string intToRoman(int num) {
        string ans;
        
        ans = checkDigit(num % 10, 'I', 'V', 'X');
        num /= 10;
        
        ans = checkDigit(num % 10, 'X', 'L', 'C') + ans;
        num /= 10;
        
        ans = checkDigit(num % 10, 'C', 'D', 'M') + ans;
        num /= 10;
        
        ans = checkDigit(num % 10, 'M', ' ', ' ') + ans;
        num /= 10;
        
        return ans;
    }
};