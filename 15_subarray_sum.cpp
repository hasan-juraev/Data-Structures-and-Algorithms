/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void printSubarrays(int arr[],int n){
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){ 0 < 6 = until index 5, total 6 times iteration
            for(int k=i; k<=j; k++){ k=6
                cout <<arr[k] << ",";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    
    printSubarrays(arr,n);

    return 0;
}