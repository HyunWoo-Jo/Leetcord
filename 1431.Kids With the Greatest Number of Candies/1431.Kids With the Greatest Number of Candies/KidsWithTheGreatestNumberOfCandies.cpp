#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results;
        int maxCandy = 0;
        for (int i = 0; i < candies.size(); i++) 
            if (maxCandy < candies[i]) 
                maxCandy = candies[i];    

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies < maxCandy) 
                results.push_back(false);
            else 
                results.push_back(true);   
        }
        return results;
    }
    void static printVector(vector<bool> result) {
        for_each(result.begin(), result.end(), Solution::print);
        cout << "\n";
    }
private:
    void static print(int n) {
        cout << n << " "; 
    }
   
};

int main() {
    
    Solution solution;
    vector<int> e1 = { 2,3,5,1,3 };
    vector<int> e2 = { 4,2,1,1,2 };
    vector<int> e3 = { 12,1,12 };


    Solution::printVector(solution.kidsWithCandies(e1,3));
    Solution::printVector(solution.kidsWithCandies(e2,1));
    Solution::printVector(solution.kidsWithCandies(e3,10));


	return 0;
}