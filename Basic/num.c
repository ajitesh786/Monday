// 
#include<stdio.h>
int main() {
    int n ,sum=0;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf("%d\n",i);
       sum=sum + i;

    }
    printf("sum is upto %d terms : %d\n",n, sum );
    return 0;

}