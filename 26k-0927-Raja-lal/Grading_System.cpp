//26k-0927
#include<stdio.h>
int main(){
	int score;
	printf("Enter your score(0-100) to see the grade:");
	scanf("%d",&score);
	if(score>=0 && score<=100){
		if(score>=90){
		printf("Your grade is:A\n");}
		if(score==100) {
			printf("Perfect score");}
		else if(score>=75){
			printf("Your grade is:B");
		}else if(score>=60){
			printf("Your grade is:C");
		}else if(score>=40){
			printf("Your grade is:D");
		}else{
			printf("You Failed the exam.");
		}
	}else{
		printf("Invalid input! please enter your score between(0-100)");
	}
	return 0;
}
