class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, added = 0;
        for (char ch : s) 
        {
            if (ch == '(') 
            {
                open++;
            }
            else if (open) 
            {
                open--;  
            }
            else added++; 
        }
        return added + open; 
    }
};