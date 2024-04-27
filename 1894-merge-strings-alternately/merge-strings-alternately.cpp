class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int l=max(word1.length(), word2.length());
        int m=min(word1.length(), word2.length());
        
        for(int i=0; i<m; i++){
            merged+=word1[i];
            merged+=word2[i];
        }
        if(word1.length()>= word2.length()){
            for(int i=m; i<l; i++){
            merged+=word1[i];
            }
        }
        else{
             for(int i=m; i<l; i++){
            merged+=word2[i];
            }
        }

        return merged;
    }
};