/**
 * @file single_number.cc
 * @author Weipeng Zhang
 * @time 2013/12/27 23:38
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
         * @brief 1. the sum of each bit mod2; 2. just xor them
         */
        int single_number(int A[], int n) {
            int bit_sum[32];
            for (int i = 0; i < 32; i++) {
                for (int j = 0; j < n; j++) {
                    bit_sum[i] += A[j]%2;
                    //TODO
                }
            }
        }

        /**
         * @brief 1. Reverse Polish Notation.
         * 2. the back tranverse of arithmatic tree
         * 3. Solution: L, R, O
         */
        /*int eval_RPN(vector<string> &tokens) {
            char left[100], right[100];
            memset(left, 0, 100);
            memset(right, 0, 100);
            int len = tokens.size(), i = 0;
            while (i < len) {
                if (left[0] == '\0') {
                    sprintf(left, "%s",  tokens[i].c_str());
                    printf("left: %s\n", left);
                } else {
                    if (right[0] == '\0') {
                        sprintf(right, "%s", tokens[i].c_str());
                        printf("right: %s\n", right);
                    } else {
                        if (tokens[i] == "+") {
                            sprintf(left, "%d", atoi(left) + atoi(right));
                        } 
                        else if (tokens[i] == "-") {
                            sprintf(left, "%d", atoi(left) - atoi(right));
                        }
                        else if (tokens[i] == "*") {
                            sprintf(left, "%d", atoi(left) * atoi(right));
                        }
                        else if (tokens[i] == "/") {
                            sprintf(left, "%d", atoi(left) / atoi(right));
                        } else {
                            cout << "wrong operand." << endl;
                        }
                        memset(right, 0, 100);
                    }
                }
                i++;
            }
            return atoi(left);
        }*/

        /**
         * @brief use stack to solve
         */
        int eval_RPN(vector<string> &tokens) {
            stack<int> number;
            int len = tokens.size();
            int left, right;
            for (int i = 0; i < len; i++) {
                if (tokens[i] == "+") {
                    right = number.top();
                    number.pop();
                    left = number.top();
                    number.pop();
                    number.push(left + right);
                } 
                else if (tokens[i] == "-") {
                    right = number.top();
                    number.pop();
                    left = number.top();
                    number.pop();
                    number.push(left - right);
                }
                else if (tokens[i] == "*") {
                    right = number.top();
                    number.pop();
                    left = number.top();
                    number.pop();
                    number.push(left * right);
                }
                else if (tokens[i] == "/") {
                    right = number.top();
                    number.pop();
                    left = number.top();
                    number.pop();
                    number.push(left / right);
                }
                else {
                    number.push( atoi( tokens[i].c_str() ) );
                }
            }
            return number.top();
        }

        /**
         * @brief
         */
        int max_points(vector<Point> &points) {
            //TODO
        }

        /**
         * @brief Sort a linked list in O(n logn) time using constant space complexity
         */
        ListNode* sort_list(ListNode* head) {:
            
        }
};


int main(int argc, char* argv[]) {
    Solution* a = new Solution();
    vector<string> tokens;
    tokens.push_back("2");
    tokens.push_back("1");
    tokens.push_back("+");
    tokens.push_back("4");
    tokens.push_back("4");
    tokens.push_back("+");
    tokens.push_back("*");
    int res = a->eval_RPN(tokens);
    cout << res << endl;
    return 0;
}
