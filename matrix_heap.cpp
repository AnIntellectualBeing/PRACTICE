#include <iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int *b[3];
    b[0]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    b[2]=(int *)malloc(4*sizeof(int));
    
    int **c;
    c=(int **)malloc(3*sizeof(int));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
    for(int i=0;i<3;i++)
       for(int j=0;j<4;j++)
          cout<<c[i][j];
    return 0;
}
