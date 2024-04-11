class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        if(num.length()- k <=0) ans='0';
        stack<int> st;
        for(int i=0;i<num.length(); i++){
            while(!st.empty() && num[i]<st.top() && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0 ){
                st.pop();
                k--;
        }
        while(!st.empty()){
            ans.insert(0,1,st.top());
            st.pop();
        }
        for(int i=0; i<ans.length(); i++){
            if(ans[i]!='0'){
                ans=ans.substr(i);
                break;
            }
            else continue;
        }
        if(ans.length() == 2 && ans[0] == '0' && ans[1]=='0') ans='0';
        return ans;
        
    }
};