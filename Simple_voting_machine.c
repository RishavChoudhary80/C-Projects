#include <stdio.h>

int main() {
    int n, i, choice, max_votes = 0, winner;

    printf("Enter the number of candidates: ");
    scanf("%d", &n);

    char names[n][50];
    int votes[n];

    for(i = 0; i < n; i++) {
        votes[i] = 0;
    }
    printf("==============================================================================\n");
    for(i = 0; i < n; i++) {
        printf("Enter name of candidate %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\n==============================================================================");

    printf("\n*** Voting System ***\n");
    do {
        printf("\nChoose a candidate by number (1 to %d) or 0 to finish voting: \n", n);
        for(i = 0; i < n; i++) {
            printf("%d. %s\n", i + 1, names[i]);
        }
        scanf("%d", &choice);
        
        if(choice == 0) {
            break;
        }

        if(choice > 0 && choice <= n) {
            votes[choice - 1]++;
        } else {
            printf("Invalid! Please enter a valid choice.\n");
        }
        
    } while(1); 

    for(i = 0; i < n; i++) {
        if(votes[i] > max_votes) {
            max_votes = votes[i];
            winner = i;
        }
    }

    printf("\n*** Voting Results ***\n");
    printf("==============================================================================\n");
    for(i = 0; i < n; i++) {
        printf("%s: %d votes\n", names[i], votes[i]);
    }
    printf("==============================================================================\n");
    printf("\nThe winner is: %s with %d votes!\n", names[winner], max_votes);
    
    return 0;
}

