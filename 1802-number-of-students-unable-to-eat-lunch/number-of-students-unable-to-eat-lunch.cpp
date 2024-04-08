#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero = 0, one = 0;
        int s=sandwiches.size();
        for (int i = 0; i < students.size(); i++) {
            if (students[i] == 0) zero++;
            else if (students[i] == 1) one++;
        }
        for (int i = 0; i < s; i++) {
            if (*sandwiches.begin() == 0 && zero > 0) {
                zero--;
                sandwiches.erase(sandwiches.begin());
            }
            else if (*sandwiches.begin() == 1 && one > 0) {
                one--;
                sandwiches.erase(sandwiches.begin());
            }
        }
        return sandwiches.size();
    }
};

