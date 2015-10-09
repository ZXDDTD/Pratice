struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
            val(x), next(NULL) {
      }
};

class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        vector<int> value;
        while(head!=NULL)
        {
            value.insert(value.begin(), head->val);
            head = head->next; 
        }
        return value;
    }
};
