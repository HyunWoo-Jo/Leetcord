#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> partitionLabels(string S) {
		vector<int> result;
		if (S.size() < 1)
			return result;
		unordered_map<char, int> map_charMax; 
		int startNumber = 0, endNumber = 0; 

		for (int i = 0; i < S.size(); i++) {
			map_charMax[S[i]] = i;// map을 이용해 같은 문자의 최대 위치를 구한다.
 		}
		for (int i = 0; i < S.size(); i++) { 
			endNumber = max(map_charMax[S[i]], endNumber); // 순회하며 중간값의 최대 위치를 갱신한다.
			if (i == endNumber) { // 최대위치와 i의 위치가 같을 경우 파티션을 나눈다. 
				int number = endNumber - startNumber + 1;
				result.push_back(number);
				startNumber = i + 1; //최소 위치를 갱신해 준다.
			}
		}
		return result;
	}
};

void PrintVectorInt(vector<int> nums) {
	for (const auto& item : nums) {
		cout << item << " ";
	}
	cout << endl;
}

int main() {

	//string S = "ababcbacadefegdehijhklij";
	string S = "caedbdedda";
	Solution s;
	
	PrintVectorInt(s.partitionLabels(S));
	
	return 0;
}