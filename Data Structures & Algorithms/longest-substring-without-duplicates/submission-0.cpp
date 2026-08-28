class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> seenChars;
        int maxSize = 0;
        int left = 0;
        int sLength = s.size();

        for (int right{ 0 }; right < sLength; right++) {
            while (seenChars.contains(s[right])) {
                left++;
                seenChars.erase(s[left-1]);
            }
            seenChars.insert(s[right]);
            maxSize = max(maxSize, right - left + 1);
        }

        return maxSize;
    }
};
