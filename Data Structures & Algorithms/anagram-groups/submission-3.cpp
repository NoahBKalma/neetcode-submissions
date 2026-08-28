class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) return {};
        if (strs.size() == 1) return {{strs[0]}};

        std::unordered_map<string, vector<string>> anagrams = {};

        int strSize = strs.size();
        for (string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagrams[sortedStr].push_back(str);
        }

        vector<vector<string>> finalAnagramList;
        for (auto& [key, value] : anagrams) {
            finalAnagramList.push_back(value);
        }
        return finalAnagramList;
    }
};
