class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
           s.erase(std::remove(s.begin(), s.end(), '0'), s.end());
        long long ans = stoll(s);
        return ans;
    }
};