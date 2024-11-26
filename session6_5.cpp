#include<stdio.h>
int main(){
int month,year;
		printf("nhap thang\n");
	scanf("%d",&month);
	printf("nhap nam\n");
	scanf("%d",&year);
if(year % 4 ==0&& year%100!=0||year%400==0){

	switch(month){
		case 1:
			printf("thang 1 co 31 ngay");
			break;
		case 2:
			printf("thang 2 co  29 ngay");
			break;
		case 3:
			printf("thang 3 co 31 ngay");
			break;
		case 4:
			printf("thang 4 co 30 ngay");
			break;
		case 5:	
			printf("thang 5 co 31 ngay");
			break;
		case 6:
			printf("thang 6 co 30 ngay");
			break;
		case 7:
			printf("thang 7 co 31 ngay");
			break;
		case 8:
			printf("thang 8 co 31 ngay");
			break;	
		case 9:
			printf("thang 9 co 30 ngay");
			break;
		case 10:
			printf("thang 10 co 31 ngay");
			break;	
		case 11:
			printf("thang 11 co 30 ngay");
			break;
		case 12:	
			printf("thang 12 co 31 ngay");
			break;
	}
}else {	switch(month){	
		case 1:
			printf("thang 1 co 31 ngay");
			break;
		case 2:
			printf("thang 2 co  28 ngay");
			break;
		case 3:
			printf("thang 3 co 31 ngay");
			break;
		case 4:
			printf("thang 4 co 30 ngay");
			break;
		case 5:	
			printf("thang 5 co 31 ngay");
			break;
		case 6:
			printf("thang 6 co 30 ngay");
			break;
		case 7:
			printf("thang 7 co 31 ngay");
			break;
		case 8:
			printf("thang 8 co 31 ngay");
			break;	
		case 9:
			printf("thang 9 co 30 ngay");
			break;
		case 10:
			printf("thang 10 co 31 ngay");
			break;	
		case 11:
			printf("thang 11 co 30 ngay");
			break;
		case 12:	
			printf("thang 12 co 31 ngay");
			break;
		}
	
	}
}
