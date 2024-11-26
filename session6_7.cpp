#include<stdio.h>
int main(){
	int n;
	printf("Nhap so can tim uoc :");
	scanf("%d",&n);
	for(int i = n;i>0;i--){
		if(n%i==0){
			printf("%d\n",i);
		}
	}
}
