class Solution {
public:
    int minOperations(string s) {
       int operations1 = 0 , operations2 = 0;
       char expectedBit = '0';
       
       for ( auto c : s ) {
           if ( c != expectedBit ) {
               operations1++;
           }
           expectedBit = (expectedBit == '0') ? '1' : '0';
       }

       expectedBit = '1';
       for ( auto c : s ) {
           if ( c != expectedBit ) {
               operations2++;
           }
           expectedBit = (expectedBit == '0') ? '1' : '0';
       }

       return min(operations1,operations2);
    }
};