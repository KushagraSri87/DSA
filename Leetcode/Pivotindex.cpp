class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {

    int leftSum = 0;
    int rightSum = 0;

    // Calculate left sum
    for (int j = 0; j < i; j++) {
        leftSum += nums[j];
    }

    // Calculate right sum
    for (int j = i + 1; j < nums.size(); j++) {
        rightSum += nums[j];
    }

    if (leftSum == rightSum)
        return i;
}

return -1;

        
    }
};
// Optimesed solution 

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        // Create prefix array
        vector<int> prefix(n);
        prefix[0] = nums[0];

        // Build prefix sum array
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        // Check every index as a potential pivot
        for (int i = 0; i < n; i++) {

            int leftSum;
            int rightSum;

            // Special case for first element
            if (i == 0)
                leftSum = 0;
            else
                leftSum = prefix[i - 1];

            // Sum of elements after i
            rightSum = prefix[n - 1] - prefix[i];

            if (leftSum == rightSum)
                return i;
        }

        return -1;
    }
};