class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        int n=types.size();
        stack<vector<int>> st;
        for(int i=0;i<n;++i)
        {
            if(!st.empty() && st.top()[0]==colors[i] && st.top()[1]==types[i])
            {
               vector<int> x=st.top();
                st.pop();
                x[2]++;
                st.push(x);
            }
            else
            {
                st.push({colors[i],types[i],1});
            }
            if(st.top()[2]==groupSize[st.top()[1]]) st.pop();
        }
        return st.empty();
    }
};