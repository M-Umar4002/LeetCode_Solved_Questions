class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        for(int i = 0, c = capacity; i < plants.size(); i++) {
            if(capacity >= plants[i]) {
                capacity -= plants[i];
                steps++;
            } else {
                capacity = c, i--;
                steps += 2 * (i + 1);
            }
        }
        return steps;
    }
};