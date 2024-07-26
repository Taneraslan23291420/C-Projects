//lab 1 çözümü

#include <stdio.h>
#include <conio.h>

int main(){
	int x,y=0,k,z=1,i=0,t=0;
	
	scanf("%d",&x);
	
	
	while(x>0){
		
		
		k=x%10;
		z=1;
		
		
		if(y==0)
			z=1;
			
		else{
		while(y>i){
			i++;
			z*=2;
			
		}
		
		}
		t+=z*k;
		x/=10;
		y++;
		i=0;
		}
		
		
		printf("%d",t);
	
	
	}
	