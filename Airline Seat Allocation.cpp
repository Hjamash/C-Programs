#include <stdio.h>
#include <time.h>
void delay(unsigned int mseconds)	
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
	int type,seat[10]={0,0,0,0,0,0,0,0,0,0},seatno;
	char intro[200]={"\n\n\n	*****Welcome to United Arab Emirates******\n\nPlease type 1 for first class.\nPlease type 2 for economy.\n"};
	/* FCS are the seates occupied in first class */ 
	/* ECS are the seates occupied in economy class */ 
	int FCS=0,ECS=5;
	char sec,alt;
	int h=0;
	while (intro[h++]!='\0')
	{
		printf("%c",intro[h]);
		delay(100);
	}
	for (int i=0;i<10;i++)
	{	
	

		scanf("%d",&type);
			switch (type)
		   {
			case 1:
			 
			{	
				if (FCS >= 5)	/* Checking if there is any space in the economy class in case the first class is fully occupied */	
				{	
					printf("\nIs it acceptable to be placed in the economy section?\n");
					scanf(" %c",&alt);
						if (alt == 'n' || ECS >= 10)
						{
							printf("\nNext flight will leave in 3 hours.\n");	break ;
						}
							else if (alt == 'y')
							{	
								seat[ECS] = 1;
								ECS = ECS + 1;
								seatno = i + 1;
								printf("\nBoarding Pass;\nSeat No.%d\nType : Economy Class\n",ECS); break ;		
							}
				}
					else
					{
						seat[FCS] = 1;
						FCS = FCS + 1;
						seatno =  i + 1;
						printf("\nBoarding Pass;\nSeat No.%d\nType : First Class\n",FCS); break ;
					}
			}
			
			case 2:
				
				{
					if (ECS >= 10)	  /* Checking if there is any free space in first class in case the economy class is fully occupied */
					{	
						printf("\nIs it acceptable to be placed in the First section?\n");
						scanf(" %c",&alt);
							if (alt == 'n' || FCS >= 5)
							{
								printf("\nNext flight will leave in 3 hours.\n"); break ;
							}
								else if (alt == 'y')
								{
									seat[FCS] = 1;
									FCS = FCS + 1;
									seatno = i + 1;
									printf("\nBoarding Pass;\nSeat No.%d\nType : First Class",FCS); break ;		
								}
					}
					else
					{
						seat[ECS] = 1;
						ECS = ECS + 1;
						seatno =  i + 1;
						printf("\nBoarding Pass;\nSeat No.%d\nType : Economy Class\n",ECS); break ;
					}
			    }
			default :
				
					{
						printf("Something went wrong.\n"); break;
					}
		   }
		   
	printf("\nSeats Status = ");	

	 for (int j=0;j<10;j++)
		 {
	 		printf("%d,",seat[j]);
		 }
			printf("\n");
	}
}


