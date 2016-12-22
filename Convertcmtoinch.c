#include<stdio.h>
#include<conio.h>
void main()
       {
        float distcm,distinch;
         printf("\n enter distance in centimeter");
         scanf("%f", &distcm);
         distinch=distcm/2.54;
         printf("\n the distance is %f inches",distinch);
        getch();
        }
