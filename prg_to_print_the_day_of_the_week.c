#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("sunday");
            break;
        case 2: 
            printf("monday");
            break;
        case 3: 
            printf("tuesday");
            break;
        case 4: 
            printf("wednesday");
            break;
        case 5: 
            printf("thursday");
            break;
        case 6: 
            printf("friday");
            break;
        case 7: 
            printf("Saturday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}