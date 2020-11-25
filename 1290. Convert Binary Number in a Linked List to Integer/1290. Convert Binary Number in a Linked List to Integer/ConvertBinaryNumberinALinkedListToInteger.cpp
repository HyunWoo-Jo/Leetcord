#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if (!head) return 0;
        int result = 0;
        ListNode* list = new ListNode(head->val,head->next);
        while (list){
            result = (result << 1) + list->val;
            list= list->next;
        }
        return result;
    }
};
int main() {
    Solution s;
    ListNode* e1_0 = new ListNode(1);
    ListNode* e1_1 = new ListNode(0);
    ListNode* e1_2 = new ListNode(1);

    e1_0->next = e1_1;
    e1_1->next = e1_2;
    
    ListNode* e2 = new ListNode(0);

    ListNode* e3 = new ListNode(1);

    ListNode* e4_0 = new ListNode(1); //1,0,0,1,0,0,1,1,1,0,0,0,0,0,0
    ListNode* e4_1 = new ListNode(0);
    ListNode* e4_2 = new ListNode(0);
    ListNode* e4_3 = new ListNode(1);
    ListNode* e4_4 = new ListNode(0);
    ListNode* e4_5 = new ListNode(0);
    ListNode* e4_6 = new ListNode(1);
    ListNode* e4_7 = new ListNode(1);
    ListNode* e4_8 = new ListNode(1);
    ListNode* e4_9 = new ListNode(0);
    ListNode* e4_10 = new ListNode(0);
    ListNode* e4_11 = new ListNode(0);
    ListNode* e4_12 = new ListNode(0);
    ListNode* e4_13 = new ListNode(0);
    ListNode* e4_14 = new ListNode(0);


    e4_0->next = e4_1;
    e4_1->next = e4_2;
    e4_2->next = e4_3;
    e4_3->next = e4_4;
    e4_4->next = e4_5;
    e4_5->next = e4_6;
    e4_6->next = e4_7;
    e4_7->next = e4_8;
    e4_8->next = e4_9;
    e4_9->next = e4_10;
    e4_10->next = e4_11;
    e4_11->next = e4_12;
    e4_12->next = e4_13;
    e4_13->next = e4_14;

    ListNode* e5_0 = new ListNode(0);
    ListNode* e5_1 = new ListNode(0);

    e5_0->next = e5_1;

    cout << s.getDecimalValue(e1_0) << endl;
    cout << s.getDecimalValue(e2) << endl;
    cout << s.getDecimalValue(e3) << endl;
    cout << s.getDecimalValue(e4_0) << endl;
    cout << s.getDecimalValue(e5_0) << endl;

	return 0;
}