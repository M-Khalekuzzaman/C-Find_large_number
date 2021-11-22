#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 1st Number is :");
        scanf("%d",&num1);
    printf("Enter 2nd Number is :");
        scanf("%d",&num2);
    printf("Enter 3rd Number is :");
        scanf("%d",&num3);

        if(num1>num2 && num1>num3)
            printf("Large number is : %d\n",num1);
        else if(num2>num1 && num2>num3)
            printf("Large number is : %d\n",num2);
        else
            printf("Large number is : %d\n",num3);
   getch();

}
