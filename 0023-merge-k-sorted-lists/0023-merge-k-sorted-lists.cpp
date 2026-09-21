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
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>p;
        for(auto &a:lists){
            if(a==NULL)continue;
                p.push({a->val,a});
        }
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(p.size()){
         ListNode* temp=p.top().second;
         tail->next=temp;
         tail=tail->next;
         p.pop();
         if(temp->next){
            p.push({temp->next->val,temp->next});
         }
        }
        return dummy.next;
    }
};