/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> arr) {
    
    //all negative elements
    bool allNegative = true;
    int largest = INT_MIN;
    
    for(int x : arr){
        if(x > 0){
            allNegative = false;
        }
        largest = max(largest,x);
    }
    
    //special case
    if(allNegative){
        return largest;
    }
    
    //Kadane's Logic
    int cs = 0;
    int ans = 0;
    for(int x : arr){
        cs = cs + x;
        if(cs < 0){
            cs = 0;
        }
        ans = max(ans, cs);
    }
    
    return ans;
}


int main()
{

    return 0;
}