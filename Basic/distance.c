#include<stdio.h>
#include<math.h>
int main() {
    int x1,y1,x2,y2;
    printf("Input x1 : ");
    scanf("%d",&x1);

    printf("Input y1 : ");
    scanf("%d",&y1);

    printf("Input x2 : ");
    scanf("%d",&x2);

    printf("Input y2 : ");
    scanf("%d",&y2);

    float Dist;
    Dist = pow(x2-x1,2) + pow(y2-y1,2) ;
    float finalDist;
    finalDist = sqrt(Dist);
    printf("Distance Between Points is : %f",finalDist);
    return 0;
}