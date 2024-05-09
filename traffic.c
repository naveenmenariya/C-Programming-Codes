#include <stdio.h>

int main()
{
    int traffic_condition;

    printf("Enter traffic condition (1-3): \n");
    scanf("%d", &traffic_condition);

    if (traffic_condition == 1)
    {
        printf("Route 1: Light traffic, estimated travel time: 30 minutes.\n");
    }
    else if (traffic_condition == 2)
    {
        printf("Route 2: Moderate traffic, estimated travel time: 45 minutes.\n");
    }
    else if (traffic_condition == 3)
    {
        printf("Route 3: Heavy traffic, estimated travel time: 60 minutes.\n");
    }
    else
    {
        printf("Invalid input. Please enter a value between 1 and 3.\n");
    }

    return 0;
}