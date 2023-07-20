#include<stdio.h>
int main(){
	
	
		float a,b,c,rol,total,per;
	printf("enter mark");
	scanf("%f %f %f",&a,&b,&c);
   total=a+b+c;
   printf("total=%f\n",total);

   per=total/3;
   printf("percentage=%f \n",per);
   if(per>=80){
   	printf("1st division");
   }   	
   else if(per>=70){
   	     		printf("12nd division");
   }
else if(per>=60){
		printf("3rd division");
}
else if(per>=50){
		printf("4th division");
		
}else{
		printf("fail");
}













	
}

