#include<stdio.h>
int main() 
{ 
        char b;
        printf("Eter a character=");
		scanf("%c",&b);
	
	if(b >= 'A' && b <= 'z')	{
			printf("%c is an alphabet",b);
		}
		else if(b>= '0' && b<='9') 
		 {
			printf("is in digit");
     	}
		
	return 0;
}
