#include<stdio.h>
void main()
{
	char name[100],a[100],d[100];
	int age,seats,pn,date,in,op,t,i,month,year,k,f;
	printf("\n     welcome to AIRLINE ticket bookings\n\n");
	printf("Enter ur Aadhar number\n");
	scanf("%d",&pn);
	printf("Enter starting place: ");
	scanf("%s",&a);
	printf("Enter destination: ");
	scanf("%s",&d);
	printf("Enter departure date dd/mm/yy\n");
	scanf("%d/%d/%d",&date,&month,&year);
	printf("Available Flights Are:\n");
	printf("1.IndiGo\n");
	printf("2.JetLite\n");
	printf("3.Akasa Air\n");
	printf("4.GoAir\n");
	printf("5.KingFisher\n");
	table:
	scanf("%d",&op);
	if(op==1||op==2||op==4||op==5)
	{
		printf("One ticket cost=6989Rs/- including food\n If no.of Tickets are more than 3 then one ticket cost=6589Rs/-\n");
	    printf("\n Enter no.of tickets:\n");
	    scanf("%d",&t);
	    if(t<=3)
	    {
			printf("Total Cost=%d/-",t*6989);
			goto submit;
		}
		else
	 		printf("Total Cost=%d/-",t*6589);
	 		goto submit;
    }
	else
	printf("tickets not available\n plese choose another flight\n");
	goto table;
	 submit:
	printf("\n Please Enter Below Details\n\n ");
	
	printf("Enter Names of %d passengers:",t);
	for(k=1;k<=t;k++){
	scanf("%s",name);}
	printf("\nEnter Ages of %d passengers:",t);
	for(f=1;f<=t;f++){
	scanf("%d",&age);}
	printf("\n   Your Tickets are Booked.Thank You!!");
	
}
