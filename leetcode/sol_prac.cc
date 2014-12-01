/**
 * @file sol_prac.cc
 * @author Weipeng Zhang
 * @time 2014/1/16 13:28
 *
 * fabs(a - b) < 1e-9
 * x % 2 != 0
 *
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
         * time complexity o(n), space complexity o(1)
         * [1, 1, 2, 2, 4, 5, 5, 5]
         */
        int remove_dumplicates(int A[], int n) {
            if (n == 0) return 0;
            
            int index = 0;
            for (int i = 1; i < n; i++) {
                if (A[index] != A[i]) {
                    index += 1;
                    A[index] = A[i];
                }
            }
            return index + 1;
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

        /**
         * @brief Given an input string, reverse the string word by word.
         */
        void reverse_words(string &s) {

        }
};


int main(int argc, char* argv[]) {
    cout << -1 % 2 << endl;
    return 0;
}
