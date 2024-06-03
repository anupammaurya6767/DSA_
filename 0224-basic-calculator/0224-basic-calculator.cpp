class Solution {
public:



int calculate(string s) {
    stack<int> num;  // stack to store numbers
    stack<char> op;  // stack to store operators and parentheses
    int n = s.size();
    int currentNumber = 0;
    int result = 0;
    int sign = 1;  // 1 means positive, -1 means negative

    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if (isdigit(c)) {
            currentNumber = c - '0';
            while (i + 1 < n && isdigit(s[i + 1])) {
                currentNumber = currentNumber * 10 + (s[++i] - '0');
            }
            result += sign * currentNumber;
            currentNumber = 0;
        } else if (c == '+') {
            sign = 1;
        } else if (c == '-') {
            sign = -1;
        } else if (c == '(') {
            num.push(result);
            op.push(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result = op.top() * result + num.top();
            op.pop();
            num.pop();
        }
    }
    return result;
}

};