class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0;
        int product=1;
        int ans=0;
        while(x>0)
        {
            int r=x%10;
            x=x/10;
            sum+=r;
            product*=r;
        }
        ans = product + sum ;
        return n%ans==0;
    }
};