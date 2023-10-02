class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //first approach
        // iterate and pop the zeroes and maintain a counter
        // then push back the same number of zeroes in the array
        int count = 0;
        vector<int>::iterator it = nums.begin(); 
        while (it != nums.end()) {
            if (*it == 0) {
                count++;
                it = nums.erase(it);  iterator
            } else {
                ++it; 
            }
        }
        for (int i = 0; i < count; i++) {
            nums.push_back(0); 
        }
    }
};
