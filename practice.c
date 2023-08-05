#include<stdio.h> 
int main() 
{ 
	int i,age; 
	for(i = 0 ; i < 5 ; i++) \
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		if(age<10) 
		{ 
             printf("Hey Guys\n"); 
		     printf("This code is printed coz if condition is not satisfied. \n"); 
		     printf("Checking Continue Statement\n\n");
             continue;
        }
        else
        {
            printf("Condition is not satisfied\n");
            break;
        }  
	} return 0; 
} 
