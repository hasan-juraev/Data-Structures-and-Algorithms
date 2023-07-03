/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
// print next pairs
void printAllPairs(int arr[],int n){
    //print all elements (2 nested loop)
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        
            cout << arr[i] << "," << arr[j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    
    printAllPairs(arr,n);

    return 0;
}