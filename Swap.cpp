#include <stdio.h>

/* Swap values of two variables without using a third varible */
int main()
{ int a,b;
	printf("Enter First Value & Second Value\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("First Value = %d\nSecond Value = %d", a, b); //Values Swapped
	return 0;
}
