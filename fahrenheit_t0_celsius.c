#include<stdio.h>

	
float fahrenheittocelsius(float fahrenheit)
 {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperature, result;
    int choice;

    printf("Temperature Conversion:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        result = fahrenheittocelsius(temperature);
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        result = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
    } else {
        printf("Invalid choice! Please choose 1 or 2.\n");
    }

    return 0;
}

