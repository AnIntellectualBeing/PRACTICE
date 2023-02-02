
#include <iostream>

using namespace std;

int fun(int m,int n)
{ 
    if(n==0)
       return 1;
    return fun(m,n-1)*m;
}

int main()
{
    cout<<fun(5,2);
    return 0;
}
