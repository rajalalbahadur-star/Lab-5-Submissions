//26k-0927
#include<stdio.h>
int main(){
	int sems;
	char dept;
	printf("Select Your department:\n C:Computer Science\n E:Electrical engineering\n B:Business\n");
	scanf(" %c", &dept);
	switch(dept){
		case 'C':
		case 'c':
			printf("Enter your semester(1,2 or 3)");
			scanf("%d",&sems);
			switch(sems){
				case 1:
					printf("\n Course:Programming Fundamental\n");
					break;
				case 2:
					printf("\n Course:Object Oriented Programming\n");
					break;
				case 3:
					printf("\n Course:Data Base and Structure\n");
				default:
					printf("Invalid Semester");		
					
			}
		break;
		case 'E':
		case 'e':
			printf("Enter your semester(1,2 or 3)");
			scanf("%d",&sems);
			switch(sems){
				case 1:
					printf("\n Course:Electrical Circuit\n");
					break;
				case 2:
					printf("\n Course:Electrical Devices \n");
					break;
				case 3:
					printf("\n Course:Signals and System\n");
				default:
					printf("Invalid Semester");}
		break;
		case 'B':
		case 'b':
			printf("Enter your semester(1,2 or 3)");
			scanf("%d",&sems);
			switch(sems){
				case 1:
					printf("\n Course:Principle of Management\n");
					break;
				case 2:
					printf("\n Course:Financial Accounting\n");
					break;
				case 3:
					printf("\n Course:Principle of Marketing\n");
				default:
					printf("Invalid Semester");	}
		break;									
	}
	return 0;
}
