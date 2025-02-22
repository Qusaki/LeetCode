/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 **/
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL){
        return NULL;
    }

    struct ListNode *ptr = head;
    struct ListNode *ptr2 = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
        if(ptr->val == ptr2->val){
            ptr2->next = ptr->next;
            free(ptr);
            ptr = ptr2;
        }
        else{
            ptr2 = ptr;
        }
    }
    return head;
}