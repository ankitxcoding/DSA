#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    struct ListNode *next;
    ListNode(int x) {
        data=x;
        next=NULL;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
};
