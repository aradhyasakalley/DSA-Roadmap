#include <vector>
#include <algorithm> // Include the algorithm header for std::sort
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < nums.size() - 1; i++) { 
            if (nums[i + 1] != nums[i] + 1) {
                return nums[i] + 1;
            }
        }
        if (nums[0] != 0) {
            return 0;
        } else {
            return nums[nums.size() - 1] + 1;
        }
    }
};
