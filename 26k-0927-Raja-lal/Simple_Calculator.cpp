//26k-0927
#include<stdio.h>
#include<math.h>
int main(){
	int mode;
	printf("Enter 1 for basic operators(+,-,*,/)\n");
	printf("Enter 2 for Advance operator(power/root)");
	scanf("%d",&mode);
	switch(mode){
		case 1:
			float num1,num2,sum;
			char op;
			printf("Enter your operator(+,-,*,/)");
			scanf(" %c", &op);
			printf("Enter num1 and num2:");
			scanf("%f %f",&num1,&num2);
			switch(op){
				case '+':
					printf("The sum of two number is:%f", num1+num2);
					break;
				case '-':
					printf("The subtraction of two num is:%.2f", num1-num2);
					break;
				case '*':
					printf("The product of two number is:%.2f", num1*num2);
					break;
				case '/':
					if(num2!=0){
					printf("The divident of two number is:%.2f", num1/num2);
					}else{
						printf("Error! the answer is undefined");
					}
					break;
				default:
					printf("Inlavid Arithmetic operator");
					break;				
			}
			break;	
		case 2: {
		    char choice;
			float num;
			printf("Enter 's' for square and 'r' for root");
			scanf(" %c", &choice);
			switch(choice){
				case 'S':
				case 's':
					printf("Enter a number:");
					scanf("%f",&num);
					printf("The square of number is:%.2f", pow(num,2));
					break;
				case 'R':
				case 'r':
					if(num!=0){
					printf("Enter a number:");
					scanf("%f",&num);
					printf("The square root is:%.2f", sqrt(num));}
					else{
						printf("Error!!");
					}	
					break;
			}
		break;	
		}
	}
	
	return 0;
}
