class Solution {
public:
    bool isAlphanumeric(char c) {
        if ((c <= 57 && c >= 48) || // check for number
            (c <= 90 && c >= 65) || // check for caps letter
            (c <= 122 && c >= 97)) { // check for lowercase letter
            return true;
        } else {
            return false;
        }
    }

    bool isPalindrome(string s) {
        string strippedStr = "";

        for (char c : s) {
            if (isAlphanumeric(c)) {
                if (c <= 90 && c >= 65) c += 32;
                   strippedStr += c;
            }
        }
        string reversedStr = strippedStr;
        std::cout << reversedStr << " : " << strippedStr;
        reverse(reversedStr.begin(), reversedStr.end());
        if (reversedStr == strippedStr) return true;
        else return false;
    }
};
