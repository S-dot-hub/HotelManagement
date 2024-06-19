#include<stdio.h>
#include<conio.h>
#include<string.h>
struct hotel{
	char hname[30];
	int arooms;
	int del,ac,nac;
	int phno;
};
int main()
{
	printf("\t\t//TOP-CLASS HOTELS AVAILABLE IN DARJEELING// \n");
	printf("...BOOK YOUR HOTEL STAYS THROUGH OUR WEBSITE AND GET EXCITING OFFERS...\n");
	printf("...FREE WIFI FOR THE DAYS OF STAY FOR ONLINE BOOKING...\n");
	int month,rrooms,ndays,rtype;
	float rfare;
	struct hotel h[3];
	int i,f1,f2;
	f1=f2=0;
	for(i=0;i<3;i++)
	{
		printf("Enter name of hotel:");
		gets(h[i].hname);
		printf("Enter the price for deluxe,ac and non-ac rooms:");
		scanf("%d%d%d",&h[i].del,&h[i].ac,&h[i].nac);
		printf("Total available rooms:");
		scanf("%d",&h[i].arooms);
		printf("Enter phone number for contact:");
		scanf("%d",&h[i].phno);
		fflush(stdin);
	}
	printf("\n.....FOR USER.....\n");
	int ad,child;
	char n[30];
	printf("Enter hotel name:");
	gets(n);
	
	printf("Enter the required rooms:");
	scanf("%d",&rrooms);
	for(i=0;i<3;i++){
		if(strcmp(n,h[i].hname)==0)
		{
			f1++;
			if(rrooms<=h[i].arooms)
			{
				f2++;
				int tr;
				printf("We have special accomodation if you are travelling for work(Press 10 if yes)");
				scanf("%d",&tr);
				
				if(tr==10)
				{
					rfare=1000.0*rrooms;
					printf("Your fare for the hotel for one night is Rs%f",rfare);
					return 0;
				}
				printf("Enter the month:");
				scanf("%d",&month);
				
				printf("Enter room type(1,2 or 3):");
				scanf("%d",&rtype);
				printf("Enter the no. of days for stay:");
				scanf("%d",&ndays);
				printf("Enter the number of adults for the stay:");
				scanf("%d",&ad);
				
				printf("Enter the number of children for the stay:");
				scanf("%d",&child);
				
				if((month>=1 && month<=3)||(month>=10 && month<=12))
				{
					if(rtype==1)
						rfare=h[i].del*1.2*rrooms*ndays;
					else if(rtype==2)
						rfare=h[i].ac*1.2*rrooms*ndays;
					else if(rtype==3)
						rfare=h[i].nac*1.2*rrooms*ndays;
				}
				else
				{
					if(rtype==1)
						rfare=h[i].del*rrooms*ndays;
					else if(rtype==2)
						rfare=h[i].ac*rrooms*ndays;
					else if(rtype==3)
						rfare=h[i].nac*rrooms*ndays;
				}
			}
		}
	}
	if(f1==0)
	{
		printf("\nINVALID HOTEL NAME...PLEASE RUN THE PROGRAM AGAIN TO SEARCH FOR OTHER HOTELS\n");
		return 0;
	}
	if(f2==0)
	{
		printf("\n...REQUIRED ROOMS NOT AVAILABLE...\n");
		return 0;
	}
	int balcony;
	printf("\nDo you want balcony rooms?(Enter 1 if yes)");
	scanf("%d",&balcony);
	if(balcony==1)
	{
		rfare=rfare+400;
	}
	int w;
	printf("Do you want an attached washroom?(Press 7 if yes)\n");
	scanf("%d",&w);
	
	if(w==7)
	{
		rfare=rfare+200;
	}
	
	printf("\nTotal fare Rs%f:",rfare);
	
	int food,v;
	printf("\nDo you want add food for each day...breakfast+lunch+dinner(Press 0 if yes)");
	scanf("%d",&food);
	
	if(food==0)
	{
		printf("ENTER 2 FOR VEG AND 3 FOR NON-VEG:");
		scanf("%d",&v);
		if(v==2)
		{
			rfare=rfare+1700;
		}
		else if(v==3)
		{
			rfare=rfare+2500;
		}
		printf("\n Total cost including hotel fare and food for one person is Rs%f:",rfare);
	}
	if(food!=0)
	{
		printf("\nTotal hotel fare for one person is Rs%f:",rfare);
	}
	int forall;
	int tch;
	tch=rfare-150;
	forall=(rfare*ad)+(tch*child);
	printf("\nTOTAL FARE FOR ALL THE TRAVELLERS Rs%d",forall);
	float adv;
	adv=(forall*0.4);
	printf("\nAdvance that you have to pay is:Rs%f",adv);
	printf("\nYou have to pay Rs%f after you check-in.",(forall-adv));
	
	int t;
	printf("\nDo you want to pay the whole fare as advance?(Press 5 if yes)");
	scanf("%d",&t);
	if(t==5)
	{
		forall=(forall*0.9);
		printf("\nYOU HAVE RECEIVED A DISCOUNT OF 10 PERCENT SO YOU NEED TO PAY Rs%f",forall);
	}
	printf("\n....RING US UP IF YOU WANT TO GET A CAR FOR SIGHT-SEEING....\n");
	char f[100];
	printf("Please send us your feedback to let us know what changes we can make:");
	gets(f);
	getch();
	fflush(stdin);
	printf("\nThanks for the feedback");
	printf("\nIF YOU CANCEL THE BOOKING 15DAYS PRIOR THEN WHOLE MONEY WOULD BE RETURNED");
	printf("\nTHANKS FOR VISITING OUR WEBSITE....SEE YOU SOON AGAIN");
	return 0;
}
