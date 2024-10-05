class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        
        vector<int> s1Map(26, 0), s2Map(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            s1Map[s1[i] - 'a']++;
            s2Map[s2[i] - 'a']++;
        }
        int windowSize = s1.length();
        for (int i = 0; i <= s2.length() - windowSize; i++) {
            if (s1Map == s2Map) {
                return true;
            }
            if (i + windowSize < s2.length()) {
                s2Map[s2[i] - 'a']--;
                s2Map[s2[i + windowSize] - 'a']++;
            }
        }
        return s1Map == s2Map;
    }
};
