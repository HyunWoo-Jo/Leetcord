#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

void PrintVector(vector<int> nums) {
    for (const auto& item : nums) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    Solution s;
    vector<int> e1 = { 1,2,3,4 };
    PrintVector(s.runningSum(e1));
	return 0;
}