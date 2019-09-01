#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int nor=0,nob=0,noc=0,amount=0,count=0,ch;
int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void showDetail();
int main()
{
	while(1)
	{	
	switch(Menu())
	
	{
		case 1:
			Bus();
			break;
			
		case 2:
			Cycle();
			break;
			
	    case 3:
	    	Riksha();
	    	break;
	    case 4:
	    	showDetail();
	    	break;
	    	
	    case 5:
	    	Delete();
	    	break;
	    	case 6 :
	    		exit(0);
	    default:
	    	printf("\n Invalide choice:");
	    
	    	
	}
	 
   }
}
int Menu()
{
	printf("\n 1. Enter a Bus:");
	printf("\n 2. Enter a Cycle:");
	printf("\n 3. Enter a Riksha:");
	printf("\n 4. Show Status:");
	printf("\n 5. Delete Data:");
	printf("\n 6. Exit:");
	printf("\n\n Enter your choice:\n");
	scanf("%d",&ch);
	return(ch);
}
void Delete()
{
	nob=0;
	noc=0;
	nor=0;
	amount=0;
	count=0;
}
void showDetail()
{
	printf("\n number of bus=%d",nob);
	printf("\n number of Cycle=%d",noc);
	printf("\n number of Riksha=%d",nor);
	printf("\n Total number of Vehicle=%d",count);
	printf("\n Total gain amount=%d",amount);
}
void Riksha()
{
	printf("\n\n Entry Sucessful\n");
	nor++;
	amount=amount+50;
	count++;
	
}
void Cycle()
{
	printf("\n\n Entry Sucessful\n");
	noc++;
	amount=amount+20;
	count++;
	
}
void Bus()
{
	printf("\n\nEntry Sucessful\n");
	nob++;
	amount=amount+100;
	count++;
	
}
