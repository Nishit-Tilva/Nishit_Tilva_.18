#include <stdio.h>
main() {
    int team;

    printf("Choose your favorite IPL team:\n");
    printf("1. Mumbai Indians\n");
    printf("2. Chennai Super Kings\n");
    printf("3. Royal Challengers Bangalore\n");
    printf("4. Kolkata Knight Riders\n");
    printf("5. Gujarat Titans\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &team);

    if (team == 1) {
        printf("Go Mumbai Indians!\n");
    }
    else if (team == 2) {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (team == 3) {
        printf("Play Bold, RCB!\n");
    }
    else if (team == 4) {
        printf("Korbo Lorbo Jeetbo!\n");
    }
    else if (team == 5) {
        printf("Go Gujarat Titans!\n");
    }
    else {
        printf("Team not found!\n");
    }

    return 0;
}
