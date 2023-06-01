#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_TEMP 10
#define MAX_TEMP 40

int generateTemperature() {
    return (rand() % (MAX_TEMP - MIN_TEMP + 1)) + MIN_TEMP;
}

int main() {
    int desiredTemp = 0;
    int currentTemp = 0;
    srand(time(0));

    printf("W1209 Temperature Sensor Simulation\n");

    while (1) {
        currentTemp = generateTemperature();

        printf("Current Temperature: %d°C\n", currentTemp);
        printf("Desired Temperature: %d°C\n", desiredTemp);

        if (currentTemp < desiredTemp) {
            printf("Heating ON\n");
        } else if (currentTemp > desiredTemp) {
            printf("Cooling ON\n");
        } else {
            printf("Heating and Cooling OFF\n");
        }

        printf("Enter the desired temperature (or enter 0 to quit): ");
        scanf("%d", &desiredTemp);

        if (desiredTemp == 0) {
            printf("Program terminated.\n");
            break;
        }

        printf("\n");
    }

    return 0;
}
