#include<stdio.h>

int main()
{
	int urd,isl,mat,phy,che,noncom;
	printf("Enter urdu Marks in number\n");
	scanf("%d",&urd);
	
	printf("Enter islamiat Marks in number\n");
	scanf("%d",&isl);
	
	printf("Enter mths Marks in number\n");
	scanf("%d",&mat);
	
	printf("Enter physics Marks in number\n");
	scanf("%d",&phy);
	
	printf("Enter chemistry Marks in number\n");
	scanf("%d",&che);
	
		printf("Enter your noncom Marks in number\n");
	    scanf("%d",&noncom);
	
	
	
		if(urd>=33 && mat>=33 && isl>=33 && phy>=33 && che>=33 && noncom>=50)
	{
		printf("You are Passed");
	}
	else{
		printf("Unfortuntely you have been failed\n");
	}
}
