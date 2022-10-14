class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string answer;
        while (num1.length() > 0 || num2.length() > 0 || carry != 0) {
            int num1Temp = '0';
            if (num1.length() > 0) {
                num1Temp = num1.back();
                num1.pop_back();
            }
            int num2Temp = '0';
            if (num2.length() > 0) {
                num2Temp = num2.back();
                num2.pop_back();
            }
            int add = ((num1Temp - '0' ) + (num2Temp - '0') + carry);
            carry = (add / 10);
            char addChar = (add % 10) + '0';
            answer += addChar;
            
            /*
            cout << num1Temp << '\n';
            cout << num2Temp << '\n';
            cout << add << '\n';
            cout << carry << '\n';
            cout << addChar << '\n';
            cout << answer << '\n';
            */
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};