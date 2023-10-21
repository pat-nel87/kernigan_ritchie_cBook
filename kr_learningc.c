#include <stdio.h>

void toCelsius()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void toCelsiusForLoop()
{
    float fahr, celsius;

    // header for table
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 0.0; fahr <= 300.0; fahr = fahr + 20.0)
        printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}

void celsiusFirst()
{
    float fahr, celsius;

    // header for table
    printf("Celsius\t\tFahrenheit\n");
    for (celsius = 0.0; celsius <= 300.0; celsius = celsius + 20.0)
        printf("%3.0f\t\t%6.1f\n", celsius, (9.0 / 5.0) * celsius + 32.0);
}

void reverseCelsius()
{
    float fahr, celsius;
    // header for table
    printf("Celsius\t\tFahrenheit\n");
    for (celsius = 300.0; celsius >= 0.0; celsius = celsius - 20.0)
        printf("%3.0f\t\t%6.1f\n", celsius, (9.0 / 5.0) * celsius + 32.0);
}

void reverseWideStepCelisus()
{
    float fahr, celsius;
    // header for table
    printf("Celsius\t\tFahrenheit\n");
    for (celsius = 300.0; celsius >= 0.0; celsius = celsius - 50.0)
        printf("%3.0f\t\t%6.1f\n", celsius, (9.0 / 5.0) * celsius + 32.0);
}

int main()
{
    toCelsiusForLoop();
    celsiusFirst();
    reverseCelsius();
    reverseWideStepCelisus();
    return 0;
}