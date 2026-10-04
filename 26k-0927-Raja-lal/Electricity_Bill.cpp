//26k-0927
#include<stdio.h>
int main(){
	int bill,units,per_unit;
	char con_type;
	printf("Enter the units of electricity consumed:");
	scanf("%d",&units);
	printf("Enter your connection type:'D' for domestic and 'C' for commercial");
	scanf(" %c", &con_type);
	if(con_type=='D' || con_type=='d'){
		if(0<=units<=100){
			per_unit=100;
			bill=units*per_unit;
			if(101<=units<=300){
				per_unit=150;
				bill=units*per_unit;
				if(units>=301){
					per_unit=200;
					bill=units*per_unit;
				}
			}
		}
	}else{
		if(con_type=='C' || con_type=='c'){
		if(0<=units<=100){
			per_unit=200;
			bill=units*per_unit;
			if(101<=units<=300){
				per_unit=300;
				bill=units*per_unit;
				if(units>=301){
					per_unit=500;
					bill=units*per_unit;
				}
			}
		}
		}
    }
	printf("Your total bill is:%d",bill);
	return 0;
}
