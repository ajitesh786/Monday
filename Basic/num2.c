#include <stdio.h>
int main() {
    int rows, number = 1;
    printf("enter rows : ");
    scanf("%d",&rows);
    for(int i = 1; i<=rows ; i++) {
     for(int space = 1; space <= rows - i; space++) {
        printf(" ");

     }
     for(int j= 1; j<=i; j++) {
        printf(" %d",number );
        number++;
     }
     printf("\n");
    }
    return 0;
}