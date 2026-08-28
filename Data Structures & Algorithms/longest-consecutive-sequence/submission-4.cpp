class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;

        sort(nums.begin(), nums.end());
        for(int num:nums) {
            std::cout << num << " ";
        }

        int longest = 0;
        int currLongest = 0;

        for (size_t i{ 0 }; i < nums.size() - 1; i++) {
            if (nums[i+1] - nums[i] == 1) {
                currLongest++;
            } else if (nums[i+1] - nums[i] == 0) {
            
            } else {
                longest = max(currLongest, longest);
                currLongest = 0;
            }
        }
        longest = max(currLongest, longest);

        return longest + 1;
    }
};
