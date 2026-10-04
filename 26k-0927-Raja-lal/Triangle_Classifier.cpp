//26k-0927
#include<stdio.h>
int main(){
	int side1,side2,side3;
	printf("Enter three sides of a triangle:");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1+side2>side3){
		if(side1+side3>side2){
			if(side2+side3>side1){
			    if(side1==side2){
			    	if(side2==side3){
			    		printf("The given trianlge is equaliteral");
					}else{
						printf("The given triangle is Isosceles");
					}
				}else {
                    if (side2 == side3) {
                        printf("The given triangle is Isosceles \n");
                    } else {
                        if (side1 == side3) {
                            printf("The given triangle is Isosceles ");
                        } else {
                            printf("The given triangle is Scalene ");
                        }
                	}
        
    				}
	}else{
		printf("Not a valid triangle");
			}
		}else{
			printf("Not a valid triangle");
		}
	}else{
		printf("Not a valid Triangle");
	}
	
	return 0;
}
