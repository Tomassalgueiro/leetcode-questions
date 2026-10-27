
// definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode list;
    ListNode* res = &list;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            res->next = new ListNode(list1->val);
            list1 = list1->next;

        } else {
            res->next = new ListNode(list2->val);
            list2 = list2->next;

        }

        res = res->next;
    }

    while (list1 != nullptr) {
        res->next = new ListNode(list1->val);
        res = res->next;
        list1 = list1->next;
    }

    while (list2 != nullptr) {
        res->next = new ListNode(list2->val);
        res = res->next;
        list2 = list2->next;
    }

    return list.next;
}

