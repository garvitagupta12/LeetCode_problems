class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val)
        {
            ListNode* temp = head->next;
            delete head;
            head = temp;
        }
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) 
        {
            if (temp->next->val == val) 
            {
                ListNode* curr = temp->next;
                temp->next = curr->next;
                delete curr;
            } 
            else 
            {
                temp = temp->next;
            }
        }
        return head;
    }
};