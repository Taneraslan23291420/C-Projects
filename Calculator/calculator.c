#include <stdio.h>
int toplama(int num1,int num2){
	return num1+num2;
}
int cikarma(int num1,int num2){
	return num1-num2;
}
int carpma(int num1,int num2){
	return num1*num2;
}
int bolme(int num1,int num2){
	return num1/num2;
}



void dortIslem(int num1,int num2,char operation){
	switch(operation){
		case '+':
			printf("%d\n",toplama(num1,num2));
			break;
		case '-':
			printf("%d\n",cikarma(num1,num2));
			break;
		case '*':
			printf("%d\n",carpma(num1,num2));
			break;
		case'/':
			if(num2==0){
				printf("Error:A number cannot be divided by zero.");
				break;
				}
			printf("%d\n",bolme(num1,num2));
			break;
			}
}			
int main(){
	int num1,num2;
	char operation;
	printf("To stop, enter 0 0 0.\n");
	while(1<2){
	scanf("%d %c %d",&num1,&operation,&num2);
	if(num1==0 && num2==0 && operation=='+'){
			printf("The program terminated successfully");
		break;
	}
	dortIslem(num1,num2,operation);}
	return 0;
}