#include <iostream>

using namespace std;
int num(int n)
{
    if(n==0)
       return 1;
    cout<<n;
    num(n-1);
    
}

int main()
{
    num(5);

    return 0;
}
