class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        int ans=0;
        for ( int num : nums ) {
            hashMap[num]++;
        }
        for ( auto pair : hashMap ) {
            if ( pair.second != 2 ) 
                ans = pair.first;
        } 
        return ans;
    }
};