class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numsInList;
        for(int num : nums) {
            if(numsInList.contains(num)) return true;
            else numsInList.insert(num);
        }

        return false;
    }
};