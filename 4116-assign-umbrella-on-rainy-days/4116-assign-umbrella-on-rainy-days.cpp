class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> answer(n, "None");
        int alicecount=0, bobcount=0;
        for (int i=0; i<n; ++i) 
        {
            bool aliceneeds=(i<n-1 && rain[i]==1 && rain[i+1]==1);
            bool bobneeds = (rain[i]==1);
            if (aliceneeds && bobneeds) 
            {
                if (alicecount <= bobcount) 
                {
                    answer[i]="Alice";
                    alicecount++;
                } 
                else 
                {
                answer[i]="Bob";
                bobcount++;
                }
            } 
            else if (bobneeds)
            {
                answer[i]="Bob";
                bobcount++;
            }
        }
        return answer;
    }
};