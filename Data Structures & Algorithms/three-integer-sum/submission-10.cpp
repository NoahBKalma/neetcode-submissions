class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};

        set<vector<int>> finalSet;
        vector<vector<int>> final;

        int left = 1;
        int right = nums.size() - 1;
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        int target = 0;
        for (size_t i{ 0 }; i < sortedNums.size(); i++) {
            left = i+1;
            right = nums.size() - 1;
            target = -sortedNums[i];

            while (right > left) {
                if (sortedNums[left] + sortedNums[right] == target) {
                    finalSet.insert({sortedNums[i],sortedNums[left],sortedNums[right]});
                    right--;
                } else if (sortedNums[right] + sortedNums[left] > target) {
                    right--;
                } else if (sortedNums[right] + sortedNums[left] < target) {
                    left++;
                }
            }
        }

        for (auto item : finalSet) {
            final.push_back(item);
        }
        return final;
    }
};
