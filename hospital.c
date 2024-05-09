#include <stdio.h>

int main()
{
    int age, history, symptoms;

    printf("Enter patient's age: ");
    scanf("%d", &age);
    printf("Enter patient's medical history (0 for no history, 1 for history): ");
    scanf("%d", &history);
    printf("Enter patient's symptoms (0 for no symptoms, 1 for symptoms): ");
    scanf("%d", &symptoms);

    if (age < 30 && history == 0 && symptoms == 0)
    {
        printf("No treatment required.\n");
    }
    else if (age >= 30 && history == 0 && symptoms == 0)
    {
        printf("Prescribe medication and healthy diet.\n");
    }
    else if (age >= 30 && history == 1 && symptoms == 0)
    {
        printf("Prescribe vitamins and healthy diet.\n");
    }
    else if (age >= 30 && history == 0 && symptoms == 1)
    {
        printf("Refer to specialist.\n");
    }
    else if (age >= 30 && history == 1 && symptoms == 1)
    {
        printf("Refer to specialist and prescribe medication.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
    return 0;
}