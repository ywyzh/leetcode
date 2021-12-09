#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};

int main() {
	Solution solution;
	vector<int> position;
	vector<int> nums = {1,2,3,4,5,6,7,8,9};
	int target = 9;
	position = solution.twoSum(nums,target);
	for(auto i : position)
		cout << i << endl;
	return 0;
}
