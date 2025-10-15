#include <stdio.h>
int main()
{
    printf("1. BMW\n");
    printf("2. Audi\n");
    printf("3. Maruti\n\n");

    int ch;
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1: // BMW
    {
        printf("You are in BMW showroom\n\n");
        printf("1. BMW-M4\n");
        printf("2. BMW-M5\n");
        printf("3. BMW-M3\n\n");

        int ch1;
        printf("Enter your choice in BMW models: ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            printf("Your BMW-M4 price is 2,50,00,000\n");
            break;
        case 2:
            printf("Your BMW-M5 price is 4,50,00,000\n");
            break;
        case 3:
            printf("Your BMW-M3 price is 1,50,00,000\n");
            break;
        default:
            printf("Invalid BMW model choice!\n");
        }
        break;
    }

    case 2: // Audi
    {
        printf("You are in Audi showroom\n\n");
        printf("1. Audi A6\n");
        printf("2. Audi Q7\n");
        printf("3. Audi R8\n\n");

        int ch2;
        printf("Enter your choice in Audi models: ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            printf("Your Audi A6 price is 60,00,000\n");
            break;
        case 2:
            printf("Your Audi Q7 price is 80,00,000\n");
            break;
        case 3:
            printf("Your Audi R8 price is 2,30,00,000\n");
            break;
        default:
            printf("Invalid Audi model choice!\n");
        }
        break;
    }

    case 3: // Maruti
    {
        printf("You are in Maruti showroom\n\n");
        printf("1. Maruti Swift\n");
        printf("2. Maruti Baleno\n");
        printf("3. Maruti Dzire\n\n");

        int ch3;
        printf("Enter your choice in Maruti models: ");
        scanf("%d", &ch3);

        switch (ch3)
        {
        case 1:
            printf("Your Maruti Swift price is 8,00,000\n");
            break;
        case 2:
            printf("Your Maruti Baleno price is 9,50,000\n");
            break;
        case 3:
            printf("Your Maruti Dzire price is 10,00,000\n");
            break;
        default:
            printf("Invalid Maruti model choice!\n");
        }
        break;
    }

    default:
        printf("Invalid showroom choice!\n");
    }

    return 0;
}
