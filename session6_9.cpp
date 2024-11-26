#include<stdio.h>
int main(){
	int num, hundereds,tens,units,armstrong;
	for(num =0;num<1000;num++){
		hundereds = num /100;
		tens = (num /10) % 10;
		units = (num %10);
		armstrong = hundereds*hundereds*hundereds+tens*tens*tens+units*units*units;
		if(armstrong == num){
			printf("%d\n",num);
		}
	}
}
