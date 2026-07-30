class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude(gain.size() + 1);
        altitude[0] = 0;

        for (int i = 0; i < gain.size(); i++) {
            altitude[i + 1] = altitude[i] + gain[i];
        }

        int max = altitude[0];

        for (int i = 0; i < gain.size() + 1; i++) {
            if (altitude[i] > max) {
                max = altitude[i];
            }
        }

        return max;
    }
};