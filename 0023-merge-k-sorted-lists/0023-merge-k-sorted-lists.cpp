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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>p;
        for(auto &a:lists){
            while(a){
                p.push(a->val);
                a=a->next;
            }
        }
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(p.size()){
         int val=p.top();
         p.pop();
         ListNode* temp=new ListNode(val);
         tail->next=temp;
         tail=tail->next;
        }
        return dummy.next;
    }
};