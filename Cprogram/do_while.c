#include<stdio.h>
void main()
{
    int ch;
    int k;
    do
    {
        printf("1. c language");
        printf("2. c++ language");
        printf("3. java language");

        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("you selected c language");
            break;
        case 2:
            printf("you selected c++ language");
            break;
        case 3:
            printf("you selected java language");
            break;
        default:
            printf("invalid choice");

        }
        printf("press 4 for continue");
        scanf("%d",&k);
    }
    while(k==4);
}
