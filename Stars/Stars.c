#include <stdio.h>
int main()
{
	int x,i=1,a=1;
	scanf("%d",&x);
	while(i<2*x){
		a=1;
		while(a<=i){
			printf("*");
			a++;}
		printf("\n");
		i+=2;}
	
	i=(x*2)-3;
	
	while(i>=1){
		a=1;
		while(a<=i){
			printf("*");
			a++;}
		printf("\n");
		i-=2;
	}
}