#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        if (mat.size() == 1) return mat; 

        const int MAX_WIDTH = mat[0].size()-1, MAX_HEIGHT = mat.size()-1; 
        int width = 0, height = MAX_HEIGHT - 1; 
        int recordWidth, recordHeight;
        bool isRecord = false;
        vector<int> sortVec;

        while (!(width > MAX_WIDTH || height > MAX_HEIGHT)) {
            if (!isRecord) {
                recordWidth = width; 
                recordHeight = height;
                isRecord = true;
            }
            sortVec.push_back(mat[height][width]);
            width++; height++;

            if (width > MAX_WIDTH || height > MAX_HEIGHT) { 
                width = recordWidth; 
                height = recordHeight; 
                sort(sortVec.begin(), sortVec.end());
                while (isRecord) {                
                    mat[height][width] = sortVec.front(); 
                    sortVec.erase(sortVec.begin());
                    width++; height++;
                    if (sortVec.size() == 0) {
                        isRecord = false;
                        if (recordHeight == 0) { 
                            height = 0;
                            width = recordWidth + 1;
                        }
                        else {
                            height = recordHeight - 1;
                            width = 0;
                        }
                    }
                    
                }
            }
        }
        return mat;
    }
};

void PrintVectorVectorInt(vector<vector<int>> input) {
    for (const auto& nums :input) {
        for (const auto& num : nums) {
            cout << num << " ";
        }

        cout << endl;
    }

}

int main() {
    Solution s;
    vector<vector<int>> e1 = { {3,3,2,1}, {2,2,1,1}, {1,1,1,2} };
    vector<vector<int>> e2 = { {3,3,2,1} };
    PrintVectorVectorInt(s.diagonalSort(e1));
    PrintVectorVectorInt(s.diagonalSort(e2));
	return 0;
}