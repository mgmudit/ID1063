//Code by Mudit
//Date: 14/10/2026

#include <stdio.h>

struct City
{
    char cityName[50];
    char countryName[50];
    long long population;
    double latitude;
    double longitude;
};

int main()
{
    struct City c;

    // Accept city details
    printf("Enter city name: ");
    scanf(" %49[^\n]", c.cityName);

    printf("Enter country name: ");
    scanf(" %49[^\n]", c.countryName);

    printf("Enter population: ");
    scanf("%lld", &c.population);

    printf("Enter latitude: ");
    scanf("%lf", &c.latitude);

    printf("Enter longitude: ");
    scanf("%lf", &c.longitude);

    // Display city details
    printf("\nCity Details\n");
    printf("City: %s\n", c.cityName);
    printf("Country: %s\n", c.countryName);
    printf("Population: %lld\n", c.population);
    printf("Latitude: %.6f\n", c.latitude);
    printf("Longitude: %.6f\n", c.longitude);

    return 0;
}

