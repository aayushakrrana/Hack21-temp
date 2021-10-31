#include<stdio.h>
#include<stdio.h>

void andgate();
void orgate();
void notgate();
int i,j,k;
void main()
{
 int choice;
printf("Aayush Kumar Rana\n1702913002\n");
 printf(" Choose from the option below:\n");
 printf("1. AND \n");
 printf("2. OR \n");
 printf("3. NOT\n");
 int a;
 do
 {

   printf("Enter your choice: \n");
   scanf("%d",&choice);
   switch(choice)
    {
      case 1:
          andgate();
          break;
      case 2:
          orgate();
          break;
      case 3:
          notgate();
          break;
      default:
          printf("Invalid entry\n");
          break;
}
     printf("Press 1 to continue\n");
     scanf("%d",&a);
     }while(a==1);
 }
void andgate()
 {
  int num;
  printf("Enter the number of input values for truth table\n");
  scanf("%d",&num);
  if(num==2)
  {
   printf("A\tB\tOUTPUT\n");
   for(i=0;i<=1;i++)
      for(j=0;j<=1;j++)
         {
         if(i&&j==1)
         printf("%d\t%d\t\t1\n",i,j);
         else
         printf("%d\t%d\t\t0\n",i,j);
         }
  }
  if(num==3)
  {
   printf("A\tB\tC\tOUTPUT\n");
   for(i=0;i<=1;i++)
      for(j=0;j<=1;j++)
         for(k=0;k<=1;k++)
            {
            if(i&&j&&k==1)
            printf("%d\t%d\t%d\t\t1\n",i,j,k);
            else
            printf("%d\t%d\t%d\t\t0\n",i,j,k);
            }

  }
 }
 void orgate()
 {
  int mun;
  printf("Enter the number of input values for truth table\n");
  scanf("%d",&mun);
  if(mun==2)
  {
     printf("A\tB\tOUTPUT\n");
     for(i=0;i<=1;i++)
            for(j=0;j<=1;j++)
         {
           if(i||j==1)
            printf("%d\t%d\t\t1\n",i,j);
         else
            printf("%d\t%d\t\t0\n",i,j);
         }
  }
  if(mun==3)
  {
   printf("A\tB\tC\tOUTPUT\n");
   for(int i=0;i<=1;i++)
        for(int j=0;j<=1;j++)
             for(int k=0;k<=1;k++)
            {
               if(i||j||k==1)
               printf("%d\t%d\t%d\t\t1\n",i,j,k);
            else
              printf("%d\t%d\t%d\t\t0\n",i,j,k);
            }
}
 }
 void notgate()
 {
  printf("A\tOUTPUT\n");
  printf("0\t\t1\n");
  printf("1\t\t0\n");
 }


