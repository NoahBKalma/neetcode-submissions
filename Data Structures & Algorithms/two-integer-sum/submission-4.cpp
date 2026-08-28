class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int diff = target-nums[i];
            if(numMap.contains(diff))
                return vector<int>{numMap[diff], i};
            numMap[nums[i]] = i;
        }
        return {};
    }
};
