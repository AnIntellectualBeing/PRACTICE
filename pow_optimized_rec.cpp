#include <iostream>

using namespace std;

int fun(int m,int n)
{ 
    if(n==0)
       return 1;
    if(n%2==0)
       return fun(m*m,n/2);
    return fun(m*m,(n-1)/2)*m;
}

int main()
{
    cout<<fun(2,2);
    return 0;
}
