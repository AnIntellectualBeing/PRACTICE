#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(b==0) 
    return a;
  gcd(b,a%b);
} 

int main()
{
  cout<<gcd(5,10);
  return 0;
}
