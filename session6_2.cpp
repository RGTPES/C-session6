#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5,count1 = 0,count2=0;
	printf("nhap so thu nhat\n");
	scanf("%d",&num1);
	printf("nhap so thu hai\n");
	scanf("%d",&num2);
	printf("nhap so thu ba\n");
	scanf("%d",&num3);
	printf("nhap so thu tu\n");
	scanf("%d",&num4);
	printf("nhap so thu nam\n");
	scanf("%d",&num5);	
	if(num1%2==0){
		count1++;
	}else{
		count2++;
	}
	if(num2%2==0){
		count1++;
	}else{
		count2++;
	}
	if(num3%2==0){
		count1++;
	}else{
		count2++;
	}
	if(num4%2==0){
		count1++;
	}else{
		count2++;
	}
	if(num5%2==0){
		count1++;
	}else{
		count2++;
	}
	printf("co %d so chan\n",count1);
	printf("co %d so le\n",count2);
}
