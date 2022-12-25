#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    int hcf=1;
    int x= (a*(a<b)) + (b*(b<a));
    cout<<x<<endl;
    for(int i=1;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}
int main()
{
    cout<<gcd(24,60);
    return 0;
}
