class Solution {
public:
    int maxScore(string s) {
        int countOfOnes = count(s.begin(),s.end(),'1');
        int result = 0;
        int countOfZeroes = 0;

        for ( int i = 0 ; i < s.size() ; i++ ) {
            if (s[i] == '1') {
                countOfOnes--;
            } else {
                countOfZeroes++;
            }

            result = max(result,countOfOnes+countOfZeroes);
        }
        return result;
    }
};