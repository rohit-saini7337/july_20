#include<stdio.h>
int main()
{
	float p,d,k,j,dis,pay;
	char r[10],c[10];
	printf("enter retailer name=");
	scanf("%s",&r);
		printf("enter customer name=");
	scanf("%s",&c);
	printf("how many piece retailer take to customer=");
	scanf("%f",&p);
	printf(" take amount of 1 pieces  accourding  to retailer=");
	scanf("%f",&k);
	
	if(p>=1 && p<=15)
	{
		j=p*k;
		dis=j*15/100;
		pay=j-dis;
		printf("retailer name=%s\n",r);
		printf("customer name=%s\n",c);
			printf("total=%f",j);
		printf("discount 15%");
		printf("total payment=%f",pay);
		
		
	}
		if(p>=16 && p<=30)
	{
		j=p*k;
		dis=j*30/100;
		pay=j-dis;
		printf("retailer name=%s\n",r);
		printf("customer name=%s\n",c);
		printf("total=%f",j);
		printf("discount 30%\n");
		printf("total payment=%f",pay);
		
		
	}
		if(p>=31 && p<=51)
	{
		j=p*k;
		dis=j*50/100;
		pay=j-dis;
		printf("retailer name=%s\n",r);
		printf("customer name=%s\n",c);
			printf("total=%f",j);
		printf("discount 15%\n");
		printf("total payment=%f",pay);
		
		
	}
	
}
