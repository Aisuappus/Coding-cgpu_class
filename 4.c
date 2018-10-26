//give an integer n return the sum of the all even integers less than or equal to n
#include<stdio.h>
int sum(int n)
{  
  int i,s;
  s=0;
  for(i=0;i<=n;i++){
    if(i%2==0)
  { 
    s=s+i;
    }
}
   return  s ;
   }
int main(void)
 {
 int n;
 int s=0;
 printf("Enter the no:");
 scanf("%d",&n);
 printf("output is %d\n ",sum( n));
 }
    
    
  
