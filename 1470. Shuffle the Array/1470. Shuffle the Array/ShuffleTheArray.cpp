#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> results;
        if (nums.size() == 0) return results;
        for (int i = n; i < nums.size(); i++) {
            results.push_back(nums[i - n]);
            results.push_back(nums[i]);
        }
        return results;
    }

    void static printVector(vector<int> result) {
        for_each(result.begin(), result.end(), Solution::print);
        cout << "\n";
    }
private:
    void static print(int n) {
        cout << n << " ";
    }

};

int main() {

    Solution s;

    vector<int> e1 = { 2,5,1,3,4,7 };
  /*  vector<int> e2 = { 1,2,3,4,4,3,2,1 };
    vector<int> e3 = { 1,1,2,2 };*/

    Solution::printVector(s.shuffle(e1, 3));
    //Solution::printVector(s.shuffle(e2, 4));
    //Solution::printVector(s.shuffle(e3, 2));

	return 0;
}