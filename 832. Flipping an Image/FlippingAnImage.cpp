#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (int i = 0; i < A.size(); i++) {
			int size = A[i].size() - 1;
			for (int j = 0; j < A[i].size(); j++) {
				if (j > size) {
					break;
				}
				else if (j == size) {
					A[i][j] = A[i][size] == 0 ? 1 : 0;;
					break;
				}
				else {
					int buffer = A[i][j] == 0 ? 1 : 0;;
					A[i][j] = A[i][size] == 0 ? 1 : 0;;
					A[i][size] = buffer;
					size--;
				}
			}
		}
		return A;
	}
};

int main() {
	vector<vector<int>> input = { {1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0} };
	Solution s;
	input = s.flipAndInvertImage(input);
	for (const auto& lists : input) {
		for (const auto& list : lists) {
			cout << list;
		}
		cout << endl;
	}


	return 0;
}