#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int totalamount=1000,amount,amo,tr;
totaldeposit=0,totalwith=0,totaltr=0;
char a[50];
int acc;
int list(){
	int ch;
	printf("\n 1,deposit option");
	printf("\n 2.withdraw amount");
	printf("\n 3.transfer amount");
	printf("\n 4.checkdetails");
	printf("\n 5.exit");
	printf("\n enter your choice");
	scanf("%d",&ch);
	return(ch);
}
void deposit(){
	printf("\n enter the amount you want to input");
	scanf("%d",&amount);
	totalamount+=amount;
}
void withdraw(){
	printf("\n enter the amount you want to withdraw");
	scanf("%d",&amo);
	if(amo<=totalamount)
	totalamount-=amo;
	else
	printf("\n less amount withdraw is not possible");
}
void transfer(){
	printf("\n enter the amount you want to transfer");
	scanf("%d",&tr);
	if(tr<=totalamount)
	totalamount-=tr;
	else
	printf("\n less amount transfer is not possible");
}
void checkdetails(){
	printf("\n totalamount=%d",totalamount);
	printf("\ntotal deposit amount=%d",amount);
	printf("\ntotal withdraw=%d",amo);
	printf("\n total transfer=%d",tr);
}
void last(){
	printf("\n**************************************\n");
	printf("\n your name=%s",a);
	printf("account number=%d",acc);
	printf("\n totalamount=%d",totalamount);
	printf("\ntotal deposit amount=%d",amount);
	printf("\ntotal withdraw=%d",amo);
	printf("\n total transfer=%d",tr);
	printf("\n******************thanks**************");

}
	void main(){
		system("cls");
		printf("\n enter your name");
		gets(a);
		printf("\n enter your account number");
		scanf("%d",&acc);
		while(1){
			system("cls");
			switch(list()){
				case 1:
				deposit();
				totaldeposit+=amount;
				break;
				case 2:
					withdraw();
					totalwith+=amo;
					break;
					case 3:
						transfer();
						totaltr+=tr;
						break;
						case 4:
							checkdetails();
							break;
							case 5:
								system("cls");
								last();
								getch();
								exit(0);
								break;
								default:
									printf("invalid choice");
			}
			getch();
		}
	}
