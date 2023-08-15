/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> arr, int k){
    int n = arr.size();
    
    k = k % n;
    
    vector<int> output;
    for(int i = n-k; i <= n-1; i++){
        output.push_back(arr[i]);
    }
    
    for(int = 0; i < n-k; i++){
        output.push_back(arr[i]);
    }
    
    return output;
}