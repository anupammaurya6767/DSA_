class Solution {
public:




int calculate(string s) {
    deque<int> numbers;
    deque<int> signs;
    int n = s.size();
    int currentNumber = 0;
    int result = 0;
    int sign = 1;

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
            numbers.push_back(result);
            signs.push_back(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result = signs.back() * result + numbers.back();
            signs.pop_back();
            numbers.pop_back();
        }
    }
    return result;
}

};