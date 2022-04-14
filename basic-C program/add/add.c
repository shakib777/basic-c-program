#include<stdio.h>
int main()
{
    int i,are[15],n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&are[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",are[i]);

    }
    return 0;
}
