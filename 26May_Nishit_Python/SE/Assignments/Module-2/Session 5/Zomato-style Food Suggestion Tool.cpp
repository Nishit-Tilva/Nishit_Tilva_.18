#include <stdio.h>
main() {
    int choice;

    printf("Choose Meal Time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Suggestion: Idli & Sambar\n");
            break;
        case 2:
            printf("Suggestion: Veg Thali\n");
            break;
        case 3:
            printf("Suggestion: Paneer Butter Masala with Naan\n");
            break;
        case 4:
            printf("Suggestion: Samosa with Tea\n");
            break;
        default:
            printf("Try some fruits!\n");
    }

    return 0;
}
