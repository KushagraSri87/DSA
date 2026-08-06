class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        for (int i = 0; i < n; i++) {          
            for (int j = 0; j < n; j++) {      

                bool equal = true;

                for (int k = 0; k < n; k++) {  
                    if (grid[i][k] != grid[k][j]) {
                        equal = false;
                        break;
                    }
                }

                if (equal) {
                    count++;
                }
            }
        }

        return count;
    }
};
//optimized solution
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n = grid.size();
        int count = 0;

        map<vector<int>, int> freq;

        // Store all rows and their frequencies
        for (int i = 0; i < n; i++) {
            freq[grid[i]]++;
        }

        // Build each column
        for (int j = 0; j < n; j++) {

            vector<int> column;

            for (int i = 0; i < n; i++) {
                column.push_back(grid[i][j]);
            }

            // Number of rows equal to this column
            count += freq[column];
        }

        return count;
    }
};