/*

Write a function that takes an integer and returns the number of 1 bits it has.


Problem Constraints
1 <= A <= 109


Input Format
First and only argument contains integer A


Output Format
Return an integer as the answer


Example Input
Input1:
    11


Example Output
Output1:
3


Example Explanation
Explaination1:
11 is represented as 1101 in binary 

*/

// Smart way

int Solution::numSetBits(unsigned int A) {
    return __builtin_popcount(A);
}



// mine way

int Solution::numSetBits(unsigned int A) {
    int ans=0;
    for(int i=0;i<32;i++){
        if(A&(1<<i)) ans++;
    }
    return ans;
}
