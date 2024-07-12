#include<stdio.h>
int forLoop();
int main()
{
    int i, number; //delarative
    printf("Enter a number to generate the table in c:");
    scanf("%d", &number);

    printf("\nThe multiplication table of %d\n", number);
    forLoop();
    printf("\n");
    for (i = 1; i <= 12; i = i + 1)
    {
        printf("%d x %d = %d\n",number,i, (number * i));
    }
    return 0;
}
int forLoop(){
    int i = 1, count = 30;
    for (i = i ; i <= count; i ++)
    {
        printf("*");
    }
    return 0;
}