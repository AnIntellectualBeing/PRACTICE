#include <iostream>

using namespace std;

int fun(int x,int n)
{
    static s=1`;
    
    if(n==0) return s;
    s=1+x/n*s;
    return fun(x,n-1); //can only be performed in ascending
    
}
