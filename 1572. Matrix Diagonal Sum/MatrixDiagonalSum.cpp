#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int x, yMin = 0, yMax = mat.size()-1, result = 0;
        for (x = 0; x < mat.size(); x++) {
            if (yMin == yMax) {
                result += mat[x][yMin++];
                yMax--;
            }
            else {
                result += mat[x][yMin++];
                result += mat[x][yMax--];
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<int>> e1;
    e1.push_back(vector<int>{ 1,2,3 });
    e1.push_back(vector<int>{ 4,5,6 });
    e1.push_back(vector<int>{ 7,8,9 });

    cout << s.diagonalSum(e1) << endl;

	return 0;
}