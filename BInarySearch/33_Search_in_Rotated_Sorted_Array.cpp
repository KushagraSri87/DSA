class Solution {
public:

    int Pivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
        }
        return s;
    }

    int binarysearch(vector<int>& nums, int s, int e, int target) {

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (target > nums[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int p = Pivot(nums);

        if (target >= nums[p] && target <= nums[nums.size() - 1]) {
            return binarysearch(nums, p, nums.size() - 1, target);
        }
        else {
            return binarysearch(nums, 0, p - 1, target);
        }
    }
};