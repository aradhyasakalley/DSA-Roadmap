class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        // reversing the first (nums.size() - k) elements
        reverse(nums.begin(), nums.end()-k);
        // reversing the last k elements
        reverse(nums.end()-k,nums.end());
        //reversing the entire array
        reverse(nums.begin(),nums.end());
    }
};