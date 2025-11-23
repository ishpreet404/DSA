class Solution {
public:
    bool isValid(string s) {
        vector<int> ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                ans.push_back(s[i]);

            else {
                if (ans.empty() == true){
                    return false    ;
                }
                char last = ans.back();
                if ((s[i] == ')' && last == '(') ||
                    (s[i] == ']' && last == '[') ||
                    (s[i] == '}' && last == '{')) {
                    ans.pop_back();
                }else return false;
            }
        }
            return ans.empty();
        }
    };