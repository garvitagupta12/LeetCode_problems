/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
        {
            return {-1, -1};
        }
        vector<int> ans;
        ListNode* temp = head->next;
        ListNode* prev = head;
        ListNode* front = temp->next;
        int num = 2;
        while (front != NULL) 
        {
            if (temp->val < prev->val && temp->val < front->val)
            {
                ans.push_back(num);
            }
            if (temp->val > prev->val && temp->val > front->val)
            {
                ans.push_back(num);
            }
            prev = temp;
            temp = temp->next;
            front = temp->next;
            num++;
        }
        if (ans.size() < 2) return {-1, -1};
        int minDistance = INT_MAX;
        for (int i = 1; i < ans.size(); i++) {
            minDistance = min(minDistance, ans[i] - ans[i - 1]);
        }
        int maxDistance = ans.back() - ans.front();
        return {minDistance, maxDistance};
    }
};