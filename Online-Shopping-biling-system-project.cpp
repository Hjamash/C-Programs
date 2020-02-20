#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
typedef struct
{
	char password[30];
}mart_t;

typedef struct pinfo
{
		char name[100];
		int age,address;
}pf[100];

int personal_info();
int personal_info()
{
	pinfo pf[100];
	printf("Enter your name->");
	scanf("%s",pf[1].name);
	printf("\nEnter KiloMeters from Our Mart->");
	scanf("%d",&pf[1].address);
	printf("\nEnter your age->");
	scanf("%d",&pf[1].age);
	printf("\nWe Have a Policy that we give 10 percent discount to costumer of age greater than 60\n We charge 1Rs per Kilometer on Home delivery\n");
	system("cls");
return(0);

}

int bill(int x);
int bill(int x)
{
	pinfo pf[100];

	if(pf[1].age>60)
	{
		x=x*0.9;
	}

	x=x+1*pf[1].address;
	printf("Mr %s The Bill Of Your Purchased Items Are %d including delivery charges.",pf[1].name,x);
	return(0);
}


mart_t data[999]; //declaring global variable

int cricket();
int cricket()
	{
		int a,price,n;
		printf("To buy press the serial number then press enter.\n1)Cukabura Bat Rs.1000\n2)Adidas Bat Rs.1200\n3)Ihsan bat Rs.1540\n4)Hard Ball Rs.150");
		scanf("%d",&a);
		printf("Enter Quantity->");
		scanf("%d",&n);
		system("cls");

		switch (a)
		{
			case 1:
				price =price+(1000*n);
			
			case 2:	
			price=price+1200*n;
			
			case 3:
				price = price + 1540*n;
			
			case 4:
				price=price+150*n;
		}
		
		return(price);
	}
	
int baseball();
int baseball()
	{
		int a,n,price;
		printf("Enter Serial Number of the thing you want to buy\n1)Bat  Rs.1500\n2)Glooves  RS.500\n3)Helmet  Rs.600\n4)Batting Gloves  Rs.700");
		scanf("%d",&a);
		printf("Enter Quantity");
		scanf("%d",&n);
		system("cls");
		
		switch(a)
		{
			case 1:
				price=price+1500*n;
		
			case 2:
				price=price+500*n;
		
			case 3:
				price=price+600*n;
		
			case 4:	
			    price=price+700*n;
		
		}
		
		return(price);
	}
	
int football();
int football()
	{
		int a,n,price;
		printf("Enter serial nmber of the good you want to buy\n1)Football Rs.1000\n2)Team Shirt Rs.500\n3)Kit Rs.1500");
		scanf("%d",&a);
		printf("Enter Quantity->");
		scanf("%d",&n);
		system("cls");
		
		switch(a)
		{
			case 1:
				price=price+1000*n;
		
			case 2:
				price=price=500*n;
		
			case 3:
				price=price+1500*n;
		
		}
		
		return(price);
	}
	
int badminton();
int badminton()
{
	int a,n,q,price;
	printf("Enter serial Number of the good\n1.racket 2.shittle");	
	scanf("%d",&a);
	printf("Enter Quantity");
	scanf("%d",&n);
	system("cls");
		
		switch(a)
			{
				case 1:
					
					printf("Enter quality  Number\n1.High  Rs.1000\n2.Medium  Rs.800\n3.Low RS.500");
					scanf("%d",&q);
					system("cls");
			      
				  if (q==1)
				  	price=price+1000*n;
				  
				  	else if(q==2)
					price =price+800*n;
						else
						price=price+500*n;
				
				case 2:
				
					printf("Enter quality  Nummber\n1.High  Rs.1000\n2.Medium  Rs.800\n3.Low RS.500");
					scanf("%d",&q);
					system("cls");
			    
				  if (q==1)
				  price=price+1000*n;
				
				  	else if(q==2)	
					price =price+800*n;	
				
			}
	return (price);	
}
	
int meat();
int meat()
{
	int n,price=0,a;

		printf("\n1)White meat\tRs500 per packet\n2)Red meat\tRs800 per packet");
		printf("\nEnter your type\n");
		scanf("%d",&n);
	
		if(n==1)
		{
			printf("\nEnter number of packets\n");
			scanf("%d",&a);	
			system("cls");
			price=price+500*a;
		}
		
			else if(n==2)
			{
				printf("\nEnter number of packets\n");
				scanf("%d",&a);
				system("cls");
				price=price+800*a;
				
			}
		return(price);
	}
	
int clothes();
int clothes()
{	int a,n,price=0,p;
	printf("1)MEN\n2)Women \n3)Kids\n Enter serial number of the item to continue->");	
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("\nEnter Quantity->");
		    scanf ("%d",&n);
		    printf("\nEnter size you want:\n");
		    printf("\n1)large Rs.900\n2)medium Rs.700\n3)small Rs.500\n");
		    printf("\nEnter serial number of the selected item:");
		    scanf("%d",&p);
		    system("cls");
		    
			if(p==1)
			{
		    	price=price+900*n;
			}
				else if(p==2)
				{
					price=price+700*n;
				}
					else if(p==3)
					{
						price=price+500*n;
					}
			
            return(price);
		
		case 2:
			printf("\nEnter Quantity->");
		    scanf ("%d",&n);
		    printf("\nEnter size you want:\n");
		    printf("\n1)large Rs.900\n2)medium Rs.700\n3)small Rs.500\n");
		    printf("\nEnter serial number of the selected item:");
		    scanf("%d",&p);
		    system("cls");
		    
			if(p==1)
			{
				price=price+900*n;
			}
				else if(p==2)
				{
					price=price+700*n;
				}	
					else if(p==3)
					{
						price=price+500*n;
					}
					
			return(price);
			
		case 3:
			
			printf("\nEnter Quantity->");
		    scanf ("%d",&n);
		    printf("\nEnter size you want:\n");
		    printf("\n1)large Rs.900\n2)medium Rs.700\n3)small Rs.500\n");
		    printf("\nEnter serial number of the selected item:");
		    scanf("%d",&p);
		    system("cls");
		    
			if(p==1)
			{
		    	price=price+900*n;
			}
				else if(p==2)
				{
					price=price+700*n;
				}
					else if(p==3)
					{
						price=price+500*n;
					}
						
			return(price);
	}
}

int sports();
int sports()
{
	int a,price;
	printf("\n1)Cricket\n2)baseball\n3)football\n4)badminton\nEnter the serial number to purchase");
	scanf ("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:
			
			price=cricket();
			return(price);
		case 2:
			
			price=baseball();
			return(price);
		case 3:
			
			price=football();
            return(price);	
		case 4:
			
			price=badminton();
	        return(price);	
	}
}

int medicine();
int medicine()
{
	int n,a,price;
	printf ("Enter number of medicine you want->\n1.Panadolb Rs.50.00\n2.Insoline RS.300.00\n3.First Aid Kit Rs.800");
	scanf("%d",&a);
	printf("Enter quantity");
	scanf("%d",&n);
	system("cls");

	switch(a)
	{
		case 1:
				price=price+50*n;
			
			case 2:
				price=price+300*n;
				
				case 3:
				price=price+800*n;	
	}
	
	return(price);
	
}

int toystore();
int toystore()
{
		int n,a,price;
		printf ("Enter number of toy you want->\n1.toy A Rs.50.00\n2.toy 2 RS.300.00\n3.toy 3 Kit Rs.800");
		scanf("%d",&a);
		printf("Enter quantity");
		scanf("%d",&n);
		system("cls");
			
			switch(a)
			{
				case 1:
						price=price+50*n;
				
					case 2:
						price=price+300*n;
				
						case 3:
							price=price+800*n;	
			}
			
	return(price);
}


void delay(unsigned int mseconds)	
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void password();
void password()
{
		printf("\n\n\n\n\n\n\t\t\t * * * * * * * * * * * * * *");
		printf("\n\t\t\t * *");
		printf("\n\t\t\t * SHOPPING *");
		printf("\n\t\t\t * MALL *");
		printf("\n\t\t\t * BILLING *");
		printf("\n\t\t\t * SYSTEM *");
		printf("\n\t\t\t * *");
		printf("\n\t\t\t * * * * * * * * * * * * * *\n\n");
	int i=0;
	char p[99]="			Enter password => ";
	
	while (p[i]!='\0')
	{
		printf("%c",p[i]);
 	    delay(100);
		i++;
	}
	
	scanf("%s",&data[1].password);
	while (strcmp(data[1].password,"unlock") != 0)
	{ 
		int i=0;
		printf("			Incorrect password!\n");
		while (p[i]!='\0')
		{
				printf("%c",p[i]);
 			    delay(100);
				i++;
		}
		scanf("%s",&data[1].password);
	}
		system("cls");
	
}
int select();
int select(){
	int i,a,p=0;
	char yesorno='y';
	
	for(i=0;yesorno != 'n';i++)
	{
	    printf("\n1.Meat Stores\n2.shirts.\n3.sports\n4.Medicine\n5.Toy store\n6.To see the bill\n");
		printf("\nPress the serial number of the item you are interested to buy => ");
		scanf("%d",&a);
		system("cls");
	
			switch (a)
			{
				case 1:
					p=p+meat(); break;
	
					case 2:
						p=p+clothes(); break;
	
						case 3:
							p=p+sports(); break;
	
							case 4:
								p=p+medicine(); break;
	
								case 5:
									p=p+toystore(); break;
	
									case 6:
										bill(p);
			
			}
			
			printf("\nDo you want to order anything else?(y/n)\n");
			scanf(" %c",&yesorno);
	}
		return(p);
}

int mainmenu();
int mainmenu()
{
	int i=0;
	int q;
	char p[99]={"		******WELCOME TO THE SUPER MART*******"};
	
	while (p[i] != '\0')
	{
		delay(100);
		printf("%c",p[i]);
		i++;
	}	
	q=select();
    return (q);
}

int question();
int question()
{
	char amazon[100],basic[100],wi[100],bird[100],animal[100],river[100],writer[100],uno[100],owner[100],ios[100];
	int points=0;
	printf("\nTo Get discount you have to answer following questions\nCorrect answer of each question will give you 1 percent Discount:\n\n\n");	
	printf("\n1.National Bird Of Pakistan is->");
	scanf("%s",bird);
    if(strcmp("Chakor",bird)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
		else
		{
			printf("\nIncorrect Answer\n\n");
		}
		
	printf("\n2.National Animal Of Pakistan is->");
	scanf("%s",animal);
    
	if(strcmp("Markhor",animal)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
	
		else
		{
		printf("\nIncorrect Answer");
		}
		
	printf("\n3.Biggest River around the Globe is->");
	scanf("%s",river);
    
		if(strcmp("Nile",river)==0)
		{
			printf("\nCorrect Answer");
			system("cls");
			points=points+1;
		}
	
			else
			{
				printf("\nIncorrect Answer");
			}
			
	printf("\n4.Who is the writer of famous book Bang-Dara>");
	scanf("%s",writer);
	
    if(strcmp("Allama Iqbal",writer)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
		else
		{
			printf("\nIncorrect Answer");
		}
		
	printf("\n5.The Owner of Microsoft company is->");
	scanf("%s",owner);
    if(strcmp("Bill Gates",owner)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
			else
			{
				printf("\nIncorrect Answer");
			}
			
	printf("\n6.UNO stands for->");
	scanf("%s",uno);
	
    if(strcmp("United Nation Organization",uno)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
		else
		{
			printf("\nIncorrect Answer");
		}
		
	printf("\n7.IOS stands for->");
	scanf("%s",ios);
    
	if(strcmp("Iphone Operating System",ios)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
		else
		{
			printf("\nIncorrect Answer");
		}
		
	printf("\n8.2016 cricket Worldcup was Won by which country->");
	scanf("%s",wi);
    
	if(strcmp("West Indies",wi)==0)
	{
		printf("\nCorrect Answer");
		system("cls");
		points=points+1;
	}
	
		else
		{
			printf("\nIncorrect Answer");
			system("cls");
		}
			
   		printf("\n9.The most basic Language of programming is->");
		scanf("%s",basic);
    	
		if(strcmp("GW Basics",basic)==0)
		{
			printf("\nCorrect Answer");
			system("cls");
			points=points+1;
		}
		
				else
				{
					printf("\nIncorrect Answer");
				}
				
        printf("\n10.Amazon Online store is based on which language->");
		scanf("%s",amazon);
		
    	if(strcmp("Python",amazon)==0)
			{
				printf("\nCorrect Answer");
				system("cls");
				points=points+1;
				return(points);
			}
	
				else
				{
					printf("\nIncorrect Answer");
				}
printf("\n******YOU HAVE ANSWERED %d QUESTION CORRECT HENCE YOU WILL GET DISCOUNT ACCORDINGLY******\n",points);
}

int main() 
{	printf("Hint:unlock");
	int p;
	int d;
	char yesorno[10];
   
	password();		//password is "unlock"
	personal_info();
	p=mainmenu(); 
	    	printf("\nDo you want speicial discount by answering questions?(y/n)\n");
			scanf("%s",yesorno);
		if(strcmp("y",yesorno)==0)
		{
			d=question();
			p=p*(1-d);
			bill(p);
		}
			else if(strcmp("n",yesorno)==0)
			{
				bill(p);
			}
}


