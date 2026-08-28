class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {
            if(numMap.contains(target-nums[i])) return vector<int>{numMap[target-nums[i]], i};
            numMap.insert({nums[i], i});
        }
        if(numMap.contains(target-nums[n-1])) return vector<int>{numMap[target-nums[n-1]], n-1};
        return vector<int> {10,10};
    }
};
