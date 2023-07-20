#include<stdio.h>
int main(){
	
float s,a,d,h;	
	
printf("enter your sallery");
scanf("%f",&s);
printf("How many holiday");
scanf("%f",&h);
 if(h==1)
 {
	printf("your sallery=%f",s);
  }
else if(h>=2 &&h<=5){
	d=s*5/100;
	a=s-d;
	printf("your sallery=%f",a);

 }
 
 else if(h>=5 &&h<=14){
	d=s*10/100;
	a=s-d;
	printf("your sallery=%f",a);

 }
else if(h>=15 &&h<=50){
	d=s*30/100;
	a=s-d;
	printf("your sallery=%f",a);

 }
 
  
 

 else{
   printf("not sallery");
 }




}
