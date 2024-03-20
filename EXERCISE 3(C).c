include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    float start, end, increment, pounds, kilograms, miles, kilometers;

    printf("Pounds to Kilograms Conversion Table\n");
    printf("-------------------------------------\n");
    printf("Pounds\t\tKilograms\n");

    for (pounds = 0; pounds <= 100; pounds += 10)
    {
        kilograms = pounds * 2.20462262;
        printf("%6.2f\t\t%6.2f\n", pounds, kilograms);
    }

    printf("\nMiles to Kilometers Conversion Table\n");
    printf("------------------------------------\n");
    printf("Miles\t\tKilometers\n");

    for (miles = 0; miles <= 100; miles += 10)
    {
        kilometers = miles * 1.60934;
        printf("%6.2f\t\t%6.2f\n", miles, kilometers);
    }

    return 0;
}
