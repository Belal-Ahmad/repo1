#include<stdio.h>
#include<conio.h>
void main()
        {
         int row,i,j,k;
         clrscr();
         printf("\n enter the number of row" );
        scanf("%d",&row);
        for(i=1; i<=row; i++)
       {
       for(j=1; j<=(row-i+1); j++)
       printf("                ");
       for(k=1; k>0; k--)
       printf(" * ");
       printf("\n");
       }
      getch();
      }
