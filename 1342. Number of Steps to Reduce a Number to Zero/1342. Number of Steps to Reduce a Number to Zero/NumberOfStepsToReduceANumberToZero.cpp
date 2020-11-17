#include <iostream>

using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int result = 0;
        while (num > 0) {
            result++;
            if (num % 2 == 0)
                num >>= 1;
            else
                num--;
        }
        return result;   
    }
};
int main() {
	
    Solution s;
    cout << s.numberOfSteps(14);

    return 0;
}