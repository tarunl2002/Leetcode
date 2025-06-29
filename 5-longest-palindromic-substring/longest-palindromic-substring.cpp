class Solution {
public:
    string eoc(int c, string& s) {
        int i = c;
        int j = c;
        int count = 1;
        while (i >= 0 && j < s.size() && s[i] == s[j]) {

            i--;
            j++;
        }

        return s.substr(i + 1, j - i - 1);
    }
    string eec(int c, string& s) {
        int i = c;
        int j = c+1;
        while (i >= 0 && j < s.size() && s[i] == s[j]) {

            i--;
            j++;
        }

        return s.substr(i + 1, j - i - 1);
    }

    string longestPalindrome(string s) {
            string longest="";
            for(int i=0;i<s.length();i++){
  
        string odd = eoc(i,s);
        if(odd.length()>longest.length()) longest=odd;
        string even = eec(i,s);
        if(even.length() > longest.length()) longest=even;
            }
        return longest;

    }
};