#include <iostream>

using namespace std;
int num(int n)
{
    if(n==0)
       return 1;
    num(n-1);
    cout<<n;
}

int main()
{
    num(5);

    return 0;
}
