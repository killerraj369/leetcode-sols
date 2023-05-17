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
    int pairSum(ListNode* head) 
    {
        //O(N) Time & O(N) Space
        
        if(!head) return 0;
        if(!head->next) return head->val;
        
        vector<int> node;
        
        ListNode* t = head;
        
        while(t!=NULL)
        {
            node.push_back(t->val);
            t=t->next;
        }
        
        int i=0;
        int j=node.size()-1;
        
        int ans = INT_MIN;
        
        while(i<j)
        {
            if(node[i]+node[j]>ans) ans=max(ans,node[i]+node[j]);
            i++;
            j--;
        }
        
        return ans;
        
    }
};
