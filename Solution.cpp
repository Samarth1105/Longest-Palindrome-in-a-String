class Solution {
  public:
    string longestPalin (string s) {
        int n = s.length();
        if (n == 0) return "";
    
        int start = 0, maxLen = 1;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= 1; j++) {
                int low = i;
                int hi = i + j; 
                while (low >= 0 && hi < n && s[low] == s[hi]) {
                    int currLen = hi - low + 1;
                    if (currLen > maxLen) {
                        start = low;
                        maxLen = currLen;
                    }
                    low--;
                    hi++;
                }
            }
        }
    
        return s.substr(start, maxLen);
    }
};
