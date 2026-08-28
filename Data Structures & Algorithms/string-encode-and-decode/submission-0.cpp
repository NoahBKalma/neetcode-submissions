class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string& str : strs) {
            size_t strLen = str.size();
            encoded += to_string(strLen) + '#' + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        std::cout << s;
        vector<string> decoded = {};

        int i = 0;
        int currLen = 0;
        string currStr = "";
        while (i < s.size()) {
            while (s[i] >= 48 && s[i] <= 57) {
                currLen = currLen * 10;
                currLen += s[i] - 48;
                i++;
            }
            if (s[i] == '#') {
                i++;
                for (int j = 0; j < currLen; j++) {
                    currStr += s[i];
                    i++;
                }
            } else {
                currStr += to_string(currLen);
            }

            decoded.push_back(currStr);

            currLen = 0;
            currStr = "";
        }

        return decoded;
    }
};
