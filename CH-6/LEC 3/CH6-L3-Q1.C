#include<stdio.h>
#include<conio.h>
main()
{
	int a,bill=0;
	clrscr();
	tmp:
	 printf("\nRECHARGE MENU \n");
	 printf("Select your LANGUAGE... \n");
	 printf("PRESS 1 FOR ENGLISH \n");
	 printf("PRESS 2 FOR HINDI \n");
	 printf("PRESS 3 FOR GUJRATI \n");
	 printf("ENTER YOUR CHOICE :");
	 scanf("%d",&a);
	 switch(a)
	       {
		 case 1:
			  printf("\nFOR SPECIAL RECHARGE 1\t\t:250\n");
			  printf("FOR REGULAR RECHARGE 2\t\t:150\n");
			  printf("FOR NORMAL RECHARGE 3\t\t:300\n");
			  printf("ENTER YOUR CHOICE :");
			  scanf("%d",&a);
			  clrscr();
			  switch(a)
			  {
			   case 1:
				printf("\nYOU HAVE SPECIAL RECHARGE\n");
				bill +=30;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			   case 2 :
				printf("YOU HAVE REGULAR RECHARGE \n");
				bill +=25;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			   case 3:
				printf("YOU HAVE NORMAL RECHRGE\n");
				bill +=15;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;

		 case 2:
			 printf("\n SPECIAL RECHARGE KE LIYE 1\t\t300\n");
			 printf("NORMAL RECHARGE KE LIYA 2\t\t200\n");
			 printf("ANLIMITED VALE RECHARGE KE LIYE 3\t350\n");
			 printf("ENTER YOUR CHOICE :");
			 scanf("%d",&a);
			 clrscr();
			 switch(a)

			 {
				case 1:
				printf("\nAAPKA SPECIAL RECHARGE \n");
				bill += 25;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

			      case 2:

				printf("AAPKA NORMAL RECHARGE \n");
				bill +=20;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				case 3:
				printf("AAPKA ANIMITED VALA RECHARGE \n");
				bill +=10;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;


		case 3 :
			  printf("\nSADU RECHARGE MATE 1\t\t150\n");
			  printf("4G NET VALA RECHAEGE MATE 2\t250\n");
			  printf("TOK TIME VALA RECHARGE MATE 3\t100\n");
			  printf("ENTER YOUR CHOICE :");
			  scanf("%d",&a);
				 clrscr();
			 switch(a)
			 {
				case 1:
				printf("\nTAMARU SADU RECHARGE\n");
				bill += 30;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				 case 2:

				printf("TAMARU 4G NET VALU RECHARGE\n");
				bill +=25;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				case 3:
				printf("TAMARU TOK TIME VALU RECHARGE\n");
				bill +=15;
				printf("\n\n press 1 for recharge more\n");
				printf("press 0 for bill\n");
				printf("ENTER YOUR CHOICE :");
				scanf("%d",&a);
				if(a == 1)
				{
				goto tmp;
				}
				break;

				default:
				   printf("\invalid choice...%d",a);
		     }
		    break;



		default:
			  printf("\invalid choice...%d",a);
			  break;
	       }



			printf("\n\n your bill : %d",bill);

	getch();
}

