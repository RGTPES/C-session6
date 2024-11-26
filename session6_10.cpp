#include<stdio.h>
int main(){
	int num,count;
	printf("nhap so ");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++){
		if(num % i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d la so nguyen to",num);
	}else{
		printf("%d ko phai la so nguyen to",num);
	}
}
