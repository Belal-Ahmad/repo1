#include<stdio.h>
#include<conio.h>
void main()
       {
        int age;
        printf("\n enter the age");
        scanf("%d", &age);
                if(age<18)
                 {
      printf("\n you are children");
                  }
               else if(age>=18 && age<60)
                 {
      printf("\n you are yong");
                 }
              else if(age>=60 && age<=110)
                {
       printf("\n you are old");
                }
                else
                {
    printf("\n invalide age");
                }
   getch();
   }