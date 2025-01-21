#include <stdio.h>

// Length conversions
void kilometersToMiles() {
    float km, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    if (km < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return;
    }
    miles = km * 0.621371;
    printf("%.2f kilometers is equal to %.2f miles.\n", km, miles);
}

void milesToKilometers() {
    float miles, km;
    printf("Enter distance in miles: ");
    scanf("%f", &miles);
    if (miles < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return;
    }
    km = miles / 0.621371;
    printf("%.2f miles is equal to %.2f kilometers.\n", miles, km);
}

void metersToFeet() {
    float meters, feet;
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    if (meters < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return;
    }
    feet = meters * 3.28084;
    printf("%.2f meters is equal to %.2f feet.\n", meters, feet);
}

void feetToMeters() {
    float feet, meters;
    printf("Enter distance in feet: ");
    scanf("%f", &feet);
    if (feet < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return;
    }
    meters = feet / 3.28084;
    printf("%.2f feet is equal to %.2f meters.\n", feet, meters);
}

// Weight conversions
void kilogramsToPounds() {
    float kg, pounds;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    if (kg < 0) {
        printf("Invalid input. Weight cannot be negative.\n");
        return;
    }
    pounds = kg * 2.20462;
    printf("%.2f kilograms is equal to %.2f pounds.\n", kg, pounds);
}

void poundsToKilograms() {
    float pounds, kg;
    printf("Enter weight in pounds: ");
    scanf("%f", &pounds);
    if (pounds < 0) {
        printf("Invalid input. Weight cannot be negative.\n");
        return;
    }
    kg = pounds / 2.20462;
    printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, kg);
}

void kilogramsToGrams() {
    float kg, grams;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    if (kg < 0) {
        printf("Invalid input. Weight cannot be negative.\n");
        return;
    }
    grams = kg * 1000;
    printf("%.2f kilograms is equal to %.2f grams.\n", kg, grams);
}

void gramsToKilograms() {
    float grams, kg;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    if (grams < 0) {
        printf("Invalid input. Weight cannot be negative.\n");
        return;
    }
    kg = grams / 1000;
    printf("%.2f grams is equal to %.2f kilograms.\n", grams, kg);
}

// Temperature conversions
void celsiusToFahrenheit() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
}

void fahrenheitToCelsius() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
}

void celsiusToKelvin() {
    float celsius, kelvin;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.2f Celsius is equal to %.2f Kelvin.\n", celsius, kelvin);
}

void kelvinToCelsius() {
    float kelvin, celsius;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &kelvin);
    if (kelvin < 0) {
        printf("Invalid input. Temperature in Kelvin cannot be negative.\n");
        return;
    }
    celsius = kelvin - 273.15;
    printf("%.2f Kelvin is equal to %.2f Celsius.\n", kelvin, celsius);
}

int main() {
    int category, choice;

    while (1) {
        printf("\nUnit Converter\n");
        printf("Select the category of conversion:\n");
        printf("1. Weight\n");
        printf("2. Temperature\n");
        printf("3. Length\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &category);

        if (category == 4) {
            printf("Exiting the program. Goodbye!\n");
            return 0;
        }

        switch (category) {
            case 1: // Weight conversions
                printf("\nWeight Conversion Options:\n");
                printf("1. Kilograms to Pounds\n");
                printf("2. Pounds to Kilograms\n");
                printf("3. Kilograms to Grams\n");
                printf("4. Grams to Kilograms\n");
                printf("5. Exit to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        kilogramsToPounds();
                        break;
                    case 2:
                        poundsToKilograms();
                        break;
                    case 3:
                        kilogramsToGrams();
                        break;
                    case 4:
                        gramsToKilograms();
                        break;
                    case 5:
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
                break;

            case 2: // Temperature conversions
                printf("\nTemperature Conversion Options:\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("3. Celsius to Kelvin\n");
                printf("4. Kelvin to Celsius\n");
                printf("5. Exit to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        celsiusToFahrenheit();
                        break;
                    case 2:
                        fahrenheitToCelsius();
                        break;
                    case 3:
                        celsiusToKelvin();
                        break;
                    case 4:
                        kelvinToCelsius();
                        break;
                    case 5:
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
                break;

            case 3: // Length conversions
                printf("\nLength Conversion Options:\n");
                printf("1. Kilometers to Miles\n");
                printf("2. Miles to Kilometers\n");
                printf("3. Meters to Feet\n");
                printf("4. Feet to Meters\n");
                printf("5. Exit to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        kilometersToMiles();
                        break;
                    case 2:
                        milesToKilometers();
                        break;
                    case 3:
                        metersToFeet();
                        break;
                    case 4:
                        feetToMeters();
                        break;
                    case 5:
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
                break;

            default:
                printf("Invalid category. Please try again.\n");
        }
    }

    return 0;
}
