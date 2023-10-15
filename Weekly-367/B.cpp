class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0, r = 0;
        int cnt = 0;
        int len = n + 1;
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += '2';
        }
        while (r < n) {
            if (s[r] == '1') {
                cnt++;
            }
            while (cnt == k) {
                if (r - l + 1 < len) {
                    len = r - l + 1;
                    ans = s.substr(l, len);
                } else if (len == r - l + 1) {
                    ans = min(ans, s.substr(l, len));
                }
                if (s[l] == '1') {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        if (len == n + 1) {
            return "";
        }
        return ans;
    }
};


