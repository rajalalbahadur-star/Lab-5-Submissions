//26k-0927
#include<stdio.h>
int main(){
	int age,wprice=1000,discount,final_price,hprice=1500;//wprice is of weekday aand hprice is of weekend
	char day; //w for weekday and H for weekend/holiday
	printf("Welcomme to our Cinema\n");
	printf("Enter your Age:");
	scanf("%d",&age);
	printf("Enter your day category(W=weekday & H=holiday):");
	scanf(" %c", &day);
	if(age<12 || age>60){
		if(day=='W' || day=='w'){
			printf("You get 40%% discount\n");
			final_price= wprice-(wprice*0.4);
		}else if(day=='h' || day=='H'){
			printf("You get 20%% discount\n");
			final_price= hprice-(hprice*0.2);
		}else{
			printf("invalid character input");
		}
	}else{
		if(day=='W' || day=='w'){
			final_price=wprice;
		}else if(day=='H' || day=='h'){
			final_price=hprice;
		}else{
			printf("Invalid character input");
		}
	}
	printf("Your final bill is:%d",final_price);
	return 0;
}
