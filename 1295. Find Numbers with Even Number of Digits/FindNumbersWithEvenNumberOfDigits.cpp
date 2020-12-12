#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for (const auto& num : nums) {
            int count = 0;
            for (int i = 1; i <= num; i = i * 10) count++;
            if ((count & 1) == 0) result++;
        }
        return result;
    }
};


int main() {
    Solution s;
    vector<int> e1{ 12,345,2,6,7896 };
    
    cout << s.findNumbers(e1) << endl;

	return 0;
}