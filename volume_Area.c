#include<stdio.h>
int main(){
	int aa,bb;
	printf("press 1 for area and 2 for volume");
	scanf("%d",&aa);
	printf("press 1 square,2 for triangel and 3 for rectangle");
	scanf("%d",&bb);
	if(aa==1 && (bb==1||bb==2||bb==3)){
		
		if(bb==1){ 
		int y;
		printf("enter the length");
		scanf("%d",&y);
			printf("area of square=%dsq",y*y);
		}
		else if(bb==2){
			float y,k ,r;
		printf("enter the breath and height");
		scanf("%f %f",&y,&k);
	     r=y*k;
			printf("area of triangle=%fsq",r/2);
		}
		
		
		else{
			int y,k;
		printf("enter the length and width");
		scanf("%d %d",&k,&y);
			printf("area of rectangle=%dsq",y*k);
		}
	}
	
	
	
	
	
	
	
	
	
	else {
		if(bb==1){
		int y;
		printf("enter the length");
		scanf("%d",&y);
		printf("volume of square=%dm3",y*y*y);
		}
		
		else if(bb==3){
			int y,k ,j;
		printf("enter the length,width,height");
		scanf("%d %d %d",&y,&j,&k);
			printf("volume of rectangle=%dm3",y*j*k);
		}
		else{
			int y,k;
		printf("enter the height and base");
		scanf("%d %d",&y,&k);
			printf("volume of triangle=%dm3",y*k);
		}
		
		
		
		
	}
	
	
	
}
