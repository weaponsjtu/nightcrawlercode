/**
 * @file acm.cc
 * @author Weipeng Zhang
 * @time 2014/4/15 15:30
 *
 *
 * 1. main style
 *    a. function declaretion
 *    b. main function
 *    c. function definition
 *
 * 2. function declaretion
 *    a. decription
 *    b. the website url of this problem
 *    c. input and output
 *    example:
 *        微软2014实习生在线测试之K-th string
 *        http://hihocoder.com/contest/msinterntest/problem/2
 *        Sample In
 *        3
 *        2 2 2
 *        2 2 7
 *        4 7 47
 *
 *        Sample Out
 *        0101
 *        Impossible
 *        01010111011
 *
 *        void find_kstr(type para1, type para2);
 *
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

/**        
 * 1. K-th string
 *
 * 微软2014实习生在线测试之K-th string
 * http://hihocoder.com/contest/msinterntest/problem/2
 *
 * Sample In
 * 3
 * 2 2 2
 * 2 2 7
 * 4 7 47
 *
 * Sample Out
 * 0101
 * Impossible
 * 01010111011
 */
void find_kstr();

int main(int argc, char* argv[]) {
    find_kstr();
}

// compute C(n, m)
long long comb_num(int n, int m) {
    long long result = 1;
    if (m > 0) {
        for (int i = 1; i <= m; i++) {
            result *= (n - i + 1);
        }
        for (int i = 2; i <= m; i++) {
            result /= i;
        }
    }
    return result;
}

void find_kstr() {
    int count, n, m, k, tmp;
    scanf("%d", &count);
    while (count--) {
        scanf("%d %d %d", &n, &m, &k);
        if (k > comb_num(n + m, n)) {
            printf("Impossible\n");
            continue;
        }
            
        char k_str[n + m + 1];
        k_str[m + n] = '\0';
        int i, j, ch = 0;
        for (i = 0, j = 1; i < m && j <= n; ) {
            tmp = comb_num(m - i + n - j, n - j);
            if (k < tmp) { // if the highest value is 1
                k_str[ch++] = '0';
                j++;
            } else if (k > tmp) {
                k_str[ch++] = '1';
                k -= tmp;
                i++;
            } else {
                k_str[ch++] = '0';
                while (i < m) {
                    k_str[ch++] = '1';
                    i++;
                }
                while (j < n) {
                    k_str[ch++] = '0';
                    j++;
                }
            }
        }
        printf("%s\n", k_str);
    }
}
