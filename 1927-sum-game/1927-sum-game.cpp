class Solution {
public:
    bool findQuestion(string num) {
        for (char c : num) 
        {
            if (c == '?') return true;
        }
        return false;
    }
    bool sumAns(string num) 
    {
        int sumFirst = 0;
        int sumSecond = 0;
        for (int i = 0; i < num.size() / 2; i++) 
        {
            sumFirst += num[i] - '0'; 
        }
        for (int i = num.size() / 2; i < num.size(); i++) 
        { 
            sumSecond += num[i] - '0';
        }
        return !(sumFirst == sumSecond);
    }
    bool sumGame(string num) {
        if (!findQuestion(num)) {
            return sumAns(num);
        }
        int n = num.size();
        int sumFirst = 0, sumSecond = 0;
        int qFirst = 0, qSecond = 0;
        for (int i = 0; i < n / 2; i++) 
        {
            if (num[i] == '?') qFirst++;
            else sumFirst += num[i] - '0';
        }
        for (int i = n / 2; i < n; i++) 
        {
            if (num[i] == '?') qSecond++;
            else sumSecond += num[i] - '0';
        }
        if ((qFirst + qSecond) % 2 != 0) 
        {
            return true;
        }
        return (2 * (sumFirst - sumSecond)) != (9 * (qSecond - qFirst));
    }
};