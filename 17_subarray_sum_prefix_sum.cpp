/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//prefix sum approach O(N^2)
int largestSubarraySum2(int arr[],int n){
    
    //prefix sums
    int prefix[100] = {0};
    prefix[0] = arr[0];
    
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    //largest sum
    int largest_sum = 0;
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            // put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum,subarraySum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    cout << largestSubarraySum2(arr,n);

    return 0;
}