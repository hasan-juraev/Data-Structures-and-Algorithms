/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void reverseArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    
    while(s < e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {10,20,30,45,60,80,90};
    int n = sizeof(arr)/sizeof(int);

    //print the output
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    reverseArray(arr,n);
    //print the output
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}