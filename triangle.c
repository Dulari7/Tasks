#include <stdio.h>
#include <conio.h>
void main()
{
int     ang1,ang2,ang3;
clrscr();

	printf("\n Enter the value of 1st angle  =");
	scanf("%d",&ang1);
	printf("\n Enter the value of 2nd angle  =");
	scanf("%d",&ang2);
	printf("\n Enter the value of 3rd angle  =");
	scanf("%d",&ang3);

	if((ang1+ang2+ang3)==180)
	{
		printf("\n you can make traingle");
	}
	else
	{	printf("\n you can not make traingle");

	}
getch();
}