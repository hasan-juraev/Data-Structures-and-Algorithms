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
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());

    
    return arr;
}

int main()
{
   
    return 0;
}