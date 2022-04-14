#include<stdio.h>
int main(){

int n,c,k;
printf("Enter an integer the decimal number system\n");
scanf("%d",&n);
printf("in the binary number system in :\n",n);

for(c=33;c>=0;c--){
    k=n>>c;
    if(k&1)
        printf("1");
    else
        printf("0");

}
printf("\n");
return 0;


}
