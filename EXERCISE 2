#include <stdio.h>

int main(void)
{
    float start, end, increment, fahrenheit, celsius;

    printf("Enter the starting Fahrenheit value: ");
    scanf("%f", &start);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("--------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment)
    {
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%6.2f\t\t%6.2f\n", fahrenheit, celsius);
    }

    return 0;
}
