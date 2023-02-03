#include <iostream>

using namespace std;
int f[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fun(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
        {
            f[n-2] = fun(n-2);
        }
        if(f[n-1]==-1)
        {
            f[n-1]=fun(n-1);
        }
        return f[n-2]+f[n-1];
    }
    
}


int main()
{
    cout<<fun(7);

    return 0;
}
