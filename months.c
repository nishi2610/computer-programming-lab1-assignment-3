#include<stdio.h>
int main()

{
    int month;
    printf("enter month number:");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("the month has 31 days");
            break;
        case 2:
            printf("the month has 28/29 days");
            break;
        case 3:
            printf("the month has 31 days");
            break;
        case 4:
            printf("the month has 30 days");
            break;
        case 5:
            printf("the month has 31 days");
            break;
        case 6:
            printf("the month has 30 days");
            break;
        case 7:
            printf("the month has 31 days");
            break;
        case 8:
            printf("the month has 31 days");
            break;
        case 9:
            printf("the month has 30 days");
            break;
        case 10:
            printf("the month has 31 days");
            break;
        case 11:
            printf("the month has 30 days");
            break;
        case 12:
            printf("the month has 31 days");
            break;
        default:
            printf("invalid input");
    }
}
