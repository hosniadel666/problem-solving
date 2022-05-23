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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr)
            return nullptr;
        
        ListNode* indx_1, *indx_2, *out_indx, *output = new ListNode();
        indx_1 = list1;
        indx_2 = list2;
        out_indx = output;
        int flag = 0;

        while(indx_1 != nullptr || indx_2 != nullptr){
            if(flag){
                out_indx->next = new ListNode();
                out_indx = out_indx->next;
            }
            flag++;
            
            if(indx_1 == nullptr){
                out_indx->val = indx_2->val;
                indx_2 = indx_2->next;
                continue;
            }
            
            if(indx_2 == nullptr){
                out_indx->val = indx_1->val;
                indx_1 = indx_1->next;
                continue;
            }
            
            if(indx_1->val <= indx_2->val){
                out_indx->val = indx_1->val;
                indx_1 = indx_1->next;
            }
            else{
                out_indx->val = indx_2->val;
                indx_2 = indx_2->next;
            }
            
        }
        return output;
    }
};