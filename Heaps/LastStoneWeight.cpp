// Use a max heap pop the top 2 elements, smash them and if the diff is non zero add it back to the heap (will arrange automatically)
class Solution {
public:
    int smash(int x, int y) {
        if (x == y) return 0;
        else return abs(x - y);
    }

    int lastStoneWeight(std::vector<int>& stones) {
        priority_queue<int> pq;=
        for (int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }
        while (pq.size() > 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            int result = smash(x, y);
            if (result > 0) {
                pq.push(result);
            }
        }
        if (pq.empty()) return 0;
        return pq.top();
    }
};
