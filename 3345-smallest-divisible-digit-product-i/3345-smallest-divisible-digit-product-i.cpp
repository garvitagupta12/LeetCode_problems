class Solution {
public:
    int prod(int n){
        int r;
        int ans=1;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            ans*=r;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int x;
        for(int i=n; ;i++)
        {
            x=prod(i);
            if(x%t==0)
            {
                return i;
            }
        }
    }
};