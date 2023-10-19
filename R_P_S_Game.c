#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initializeRandom() {
    srand(time(NULL));
}

int generateRandomNumber(int n)
{
	return rand() % n;
}


int greater(char c1, char c2) {
    if (c1 == c2) return -1;
    if ((c1 == 'r' && c2 == 's') || 
        (c1 == 'p' && c2 == 'r') || 
        (c1 == 's' && c2 == 'p')) {
        return 1;
    }
    return 0;
}

int main(){
	int playerScore = 0 ,  compScore=0, temp;
	char playerChar, compChar;
	char dict[]={'r','p','s'};
	
	initializeRandom();
	
	
    printf("=============================================\n");
    printf("   Welcome to the Rock, Paper, and Scissors  \n");
    printf("=============================================\n\n");
    
	for(int i = 0; i < 3; i++) {
		//take player 1's input
		printf("Your's turn\n");
		printf("Choose 1 for Rock, 2 for Paper,and 3 for Scissors: \n");
		scanf("%d", &temp);
		playerChar = dict[temp - 1];
		printf("\nYou chose %c \n\n", playerChar);
		
		//generate computer's input
		printf("Computer's turn'\n");
		temp = generateRandomNumber(3);
		compChar = dict[temp];
		printf("CPU chose %c \n", compChar);
		
		int result = greater(compChar, playerChar);
        if (result == 1) {
            compScore++;
            printf("CPU got it!\n\n");
        }
        else if(result == -1) {
            printf("It's a draw\n\n");
        }
        else {
            playerScore++;
            printf("You got it!\n\n");
        }

        printf("--------------------\n");
        printf("| You: %d | CPU: %d |\n", playerScore, compScore);
        printf("--------------------\n\n");
	}

    printf("=============================================\n");
    if (playerScore > compScore) {
        printf("   Congratulations! You win the game!       \n");
    } else if (playerScore < compScore) {
        printf("   Oh no! CPU wins the game. Try again!     \n");
    } else {
        printf("   It's a draw! Well played!                \n");
    }
    printf("=============================================\n");

    return 0;
}
