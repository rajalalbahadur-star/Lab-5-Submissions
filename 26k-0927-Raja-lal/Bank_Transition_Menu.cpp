//26k-0927
#include<stdio.h>
int main(){
	int balance=50000,acc_type,transaction,deposit,withdraw;
	printf("Enter your account type:\n1:Saving\n2:Current\n");
	scanf("%d",&acc_type);
	switch(acc_type){
		case 1:
			printf("Enter your Transaction type:\n1:Deposit\n2:Withdraw\n3:Check Balance\n");
			scanf("%d",&transaction);
			switch(transaction){
				case 1:
					printf("Enter your deposit amount:");
					scanf("%d",&deposit);
					balance = balance+deposit;
					printf("Your total Amount is:%d",balance);
					break;
				case 2:
					printf("Enter your withdrawal amount:");
					scanf("%d",&withdraw);
					if(withdraw<=50000){
						balance = balance-withdraw;
						printf("Your remaining amount is:%d",balance);
					}else{
						printf("Not enough balance");
					}
					break;
				case 3:
					printf("The amount present in your account is:%d",balance);
					break;
				default:
					printf("Invalid transaction type.");
					break;}
		break;			
		case 2:		
					printf("Enter your Transaction type:\n1:Deposit\n2:Withdraw\n3:Check Balance\n");
					scanf("%d",&transaction);
					switch(transaction){
						case 1:
						printf("Enter your deposit amount:");
						scanf("%d",&deposit);
						balance = balance+deposit;
						printf("Your total Amount is:%d",balance);
						break;
						case 2:
						printf("Enter your withdrawal amount:");
						scanf("%d",&withdraw);
						if(withdraw<=50000){
							balance = balance-withdraw;
							printf("Your remaining amount is:%d",balance);
						}else{
							printf("Not enough balance");
						}
						break;
						case 3:
						printf("The amount present in your account is:%d",balance);
						break;
						default:
						printf("Invalid transaction type.");
						break;}
		default:
			printf("Invalid Account Type.");
			break;					
			}
	return 0;
}
