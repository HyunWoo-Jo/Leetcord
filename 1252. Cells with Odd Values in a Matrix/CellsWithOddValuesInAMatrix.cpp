#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int result = 0, i, j;
        vector<int> n_arr(n, 0);
        vector<int> m_arr(m, 0);
        for (i = 0; i < indices.size(); i++) {
            n_arr[indices[i][0]]++;
            m_arr[indices[i][1]]++;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if ((n_arr[i] + m_arr[j]) % 2 == 1)
                    result++;
            }       
        }
        return result;
    }
};
int main() {
    Solution s;
    vector<vector<int>> e1 = { vector<int>{0,1},vector<int>{1,1} };
    vector<vector<int>> e2 = { vector<int>{1,1},vector<int>{0,0} };
    cout << s.oddCells(2,3,e1) << endl;
   // cout << s.oddCells(2,2,e2) << endl;
	return 0;
}