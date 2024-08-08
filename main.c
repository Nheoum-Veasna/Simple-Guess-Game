#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int k ,i;
    while (1) {
            printf("Enter the number:\n");
            scanf("%d",&i);
            //generated the number
            int userNumber;
            int score;
        for (k=1;k<=i;k++) {
                int computerRandom = rand() % 10;
                printf("Enter the number to guess[1-9]: ");
                scanf("%d",&userNumber);
            if (userNumber == computerRandom) {
                printf("Your Prediction is correct!\n");
                score = score+1;

            }else if(userNumber>computerRandom) {
                printf("\t\n Not Correct! Please guess the smaller number: \n");

            }else if(userNumber<computerRandom) {
                printf("\t\n NOT CORRECT Please guess the bigger number:\n");
            }
        }
            if (score==0) {
                printf("\n\tGame over! Your never guess it right !!\n");

            }else {
                printf("\t\nYour prediction was correct %d\n",score);
            }
                printf("\n");
        }


}
