class Solution {
public:
    bool isValid(string str) {
        int count1 = 0, count2 = 0;
        for(char c : str) {
            if(c == '(' || c == '[' || c == '{') count1++;
            else count2++;
        }
        if(count1 != count2) return false;

        int count = 0, i, j;
        for(i = 0; i < str.length(); i+=2) {
            if(str[i] == ')' || str[i] == ']' || str[i] == '}') {
                if(!i) return false;
                i--;
                continue;
            }

            for(j = i+1; j < str.length(); j++) {
                if(str[j] == '(' || str[j] == '[' || str[j] == '{') {
                    count++;
                    continue;
                }

                if((j-i) % 2 && (j-i-1) == 2*count) {
                    if((str[i] == '(' && str[j] == ')') || (str[i] == '[' && str[j] == ']') || (str[i] == '{' && str[j] == '}')) {
                        count = 0;
                        i--;
                        break;
                    }
                }
            }
            if(j == str.length()) return false;
        }
        return true;
    }
};