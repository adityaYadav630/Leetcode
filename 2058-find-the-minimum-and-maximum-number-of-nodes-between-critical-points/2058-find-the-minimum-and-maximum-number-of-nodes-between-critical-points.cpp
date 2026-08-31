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
        vector<int>nums;
        while(head){
            nums.push_back(head->val);
            head=head->next;
        }
        vector<int>indexs;
        for(int i=1;i<nums.size()-1;i++){
            //local maxima
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
             indexs.push_back(i);   
            }
            //local minima
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
              indexs.push_back(i);
            }
        }
            if(indexs.size()<2)return {-1,-1};
            int mind=INT_MAX;
            int maxd=INT_MIN;
            sort(indexs.begin(),indexs.end());
            maxd=indexs[indexs.size()-1]-indexs[0];
            mind=indexs[1]-indexs[0];
            for(int i=1;i<indexs.size();i++){
                mind=min(mind,abs(indexs[i]-indexs[i-1]));
            }
            return {mind,maxd};
    }
};