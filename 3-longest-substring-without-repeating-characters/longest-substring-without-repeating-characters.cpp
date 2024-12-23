class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result=0;
        int n=s.length();
        for (int i=0;i<n; i++){
            vector<bool> visited(256, false);
            for(int j=i ; j<n; j++){
                if(visited[s[j]] == true) break;
                else{
                  result = max(result, j-i+1);
                  visited[s[j]] = true;  
                }
            }
        }
        return result;
    }
};