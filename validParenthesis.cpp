#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            } else {
                if (stack.empty()) return false;
                char top = stack.top();
                if ((s[i] == ')' && top != '(') ||
                    (s[i] == '}' && top != '{') ||
                    (s[i] == ']' && top != '[')) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};

int main() {
    Solution solution;
    
    string s;
    cout << "Enter a string containing parentheses: ";
    cin >> s;
    
    if (solution.isValid(s)) {
        cout << s << " has balanced parenthesis" << endl;
    } else {
        cout << s << " doesn't have balanced parenthesis" << endl;
    }
    
    return 0;
}
