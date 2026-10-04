//26k-0927
#include<stdio.h>
int main(){
    int X, Y, Z, W;

    printf("Enter four numbers (X Y Z W): ");
    scanf("%d %d %d %d", &X, &Y, &Z, &W);
    if (X >= Y) {
        if (X >= Z) {
            if (X >= W) {
                printf("The largest value is: %d\n", X);
            } else {
                printf("The largest value is: %d\n", W);
            }
        } else {
            if (Z >= W) {
                printf("The largest value is: %d\n", Z);
            } else {
                printf("The largest value is: %d\n", W);
            }
        }
    } else {
        if (Y >= Z) {
            if (Y >= W) {
                printf("The largest value is: %d\n", Y);
            } else {
                printf("The largest value is: %d\n", W);
            }
        } else {
            if (Z >= W) {
                printf("The largest value is: %d\n", Z);
            } else {
                printf("The largest value is: %d\n", W);
            }
        }
    }
	return 0;
}
