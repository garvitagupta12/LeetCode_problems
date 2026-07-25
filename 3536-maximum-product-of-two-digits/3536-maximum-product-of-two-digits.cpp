class Solution {
public:
    int maxProduct(int n) {
        int x=n;
        int max1=0;
        int max2=0;
        while(x>0)
        {
            int rem=x%10;
            x=x/10;

            if (rem>=max1) 
            {
                max2 = max1;
                max1 = rem;
            }
            else if(rem>max2)
            {
                max2=rem;
            }
        }
        return max1 * max2;
    }
};