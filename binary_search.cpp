/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key) {
    int s= 0;
    int e= n-1;
    
    while(s<=e){
        int mid = (s+e) /2;
        
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,99};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;
    
    int index = binary_search(arr,n,key);
    if(index != -1){
        cout << key << " is present at index " << index << endl;
    }
    else{
        cout<<key << " is NOT found!" << endl;
    }

    return 0;
}