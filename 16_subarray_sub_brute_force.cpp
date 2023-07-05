/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int printSubArrays(int arr[], int n){
    
    int largest_sum = 0;
    
    
    for(int i=0; i<n; i++){
        
        for(int j = i; j<n; j++){
             int subArraySum = 0;
           
            for(int k = i; k<=j; k++){
                // cout << arr[k] << ",";
                subArraySum += arr[k];
            }
            // put a check is subArraySum > largest_sum
            largest_sum = max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    
    int n = sizeof(arr)/sizeof(int);
    
    // Brute Force Approach O(N^3) (algorithm)
    cout << printSubArrays(arr, n);

    return 0;
}


