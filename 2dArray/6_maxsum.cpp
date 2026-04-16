#include <iostream>
using namespace std;

int rowWithMaxSum(int arr[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    int index = -1;

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        
        // Calculate sum of each row
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }

        // Update max sum and index
        if (sum > maxSum) {
            maxSum = sum;
            index = i;
        }
    }

    return index;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = rowWithMaxSum(arr, 3, 3);

    cout << "Row with maximum sum: " << result << endl;

    return 0;
}