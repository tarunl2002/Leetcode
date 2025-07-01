class Solution {
public:
    int possibleStringCount(string word) {
        char current=word[0];
        int ans=0;
        int curr_count=0;
        for(char c : word){
            if(current == c)  {
                curr_count++;
            }         
            else{
                cout<<curr_count<<endl;
                ans+=(curr_count-1);
                current=c;
                curr_count=1;
            }
        }
        cout<<curr_count<<endl;
        ans+=(curr_count-1);
        return ans+1;
    }
};