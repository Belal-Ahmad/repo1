#include <stdio.h>
#include <conio.h>

void main()

{
	//intro
	{
	printf("\n\t                         YY        YY          ");
	printf("\n\t                         !!   YY   !!          ");
	printf("\n\t                          !!  !!  !!           ");
	printf("\n\t                           !! !! !!            ");
	printf("\n\t               \\\\\\          !!!!!!          ///   ");
	printf("\n\t              \\\\\\\\\\\\       !!!!!!!!       //////     ");
	printf("\n\t            \\\\\\\\\\\\\\\\\\\\    !!!!!!!!!!    //////////     ");
	printf("\n\t           \\\\\\\\\\\\\\\\\\\\\\\\\\  !(O)!!(O)!  /////////////    ");
	printf("\n\t          \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\!!  !!  !!////////////////   ");
	printf("\n\t        \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\!! <==> !!////////////////// ");
	printf("\n\t                          !!!!!!!!!!                   ");
	printf("\n\t                          -==AaSh==-                 \n");
	printf("\n\t                     =ODD-EVEN CALCULATOR=             ");
	printf("\n\t                   =READ INSTRUCTIONS BELOW=         \n");
    }
	
	//------

	char input1;
	int input2,alpha1,beta1,hoy;
	
	//taking value of input1
	{
		printf("INPUT1-> o for odd table\n        e for even table\n");
		scanf_s("%c", &input1);
	}
	//-----------------------
	
	//devloper output
	//printf("msg4dev> %c%d\n", input1, input2);
	//----checked-----
	
	//determine value of alpha1 using input1
	{
		alpha1 = 3;

		if (input1 == 'o')
		{
			alpha1 = 1;
		}

		if (input1 == 'e')
		{
			alpha1 = 2;
		}
	}
	//--------------------------------------


	//taking value of input 2 only if input1(alpha) is correct
	{
		if (alpha1 == 1 || alpha1 == 2)

		{
			printf("INPUT2-> how many number you want in table ?\n");
			scanf_s("%d", &input2);
		}
	}
	//---------------------------------------------------------

	//printf("msg4dev alpha=%d\n", alpha1);
	
	//-assigning value to beta1 using alpha1-

	{
		if (alpha1 == 1)
		{
			beta1 = (input2 * 2) - 1;
			printf("\n-= ODD TABLE upto %d =-\n", beta1);
		}
		if (alpha1 == 2)
		{
			beta1 = beta1 = (input2 * 2);
			printf("\n-= EVEN TABLE upto %d =-\n", beta1);
		}
	}
	//---------------------------------------
	

	//printing table using hoy and alpha
	switch (alpha1)
	{
	case 1:
		for (hoy = 1; hoy <= beta1; hoy=hoy+ 2)
		{
			printf("\n %d", hoy);
		}
		break;
	case 2:
	    for (hoy = 2; hoy <= beta1; hoy=hoy+ 2)
		{
			printf("\n %d", hoy);
		}
		break;
	default:
		int jambabat;
		for (jambabat = 1; jambabat <= 80; jambabat = jambabat + 1)
		{
			printf("+=");
		}

	    printf("\n\t\t    ======  =====   =====   ====   =====     ");
	    printf("\n\t\t    ||     ||   || ||   || ||  || ||   ||    ");
    	printf("\n\t\t    ||==|  ||__//  ||__//  ||  || ||__//     ");
	    printf("\n\t\t    ||     ||  \\   ||  \\   ||  || ||  \\   ");
		printf("\n\t\t    ====== ||   \\  ||   \\   ====  ||   \\\n");

		for (jambabat = 1; jambabat <= 80; jambabat = jambabat + 1)
		{
			printf("+=");
		}
	}
	//----------------------------------
	
	//unused old code
	{
		//-----------------------------------------------------------
		//int jambabat,gank;
		//printf("\ninput 1 for error\n");
		//scanf_s("%d", &gank);

		//if (gank = 1)
		//{

			//for (jambabat = 1; jambabat <= 80; jambabat = jambabat + 1)
			//{
				//printf("+=");
			//}

			//printf("\n\t\t    ======  =====   =====   ====   =====     ");
			//printf("\n\t\t    ||     ||   || ||   || ||  || ||   ||    ");
			//printf("\n\t\t    ||==|  ||__//  ||__//  ||  || ||__//     ");
			//printf("\n\t\t    ||     ||  \\   ||  \\   ||  || ||  \\   ");
			//printf("\n\t\t    ====== ||   \\  ||   \\   ====  ||   \\\n");

			//for (jambabat = 1; jambabat <= 80; jambabat = jambabat + 1)
			//{
				//printf("+=");
			//}
		//}
		//-----------------------------------------------------------	
	}
	//----------------

	printf("\n THANK YOU for using our calculator\n press ENTER to exit");
	_getch();

}
