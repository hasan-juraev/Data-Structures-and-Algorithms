/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int lowerBound(std::vector<int> A, int val){
    
    int start = 0;
    int end = A.size() - 1;
    int ans = -1;
    
    while(start <= end){
        int mid = (start + end)/2;
        if(A[mid] <= val) {
            ans = A[mid];
            start = mid + 1;
        
            
        } else {
            end = mid - 1;
        }
    }
    
    return ans;
}

int main()
{


    return 0;
}
