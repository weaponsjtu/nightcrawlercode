#include <iostream>
#include <string>
#include <algorithm>
#include <math>

using namespace std;

class Solution{
    public:
    /**
     * @brief s = "the sky is blue "   result = "blue  is sky the"
     * Time O(n), Space O(1)
    */
    void ReverseWords(string& s) {
        reverse(s.begin(), s.end());
        cout << s << endl;
	int i = 0, j = 0;
	while (i < s.length()) {
	    if (s[i] == ' ') {
		while (s[++i] == ' ' && i < s.length()) {
		    s.erase(i, 1);
                    i--;
		}
	    } else {
		j = i;
		while (s[++j] != ' ' && j < s.length()) {}
                for (int k = i; k < i + (j - i) / 2; k++) {
                    char temp = s[k];
                    s[k] = s[j - k + i - 1];
                    s[j - k + i - 1] = temp;
                }
		i = j;
	    }
	}
	if (s[0] == ' ') s.erase(0, 1);
	if (s[s.length() - 1] == ' ') s.erase(s.length() - 1, 1);
    }

    /**
     * @brief s = "the sky is blue "   result = "blue is sky the"
     * Time O(n), Space O(n)
    */
    void ReverseWords_V1( string& s ){
        string ss;
        int i = s.length() - 1;
        while( i >= 0 ){
            while( i >= 0 && s[i] == ' ' ){
                i--;
            }
            if( i < 0 ) break;
            if( ss.length() != 0 ){
                ss.append(' ');
            }
            string temp;
            for( ; i >= 0 && s[i] != ' '; i-- ){
                temp.push_back( s[i] );
            }
            reverse( temp.begin(), temp.end() );
            ss.append( temp );
        }
        s = ss;
    }




    /**
     * @brief Search in Rotated Sorted Array
     * [4,5,6,7,0,1,2]
     */
    void search(int A[], int n, int target) {
      int first = 0, last = n;
      while (first != last) {
        int mid = (first + last) / 2;
        if (A[mid] == target) {
          return mid;
        }
        if (A[first] < A[mid]) {
          if (A[first] <= target && target < A[mid]) {
            last = mid;
          } else {
            first = mid + 1;
          }
        } else {
          if (A[mid] < target && target <= A[last]) {
            first = mid + 1;
          } else {
            last = mid;
          }
        }
        // first++;  //skip duplicate one
        //
      }
      return -1;
    }


    /**
     * For example, given the array [2,3,-2,4],
     * the contiguous subarray [2,3] has the largest product = 6
     */
    int maxProduct( int A[], int n ){
        int min = A[0];
        int max = A[0];
        int ans = A[0];
        for( int i = 1; i < n; i++ ){
            int temp = min * A[i];
            min = min( A[i], min( temp, max * A[i] ) );
            max = max( A[i], max( temp, max * A[i] ) );
            ans = max( ans, max );
        }
        return ans;
    /**
     * @brief find the median number of two sorted arrays
     */
    void FindMedianSortedArrays(int A[], int m, int B[], int n) {
    }

    void NextPermutation(vector<int> &num) {
      int len = num.size();
      int pivot = 0, i = 0;
      while (i < len - 1) {
        if (num[i] < num[i + 1]) {
          pivot = i;
          i++;
          while (i < len - 1 && num[i] < num[i + 1]) { i++; }
        } else {
          i++;
        }
      }

      int bigger = 0, gap = 10000;
      for (int j = i; j < len; j++) {
        if (num[j] > num[i] && num[j] - num[i] < gap) {
          bigger = j;
          gap = num[j] - num[i];
        }
      }

      //swap pivot and bigger
      //reverse pivot + 1 to the last
    }

    /**
     * @brief the k-th of permutation (1, 2, 3, ..., n)
     * a1 = k / (n-1)!
     */
    void KthPermutation(int n, int k) {
    }

    void IsValidSudoku(const vector< vector<char> >& board) {
    }

    void TrapWater(int A[], int n) {
      int *max_left = new int[n]();
    }
};

int main(int argc, char* argv[]) {
  Solution A; 
  string s = " the  hello    sky is blue ";
  A.reverseWords(s);
  cout << s << endl;
}
