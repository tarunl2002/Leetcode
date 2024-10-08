class Solution {
public:
    int minSwaps(string s) {
        int imbal=0;
        for(int i =0; i<s.length(); i++){
            if(s[i]==']'){
                if(imbal==0){
                imbal++;
            }
            else {
                imbal--;
            }
            }
            else {
                imbal++;
            }
            
        }
        return (imbal+1)/2;
    }
};