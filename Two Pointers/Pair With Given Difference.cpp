/*

**Problem Description**

Given an one-dimensional unsorted array **A** containing **N** integers.

You are also given an integer **B**, find if there exists a pair of elements in the array whose difference is **B**.

Return **1** if any such pair exists else return **0**.

**Problem Constraints**

- 1 <= N <= 10
    
    5
    
- 10 <= A[i] <= 10
    
    3
    
    3
    
- 10 <= B <= 10
    
    5
    
    5
    

**Input Format**

First argument is an integer array **A** of size **N**.

Second argument is an integer **B**.

**Output Format**

Return **1** if any such pair exists else return **0**.

**Example Input**

Input 1:

```
 A = [5, 10, 3, 2, 50, 80]
 B = 78

```

Input 2:

```
 A = [-10, 20]
 B = 30

```

**Example Output**

Output 1:

```
 1

```

Output 2:

```
 1

```

**Example Explanation**

Explanation 1:

```
 Pair (80, 2) gives a difference of 78.

```

*/


// My approach

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
        int it=lower_bound(A.begin(),A.end(),B+A[i])-A.begin();
        if(A[it]==B+A[i] and it!=i) return 1;
    }
    return 0;
}

// Better approach

bool findPair(vector<int>&arr, int size, int n)  
{  
    // Initialize positions of two elements  
    int i = 0;  
    int j = 1;  
   sort(arr.begin(),arr.end());
    // Search for a pair  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {
            return true;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
    return false;  
}  
int Solution::solve(vector<int> &A, int B) {
    return findPair(A,A.size(),B);
}
