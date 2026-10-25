class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        long long totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }

        long long leftSum = 0;

        for (int i = 0; i < n; i++) {
            long long leftCount = i;
            long long rightCount = n - i - 1;

            long long rightSum = totalSum - leftSum - nums[i];

            long long leftDiff = 1LL * nums[i] * leftCount - leftSum;
            long long rightDiff = rightSum - 1LL * nums[i] * rightCount;

            result[i] = leftDiff + rightDiff;

            leftSum += nums[i];
        }

        return result;
    }
};