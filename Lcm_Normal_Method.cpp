#include <iostream>

using namespace std;
int lcm(int a,int b)
{
    int max= a*(a>b)+ b*(b>a);
    while(1)
    {
        if(max%a==0 && max%b==0)
           return max;
        max++;
    }
    return max;
}
int main()
{
    cout<<lcm(12,8);

    return 0;
}
