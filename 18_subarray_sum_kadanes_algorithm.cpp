/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int maximum_subarray_sum(int arr[],int n){
    
    int cs = 0;
    int largest = 0;
    
    for(int i=0; i<n; i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largest = max(largest,cs);
    }
    return largest;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    cout << maximum_subarray_sum(arr,n);

    return 0;
}