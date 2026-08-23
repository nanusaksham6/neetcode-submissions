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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* prev = NULL;
      ListNode* curr = head;
      if(!head || !head->next) {
        return NULL;
      } 
      if(n == 1){
    curr = head;
    while(curr->next->next){
        curr = curr->next;
    }
    curr->next = NULL;
    return head;
}

      int total = 0;
      while(curr){
        total++;
        curr = curr->next;
      }
      if(n == total){
    return head->next;
}

      curr = head;
      total = total-n;
      while(curr && total>0){
        prev = curr;
        curr = curr->next;
        total--;
      }
      prev->next = curr->next;
      return head;
    }
};
