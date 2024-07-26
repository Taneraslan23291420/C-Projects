#include <stdio.h>
int main(){
	int number,i,a,space;
	scanf("%d",&number);
	i=1;
	a=0;
	space=number*2-2;
	while(i<=number){
		//ÜST-Birinci Kısım
		printf("%d",i);
		while(a<i){
			printf("#");
			a++;}
		printf("%d",i);
		a=0;
		while(a<space){		
			printf(" ");
			a++;}
		a=0;
		//ÜST-İkinci Kısım
		printf("%d",(i*2-1)%10);
		while(a<i*2-1){
			printf("#");
			a++;}
		a=0;
		printf("%d",(i*2-1)%10);
		while(a<space){
			printf(" ");
			a++;}
		a=0;
		//ÜST-Üçüncü Kısım
		printf("%d",i);
		while(a<i){
			printf("#");
			a++;
		}
		a=0;
		printf("%d",i);
		printf("\n");
		i++;
		space-=2;		}
	space=2;
	i=number-1;
	while(i>0){
		//ALT-Birinci Kısım
		printf("%d",i);
		while(a<i){
			printf("#");
			a++;}
		a=0;
		printf("%d",i);
		while(a<space){
			printf(" ");
			a++;}
		a=0;
		//ALT-İkinci Kısım
		printf("%d",(i*2-1)%10);
		while(a<i*2-1){
			printf("#");
			a++;}
		a=0;
		printf("%d",(i*2-1)%10);
		while(a<space){
			printf(" ");
			a++;}
		a=0;
		//ALT-Üçüncü Kısım
		printf("%d",i);
		while(a<i){
			printf("#");
			a++;}
		a=0;
		printf("%d",i);
		printf("\n");
		i--;
		space+=2;
	}
}