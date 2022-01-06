# binary-to-decimal-number
convert binary number to decimal number in c

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int bin,rem,base=1,sum=0,val=0;

  printf("Enter the binary number :");scanf("%d",&bin);

  while(bin!=0)
  {
         rem=bin%10;
         val=rem * base;
         bin=bin/10;
         sum=sum+val;
         base=base*2;
  }
         printf("its decimal value is %d",sum);
    return 0;
}
