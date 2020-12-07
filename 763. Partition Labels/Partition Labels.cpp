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
			map_charMax[S[i]] = i;// map�� �̿��� ���� ������ �ִ� ��ġ�� ���Ѵ�.
 		}
		for (int i = 0; i < S.size(); i++) { 
			endNumber = max(map_charMax[S[i]], endNumber); // ��ȸ�ϸ� �߰����� �ִ� ��ġ�� �����Ѵ�.
			if (i == endNumber) { // �ִ���ġ�� i�� ��ġ�� ���� ��� ��Ƽ���� ������. 
				int number = endNumber - startNumber + 1;
				result.push_back(number);
				startNumber = i + 1; //�ּ� ��ġ�� ������ �ش�.
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