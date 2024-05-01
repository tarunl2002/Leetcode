class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        stack<char> st;
        int n;
        for(int i=0;i<word.length(); i++){
            st.push(word[i]);
            if(word[i]==ch){
                n=i;
                break;
            }
        }
        if(n==word.length()) return word;
        for(int i=0;i<=n;i++){
            ans+=st.top();
            st.pop();
        }
        for(int i=n+1;i<word.length();i++){
            ans+=word[i];
        }
        return ans;
    }
};