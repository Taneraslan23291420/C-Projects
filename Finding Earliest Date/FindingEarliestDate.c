/*
To find the earliest date, enter your date as month/day/year. 
After entering all the data, enter 0 0 0 to see the result
*/
#include <stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2;
	scanf("%d %d %d",&m1,&d1,&y1);
	scanf("%d %d %d",&m2,&d2,&y2);
	while(1)
	{
		if(y2==0 && d2==0 && m2==0){
			printf("%d %d %d",m1,d1,y1);
			break;
			}//if
		if(y1<y2){
			scanf("%d %d %d",&m2,&d2,&y2);
			continue;			
			}//if
		if(y1>y2){
			d1=d2;
			m1=m2;
			y1=y2;
			scanf("%d %d %d",&m2,&d2,&y2);
			continue;
		}//if	
		if(y1==y2){
			if(m1<m2){
				scanf("%d %d %d",&m2,&d2,&y2);
				continue;	
			}//if
			else if(m1>m2){
				d1=d2;
				m1=m2;
				y1=y2;
				scanf("%d %d %d",&m2,&d2,&y2);
				continue;	
			}//else if
			else if(m1==m2){
				if(d1<d2){
				scanf("%d %d %d",&m2,&d2,&y2);
				continue;
				}//if
				if(d1>d2){
				d1=d2;
				m1=m2;
				y1=y2;
				scanf("%d %d %d",&m2,&d2,&y2);
				continue;
				}//if
			}//else if
		}//if
		}//while
			
	}//int main
	
