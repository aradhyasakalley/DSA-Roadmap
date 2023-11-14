
//Input: nums = [3,2,1,5,6,4], k = 2
// 1 2 3 4 5 6

//Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
//1 2 2 3 3 4 5 5 6

// push into a max heap and pop till the kth element from top 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for ( auto num : nums ) {
            pq.push(num);
        }
        for (int i = 0; i < k - 1; ++i) {
            pq.pop();
        }
        int answer = pq.top();
        return answer;
    }
};