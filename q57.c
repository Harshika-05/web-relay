#include <stdio.h>

int main() {
    int matchsticks = 21;
    int userPick, computerPick;

    printf("Welcome to the Matchstick Game!\n");

    while (matchsticks > 0) {
        // User's turn
        printf("\nRemaining matchsticks: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4 || userPick > matchsticks) {
            printf("Invalid input. Please pick a valid number.\n");
            continue;
        }

        matchsticks -= userPick;

        if (matchsticks == 0) {
            printf("\nYou picked the last matchstick. You lose! Computer wins.\n");
            break;
        }

        // Computer's turn
        computerPick = 5 - userPick;  // Make sure the sum of userPick and computerPick is always 5
        printf("\nComputer picks %d matchsticks.\n", computerPick);
        matchsticks -= computerPick;

        if (matchsticks == 0) {
            printf("\nComputer picked the last matchstick. You win!\n");
            break;
        }
    }

    return 0;
}
