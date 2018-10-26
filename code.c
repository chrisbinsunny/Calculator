#include<stdio.h>
void main()
 {
  char op;
  int a,b,z;
  printf("Enter A and B:");
  scanf("%d%d",&a,&b);
  printf("1.Addition\n2.Subtraction\n3.Multiply\n4.Division\nEnter Your Option:");
  scanf("%d",&op);
  switch(op)
    {
     case 1:z=a+b;
            break;
     case 2:z=a-b;
            break;
     case 3:z=a*b;
            break;
     case 4:z=a/b;
            break;
     default:printf("Wrong Entry!");
             exit(1);
    }
   printf("Your Answer is %d.",z);
  } 
