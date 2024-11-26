
	#include<stdio.h>
int main(){
	int num,count=0,prime=2,n=0;
	printf("nhap so luong so nguyen to ");
	scanf("%d",&num);
	while(n < num){
		count =0;
		for(int i = 1;i<=prime;i++){
			if(prime %i==0){
				count++;
				
			}
			
		}
			if(count==2){
			printf(" so nguyen to %d \n",prime);
			n++;
		}
		prime++;
	}
	return 0;

}

