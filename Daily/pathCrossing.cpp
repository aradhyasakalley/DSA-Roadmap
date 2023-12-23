class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> visited;
        int x = 0, y = 0;
        visited.insert({x, y}); 

        for (char dir : path) {
            if (dir == 'N') y++;
            else if (dir == 'S') y--;
            else if (dir == 'E') x++;
            else if (dir == 'W') x--;

            pair<int, int> newCoord = {x, y};

            if (visited.find(newCoord) != visited.end()) {
                return true; 
            } else {
                visited.insert(newCoord); 
            }
        }

        return false; 
    }
};