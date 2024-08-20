class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        bool open=false;
        for(int i=0;i<s.length();i++){
            if(open==false && s[i]=='*') count++;
            if(s[i]=='|'){
                if(open==true) open=false;
                else open=true;
            }
        }
        return count;
    }
};