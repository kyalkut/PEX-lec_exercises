#include <stdio.h>

void printQuestion(int questionNumber) {
    switch (questionNumber) {
        case 1:
            printf("What is the capital of France?\n");
            printf("A) London\n");
            printf("B) Paris\n");
            printf("C) Berlin\n");
            printf("D) Rome\n");
            break;
        case 2:
            printf("What is the largest ocean in the world?\n");
            printf("A) Atlantic Ocean\n");
            printf("B) Indian Ocean\n");
            printf("C) Pacific Ocean\n");
            printf("D) Arctic Ocean\n");
            break;
        case 3:
            printf("What is the chemical symbol for water?\n");
            printf("A) Wo\n");
            printf("B) Wt\n");
            printf("C) Wa\n");
            printf("D) H2O\n");
            break;
        default:
            printf("Invalid question number.\n");
    }
}

int main() {
    int correctAnswers = 0;
    char answer;

    for (int i = 1; i <= 3; i++) {
        printQuestion(i);

        printf("Enter your answer for question %d (A, B, C, or D): ", i);
        scanf(" %c", &answer);

        switch (i) {
            case 1:
                if (answer == 'B' || answer == 'b') {
                    printf("Correct answer! Paris is the capital of France.\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect answer. The correct answer is B) Paris.\n");
                }
                break;
            case 2:
                if (answer == 'C' || answer == 'c') {
                    printf("Correct answer! The Pacific Ocean is the largest ocean in the world.\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect answer. The correct answer is C) Pacific Ocean.\n");
                }
                break;
            case 3:
                if (answer == 'D' || answer == 'd') {
                    printf("Correct answer! H2O is the chemical symbol for water.\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect answer. The correct answer is D) H2O.\n");
                }
                break;
            default:
                printf("Invalid question number.\n");
        }

        printf("\n");
    }

    printf("You got %d out of 3 questions correct.\n", correctAnswers);

    return 0;
}
