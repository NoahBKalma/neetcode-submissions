class Solution {
public:
    bool isValid(string s) {
        if (s.empty() || s.size() % 2 != 0)
            return false;

        stack<char> openerStack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                openerStack.push(c);
            }
            else {
                if (openerStack.empty())
                    return false;

                char open = openerStack.top();
                openerStack.pop();

                if (c == ')' && open != '(')
                    return false;
                if (c == '}' && open != '{')
                    return false;
                if (c == ']' && open != '[')
                    return false;
            }
        }

        return openerStack.empty();
    }
};