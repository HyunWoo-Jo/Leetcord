#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        /* ���1
        for (int i = 0; i < nums.size(); i++) {
            for (int y = i+1; y < nums.size(); y++) {
                if (nums[i] == nums[y]) result++;
            }
        }*/
        
        // ���2
        unordered_map<int, int> record;
        for (const auto& num : nums) {
            record[num]++;
        }
        for (const auto& item : record) {   
            result += (item.second) * (item.second - 1) / 2;
        }
        return result;
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
    vector<int> e1 = { 1,2,3,1,1,3  };
    vector<int> e2 = { 1,1,1,1  };
    vector<int> e3 = { 1,2,3 };

    cout << s.numIdenticalPairs(e1) << endl;
    cout << s.numIdenticalPairs(e2) << endl;
    cout << s.numIdenticalPairs(e3) << endl;

	return 0;
}