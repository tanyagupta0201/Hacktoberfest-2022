/*
	Author Name : Maaz Mahmood
	Date Modified : 01st Oct, 22
*/

//kms to miles
//inches to foot
//cms to inches
//pound to kgs
//inches to metre
#include <stdio.h>
int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMetre = 0.0254;
    float first, second;

    while (1)//while(1) means program holds the true value so it means keep running the program
    {
        printf("Enter the Input Character. Press q to Exit\n 1.kms To miles\n 2.inches To foot\n 3.cms To inches\n 4.pound To kgs\n 5.inches To metre\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the Program...");
            goto end;
            break;

        case '1':
            printf("Enter the Magnitude of First Quantity\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter the Magnitude of First Quantity\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("Enter the Magnitude of First Quantity\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f cms is equal to %f inches\n", first, second);
            break;

        case '4':
            printf("Enter the Magnitude of First Quantity\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f pound is equal to %f kgs\n", first, second);
            break;

        case '5':
            printf("Enter the Magnitude of First Quantity\n");
            scanf("%f", &first);
            second = first * inchesToMetre;
            printf("%f inches is equal to %f metres\n", first, second);
            break;

        default:
            break;
        }

    end:
        return 0;
    }
}