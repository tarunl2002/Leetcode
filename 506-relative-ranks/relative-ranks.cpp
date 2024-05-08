class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;
        vector<string> answer(score.size());
        sort(sorted.begin(), sorted.end(), greater<int>());
        for(int i=0;i<score.size();i++){
            for(int j=0;j<sorted.size(); j++){
                if(score[i]==sorted[j]){
                  answer[i] = to_string(j+1);
                  if(answer[i]=="1") answer[i]="Gold Medal";
                  else if(answer[i]=="2") answer[i]="Silver Medal";
                  else if(answer[i]=="3") answer[i]="Bronze Medal";
                } 
            }
        }
        return answer;
    }
};