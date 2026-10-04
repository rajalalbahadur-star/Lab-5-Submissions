//26k-0927
#include<stdio.h>
int main(){
	char lightcolor,button;
	printf("Enter traffic light color:\nR:Red\nY:Yellow\nG:Green\n");
	scanf(" %c", &lightcolor);
	switch(lightcolor){
		case 'R':
		case 'r':
			printf("Is the pedestrian button pressed\nY:YES\nN:NO\n");
			scanf(" %c", &button);
			switch(button){
				case 'Y':
				case 'y':
					printf("\nDrivers Stop.Pedestrain may cross safely.\n");
					break;
				case 'N':
				case 'n':
					printf("\nDrivers Stop.Pedestrian do not cross.\n");
					break;
				default:
					printf("Invalid pedestrian button pressed.Press Y or N");
					break;		
			}
		break;
		case 'Y':
		case 'y':
			printf("\nDrivers slow the car.Pedestrian do not cross.\n");
			break;
		case 'G':
		case 'g':
				printf("Is the pedestrian button pressed\nY:YES\nN:NO\n");
			scanf(" %c", &button);
			switch(button){
				case 'Y':
				case 'y':
					printf("\nDrivers GO,but watch closely for pedestrian waiting.\n");
					break;
				case 'N':
				case 'n':
					printf("\nDrivers GO safely.Pedestrain do not cross\n");
					break;
				default:
					printf("Invalid predestrian button pressed");
					break;
			}
		break;
		default:
			printf("Invalid traffic light color.");
			break;
	}
	return 0;
}
