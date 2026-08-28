class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<pair<int, int>> numVec;
        unordered_map<int, int> numMap;

        vector<int> final;

        for (int n : nums) {
            numMap[n]++;
        }

        for (auto& [key,value] : numMap) {
            numVec.push_back({value, key});
        }
        sort(numVec.begin(), numVec.end());

        int n = numVec.size();
        for (int i = n - 1; i > n - 1 - k; i--) {
            final.push_back(numVec[i].second);
        }

        return final;
    }
};
