#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int result = 0;
        int i, j;
        vector<int> biggerNumber;
        for (i = 0; i < rating.size()-2; i++) {
            biggerNumber.clear();
            for (int j = i+1; j < rating.size(); j++) {
                if(rating[i] < rating [j])
                    biggerNumber.push_back(rating[j]);
            }  
            if (biggerNumber.size() < 2) continue;
            result += TeamSerch(biggerNumber);
        }
        for (i = rating.size()-1; i >= 2; i--) {
            biggerNumber.clear();
            for (j = i-1; j >= 0; j--) {
                if (rating[i] < rating[j])
                    biggerNumber.push_back(rating[j]);
            }
            if (biggerNumber.size() < 2) continue;
            result += TeamSerch(biggerNumber);
        }
        return result;
    }

    int TeamSerch(vector<int>& biggerNumber) {
        int result = 0;
        int i, j;
        for (i = 0; i < biggerNumber.size(); i++) {
            for (j = i; j < biggerNumber.size(); j++) {
                if (biggerNumber[i] < biggerNumber[j]) {
                    result++;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> e1 = { 2,5,3,4,1 };
    vector<int> e2 = { 2,1,3 };
    vector<int> e3 = { 1,2,3,4 };
    cout << s.numTeams(e1) << endl;
    cout << s.numTeams(e2) << endl;
    cout << s.numTeams(e3) << endl;

	return 0;
}