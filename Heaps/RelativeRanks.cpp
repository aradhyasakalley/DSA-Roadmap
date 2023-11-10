class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& scores) {
        priority_queue<int>pq; 
        for ( auto score : scores ) {
            pq.push(score);
        } 
        int i = 1;
        map<int,string>mp;
        while( !pq.empty() ) {
            if ( i == 1 ) {
                mp.insert({pq.top(),"Gold Medal"});
                pq.pop();
                i++;
            } else if ( i == 2 ) {
                mp.insert({pq.top(),"Silver Medal"});
                pq.pop();
                i++;
            } else if ( i == 3 ) {
                mp.insert({pq.top(),"Bronze Medal"});
                pq.pop();
                i++;
            } else {
                string st = to_string(i);
                mp.insert({pq.top(),st});
                pq.pop();
                i++;
            }
        }
        vector<string>answer;
        for ( int i = 0 ; i < scores.size() ; i++ ) {
            answer.push_back(mp[scores[i]]);
        }
        return answer;
    }
};