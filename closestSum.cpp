/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <vector>

using namespace std;

pair<int, int> closestSum(vector<int>arr, int x){
    
    int n = arr.size();
    int s = 0, e = n - 1;
    int diff = INT_MAX;
    int leftIndex, rightIndex;
    
    while(s<e){
        int cs = arr[s] - arr[e];
        
        if(abs(cs - x) < diff){
            leftIndex = s;
            rightIndex = e;
            diff = abs(cs - x);
        }
        if(cs > x){
            e--;
        }else {
            s++;
        }
    }
    return {arr[leftIndex], arr[rightIndex]};
}

int main() {
    return 0;
}
