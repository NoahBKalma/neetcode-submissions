class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        int letterCount[150] = {0};
        for(char& c : s) {
            letterCount[c]++;
        }

        for(char& c : t) {
            letterCount[c]--;
        }

        for(int i : letterCount) {
            if(i != 0) return false;
        }
        return true;
    }
};
