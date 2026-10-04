//26k-0927
#include<stdio.h>
int main(){
	int category,choice;
	printf("Enter your category:\n1:Beverage\n2:Main Course\n3:Dessert\n");
	scanf("%d",&category);
	switch(category){
		case 1:
			printf("Choose Any Beverage of your liking:\n1:Cold drink\n2:Tea\n3:Water");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("The price of your cold drink is:RS.150");
					break;
				case 2:
					printf("The price of your Teas is:RS.100");
					break;
				case 3:
					printf("The price of your water is:RS.50");
					break;
				default:
					printf("Invalid Choice for beverage");
					break;			
			}
		break;
		case 2:
			printf("Choose Any Main Course of your liking:\n1:Briyani\n2:Mutton_Karahi\n3:Korma");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("The price of your Briyani is:RS.300");
					break;
				case 2:
					printf("The price of your Mutton_Karahi is:RS.1500");
					break;
				case 3:
					printf("The price of your Korma is:RS.500");
					break;
				default:
					printf("Invalid Choice for Main Course");
					break;			
			}
		break;
		case 3:
			printf("Choose Any Dessert of your liking:\n1:Pudding\n2:Custard\n3:Ice Ceam");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("The price of your Pudding is:RS.250");
					break;
				case 2:
					printf("The price of your Custard is:RS.200");
					break;
				case 3:
					printf("The price of your Ice cream is:RS.140");
					break;
				default:
					printf("Invalid Choice for Dessert");
					break;			
			}
		break;
	}
	return 0;
}
