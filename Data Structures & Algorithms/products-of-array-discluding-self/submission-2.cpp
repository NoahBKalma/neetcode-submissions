class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> final = {};
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        for (size_t i{ 1 }; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int i = { (int)nums.size() - 2 }; i >= 0 ; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        for(size_t i{ 0 }; i < nums.size(); i++) {
            final.push_back(prefix[i]*suffix[i]);
        }

        return final;
    }
};
