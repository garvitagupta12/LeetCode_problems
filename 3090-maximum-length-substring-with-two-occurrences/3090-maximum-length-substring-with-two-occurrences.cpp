class Solution {
public:
    int maximumLengthSubstring(string s) {
        int start = 0;
        int end = 0;
        int ans = 0, result = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) 
        {
            mp[s[i]]++;
            while (mp[s[i]] > 2) 
            {
                mp[s[start]]--;
                start++;
            }
            ans = end - start + 1;
            result = max(ans, result);
            end++;
        }
        return result;
    }
};