class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        int j=0;
        double total=0.0;
        int value;
        for(int i=0;i<prices.size();i++)
        {
            if(j==discounts.size())
            {
                total+=prices[i];
            }
            else
            {
                total+= (prices[i] * (100.0 - discounts[j]) ) /100.0;
                j++;
            }
        }
        return total;
    }
};