#include <stdio.h>

int main() {
    int temperature[5][7] = {
        {30, 29, 31, 32, 29, 28, 33},
        {35, 30, 23, 27, 21, 30, 37},
        {28, 31, 25, 26, 24, 29, 32},
        {33, 27, 26, 28, 29, 24, 29},
        {26, 26, 28, 26, 20, 27, 31}
    };

    float cityAvg[5];
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += temperature[i][j];
        }
        cityAvg[i] = (float) sum / 7;
    }

    printf("Average temperature of each city:\n");
    for (int i = 0; i < 5; i++) {
        printf("City %d: %.2f\n", i+1, cityAvg[i]);
    }
    printf("\n");

    float dayAvg[7];
    for (int j = 0; j < 7; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += temperature[i][j];
        }
        dayAvg[j] = (float) sum / 5;
    }

    printf("Average temperature of each day:\n");
    for (int j = 0; j < 7; j++) {
        printf("Day %d: %.2f\n", j+1, dayAvg[j]);
    }
    printf("\n");

    float maxCityAvg = cityAvg[0];
    int maxCityIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (cityAvg[i] > maxCityAvg) {
            maxCityAvg = cityAvg[i];
            maxCityIndex = i;
        }
    }
    printf("Maximum average temperature among all cities: %.2f (City %d)\n", maxCityAvg, maxCityIndex+1);

    float minCityAvg = cityAvg[0];
    int minCityIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (cityAvg[i] < minCityAvg) {
            minCityAvg = cityAvg[i];
            minCityIndex = i;
        }
    }
    printf("Minimum average temperature among all cities: %.2f (City %d)\n", minCityAvg, minCityIndex+1);

    float maxDayAvg = dayAvg[0];
    int maxDayIndex = 0;
    for (int j = 1; j < 7; j++) {
        if (dayAvg[j] > maxDayAvg) {
            maxDayAvg = dayAvg[j];
            maxDayIndex = j;
        }
    }
    printf("Maximum average temperature among all days: %.2f (Day %d)\n", maxDayAvg, maxDayIndex+1);

    float minDayAvg = dayAvg[0];
    int minDayIndex = 0;
    for (int j = 1; j < 7; j++) {
        if (dayAvg[j] < minDayAvg) {
            minDayAvg = dayAvg[j];
            minDayIndex = j;
        }
    }
    printf("Minimum average temperature among all days: %.2f (Day %d)\n", minDayAvg, minDayIndex+1);
    int highestTemp = temperature[0][0];
    int highestCityIndex = 0;
    int highestDayIndex = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperature[i][j] > highestTemp) {
                highestTemp = temperature[i][j];
                highestCityIndex = i;
                highestDayIndex = j;
            }
        }
    }
    printf("Highest temperature among all cities on all days: %d (City %d, Day %d)\n", highestTemp, highestCityIndex+1, highestDayIndex+1);
    int lowestTemp = temperature[0][0];
    int lowestCityIndex = 0;
    int lowestDayIndex = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperature[i][j] < lowestTemp) {
                lowestTemp = temperature[i][j];
                lowestCityIndex = i;
                lowestDayIndex = j;
            }
        }
    }
    printf("Lowest temperature among all cities on all days: %d (City %d, Day %d)\n", lowestTemp, lowestCityIndex+1, lowestDayIndex+1);
    return 0;
}
