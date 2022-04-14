#include<stdio.h>
int main()
{
    int i,are[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&are[i]);
    }
    int mini =are[0];
    for(i=1;i<n;i++){
            if(mini>are[i]){

                mini=are[i];
            }
    }
        printf("this is smallest number");
        printf("%d\t",mini);


    return 0;
}
