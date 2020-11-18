#include <iostream>
#include <string>
#include <vector>   

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string results = s;
        for (int i = 0; i < s.size(); i++)
            results[indices[i]] = s[i];
        return results;
    }
};
int main() {
    Solution s;
    vector <int> indices = { 4,5,6,7,0,2,1,3 };
    cout << s.restoreString("codeleet", indices) << endl;

    return 0;
}