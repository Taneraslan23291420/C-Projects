/*It is a simple program where days can be displayed on a monthly basis.*/
#include <stdio.h>
int main()
{
	int totalDay,firstDay,x=2,a=1,b=0;
	printf("Enter the total day of the month: ");
	scanf("%d",&totalDay);
	printf("Enter the number of the first day of the month \n(sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7): ");
	scanf("%d",&firstDay);
	printf("\n");
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	while(a<firstDay){
		printf("\t");
		a++;
	}
	b=firstDay-1;
		printf(" 1\t");
		while(x<=totalDay){
				if((x+b)%7==1)
				printf("\n");
				if(x<10)
					printf(" ");
				printf("%d\t",x);
			
			
					x++;
	} 	
	return 0;
}