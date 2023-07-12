/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Demo vector 
    // vector<int> arr = {1,2,10,12,15};
    
    vector<int> arr(10,7);

    //Fill Constructor
    vector<int> visited(100,0);
    
    //Pop_back
    arr.pop_back();
    // Push_back 0(1)
    arr.push_back(16);
    
    //print all the elements
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}