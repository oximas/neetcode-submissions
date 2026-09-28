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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* l = nullptr;
        ListNode* l_mid=head,*l_last=nullptr;
        while(l_mid!=nullptr){
            l_last = l_mid->next;
            l_mid->next = l;
            l=l_mid;
            l_mid = l_last;
        }
        return l;
    }
};
