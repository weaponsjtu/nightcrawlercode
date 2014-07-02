/**
 * @file sol_prac.cc
 * @author Weipeng Zhang
 * @time 2014/1/16 13:28
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <stack>

using namespace std;

struct Point {
    int x;
    int y;
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
    public:
        Solution(){}
        /**
         * @brief Sort a linked list in O(n logn) time using constant space complexity
         */
        ListNode* sort_list(ListNode* head) {
           return NULL;    
        }

        /**
         * @brief Remove duplicates element in Sorted Array
         */
        int remove_dumplicates(int A[], int n) {
            //TODO
        }
        
        /**
         * @brief Add two numbers, linked list
         */
        ListNode* add_two_numbers(ListNode* l1, ListNode* l2) {
            ListNode dummy(-1);
            ListNode* ptr = &dummy, *old_ptr = &dummy;
            ListNode* first_nine = NULL;
            int tmp;
            for (ListNode* pa = l1, *pb = l2; pa != NULL || pb != NULL; pa = pa->next, pb = pb->next) {
                tmp = pa->val + pb->val;
                if (tmp < 9) {
                    ptr->val = tmp;
                } else if (tmp == 9) {
                    ptr->val = tmp;
                    first_nine = ptr;
                } else {
                    ptr->val = tmp - 10;
                    old_ptr->val += 1;
                    while (first_nine != NULL && first_nine != ptr) {
                        first_nine->val = 0;
                        first_nine = fisrt_nine->next;
                    }
                }
                ptr->next = new ListNode;
                old_ptr = ptr;
                ptr = ptr->next;
            }
            return &dummy;
        }

        /**
         * @brief Reverse a linked list from position m to n. Do it in-place and in one-pass.
         */
        ListNode *reverse_between(ListNode *head, int m, int n) {
            ListNode dummy(-1);
            dummy->next = head;
            ListNode *ptr = &dummy;
            
        }

};


int main(int argc, char* argv[]) {
    cout << -1 % 2 << endl;
    return 0;
}
