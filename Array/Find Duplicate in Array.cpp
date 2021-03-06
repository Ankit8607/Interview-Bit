/*

Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.

Sample Input:

[3 4 1 4 1]
Sample Output:

1
If there are multiple possible answers ( like in the sample case above ), output any one.

If there is no duplicate, output -1

*/

// We have 2 ways to solve this question

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  
    int slow = A[0];
  int fast = A[A[0]];
  while (slow != fast) {
    slow = A[slow];
    fast = A[A[fast]];
  }

  fast = 0;
  while (slow != fast) {
    slow = A[slow];
    fast = A[fast];
  }
  if(slow==0) return -1;
  return slow;

}


// way 2


int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int arr[n+10]={0};
    for(int i=0;i<n;i++){
        arr[A[i]]++;
        if(arr[A[i]]>1){
            return A[i];
        }
    }
    return -1;
}
