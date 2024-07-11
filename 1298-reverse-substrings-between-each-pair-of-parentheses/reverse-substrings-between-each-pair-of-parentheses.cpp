class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                reverse(s.begin()+st.top(), s.begin()+i+1);
                st.pop();
            }
        }
        erase_if(s, [](char c) { return c == '(' || c == ')'; });
        return s;
    }
};