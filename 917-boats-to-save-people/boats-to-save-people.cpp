class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        int s=0, e=people.size()-1;
        sort(people.begin(), people.end()); 
        while(s<=e){
            if(people[s]+people[e]<=limit){
                s++;
                e--;
            }
            else {
                e--;
            }
            ans++;
        }
        if(s==e) return ans+1;
        else return ans;
    }
};