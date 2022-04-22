////(recursive)input  numbers from the keyboard and print ////

#include<stdio.h>
void temp (int n);
int main(){
int n;
printf("Enter the value");
scanf("%d",&n);
temp(n);
return 0;
}
void temp(int n)
{
    if (n!=1)
        temp(n-1);
      printf("%d\n",n);
}


//////input 4
/////output-(1234)
