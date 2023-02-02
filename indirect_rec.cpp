#include <iostream>

using namespace std;
void funb(int);
void fun(int n)
{ 
    if(n>0)
    {
        cout<<n;
        funb(n-1);
    }
}
void funb(int n)
{
    if(n>1)
    {
        cout<<n;
        fun(n/2);
    }
}
int main()
{
    fun(20);
    return 0;
}
