class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Method 1
        int count = 0;
        int candidate = 0;
        for (int num : nums)
        {
            if (count == 0)
            {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;

        // Method 2

        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};