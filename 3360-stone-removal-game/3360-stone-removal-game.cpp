class Solution {
public:
    bool canAliceWin(int n) {
        int start=10;
        bool ans=true;
        while(n>=start)
        {
            n=n-start;
            start--;
            ans = !ans;
        }
        return !ans;
    }
};