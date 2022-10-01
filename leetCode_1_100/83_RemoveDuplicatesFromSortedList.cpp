#include <iostream>
#include <vector>
namespace{
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    using namespace std;

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = head;

        while(head != nullptr){
            head = head->next;
            if(head->val != res->val){
                res->next = head;
            }
        }
        return res;
    }

}

int main() {
    
    return 0;
}