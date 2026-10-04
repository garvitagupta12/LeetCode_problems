class Solution {
public:
    bool checkValidString(string s) {
     int miniopen=0;
     int maxopen=0;
     for(char c : s)
    {
        if(c=='(') 
        {
            miniopen++;
            maxopen++;
        }
        else if(c==')')
        {
            miniopen--;
            maxopen--;
        }
        else
        {
            miniopen--;
            maxopen++;
        }
    if(maxopen<0) return false;
    miniopen=max(miniopen,0);
    
    }    
    return miniopen==0; 
    }
};