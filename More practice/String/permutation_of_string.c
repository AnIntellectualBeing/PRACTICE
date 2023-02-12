#include<stdio.h>
 void perm(char S[],int k)
  {
    static int A[10];
   static char Res[10];
   int i=0;
   if(S[i]=='\0')
   {
     Res[k]='\0';
     printf("%s",Res);
   }
   else
    {
       for(int i=0;S[i]!='\0';i++)
       {
         if(A[i]==0)
        {
          Res[k]=S[i];
           A[i]=1;
           prem(S,k+1);
           A[i]=0;
        }
       }
    }
  }
     
 int main()
     {
       char S[] ="ABC";
       perm(S,0);
       return 0;
     }
     
