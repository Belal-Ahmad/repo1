#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
printf("\n alphabetical pattern \n");
for(i='A'; i<='Z'; i++)
{
for(j='A'; j<=i; j++)
{
printf("%c",j);
}
printf("\n");
}
getch();
}
