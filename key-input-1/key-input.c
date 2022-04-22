////(recursive)input  numbers from the keyboard and revers print ////

#include<stdio.h>
void temp(int n);

int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    temp(n);
    return 0;
}
void temp(int n)
{
    printf("This is number:%d\n",n);
  if(n!=1)
   temp(n-1);


}
