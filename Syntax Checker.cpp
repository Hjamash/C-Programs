#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct {
	int lineno;
	int lenght;
	char code[99];
}syntax_t;

syntax_t data[999];	/* Declaring Global Variable */
int totallines; 	/* Declaring Global Variable */

void ReadnWriteCode(FILE *in);
void ReadnWriteCode(FILE *in)
{
		int i=0,j=0;
		char a[99];
		while (!feof(in))							/* Reading file */
	{
		fgets(a,99,in);
		data[i].lenght = strlen(a);
		strcpy(data[i].code,a);	
		data[i].lineno = i + 1;
		i++;
	}
	totallines = i;		
	rewind(in);	
	printf("Press any key to print the code.\n");
	getch();
	j=0;
	
		while (!feof(in))						
	{
		fgets(a,99,in);
		
			if (*a=='\n' || *a == '/')				/* Skipping Empty lines and comments in the code */
			{
				j++;
				continue;
			}
		
		printf("line#%d (%d)	%s",data[j].lineno,strlen(data[j].code),data[j].code);
		j++;
	}
printf("\n\n\n");
}
void CheckLoopSyntax();
void CheckLoopSyntax()
{
	int b=0,i=0,j=0,sc=0;
	for (i=0;i<totallines;i++)
	{
		if (strstr(data[i].code,"for") != NULL)
		{
			for (j=0;j<strlen(data[i].code);j++)
			{
				if (data[i].code[j] == ';')
				{
					sc++;
				}
					if (data[i].code[j] == '(')
					{
						b++;
					}
						if (data[i].code[j] == ')')
						{
							b--;
						}
			}
			if (sc != 2 || b != 0)
			{
				printf("\nIn line#%d for loop a ';' or '()' is missing.\n",i+1);
			}
			sc=0;b=0;
		}
	}
}
void CheckStdioFunctions();
void CheckStdioFunctions()
{
	int c=0,i=0,j=0,k=0,m=0,n=0,b=0,q=0,sc=0;
	for (i=0;i<totallines;i++)
	{
		c=0;q=0;b=0;
			if (strstr(data[i].code,"scanf") != NULL	||	strstr(data[i].code,"printf") != NULL)
			{
				for (k=0;k<strlen(data[i].code);k++)
				{
					if (data[i].code[k] == '(')
					{
						b++;
					}
					if (data[i].code[k] == ')')
					{
						b--;
					}
					if (data[i].code[k] == '"')
					{
						q++;
					}
					if (data[i].code[k] == ',')
					{
						c++;
					}
					if (data[i].code[j] == ';')
					{
						sc++;
					}				
				}
				
				if (q != 2 || b != 0 || c != 1 || sc != 1) 
				{
					printf("\nIn line#%d error in scanf or printf a 'comma' , 'quote' or 'bracket' is missing.\n",i+1);
				}
			}
					c=0;q=0;b=0,sc=0;
			
			if (strstr(data[i].code,"fscanf") != NULL	||	strstr(data[i].code,"fprintf") != NULL)
			{
				for (m=0;m<strlen(data[i].code);m++)
				{
					if (data[i].code[m] == '(')
					{
						b++;
					}
						if (data[i].code[m] == ')')
						{
							b--;
						}
							if (data[i].code[m] == ',')
							{
								c++;
							}
								if (data[i].code[m] == '"')
								{
									q++;
								}
									if (data[i].code[j] == ';')
									{
										sc++;
									}				
				}
				if (b != 0 || c != 2 || q != 2 || sc != 1)
				{
					printf("\nIn line#%d error in fscanf or fprintf a 'comma' , 'quote' or 'bracket' is missing.\n",i+1);
				}
				b=0;c=0;q=0;sc=0;
			}
			
			if (strstr(data[i].code,"gets") != NULL	||	strstr(data[i].code,"puts") != NULL)
			{					
				for (m=0;m<strlen(data[i].code);m++)
				{
					if (data[i].code[m] == '(')
					{
						b++;
					}
						if (data[i].code[m] == ')')
						{
							b--;
						}
							if (data[i].code[m] == ';')
							{
								sc++;
							}
				}
				if (b !=0 || sc != 1)
				{
					printf("\nIn line#%d error in gets or puts syntax.\n",i+1);
				}
							b=0;c=0;q=0;sc=0;
			}
	}
}
int main()
{
	int i=0;
	FILE *in;
	in = fopen("bonus.txt","r");
	if (in == NULL)
	{
		printf("Error unable to read the file.");
		return 0;
	}
	ReadnWriteCode(in);
	CheckLoopSyntax();
	CheckStdioFunctions();
}
