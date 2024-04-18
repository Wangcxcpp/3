#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}
void generateQuestion() {
    int num1 = generateRandomNumber(1, 10);
    int num2 = generateRandomNumber(1, 10);
    int operatorIndex = generateRandomNumber(0, 3);
    int result;
    char operatorChar;
    switch (operatorIndex) {
    case 0:
        operatorChar = '+';
        result = num1 + num2;
        break;
    case 1:
        operatorChar = '-';
        result = num1 - num2;
        break;
    case 2:
        operatorChar = '*';
        result = num1 * num2;
        break;
    case 3:
        operatorChar = '/';
        result = num1 / num2;
        break;
    }
    printf("Question: %d %c %d = ?\n", num1, operatorChar, num2);
    int answer;
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == result) {
        printf("Correct answer!\n");
    }
    else {
        printf("Wrong answer! The correct answer is %d.\n", result);
    }
}
int main() {
    srand(time(0));
    printf("Welcome to the Elementary Arithmetic Program!\n");
    while (1) {
        printf("\n");
        generateQuestion();
        char continueChoice;
        printf("Do you want to continue? (Y/N) ");
        scanf(" %c", &continueChoice);
        if (continueChoice != 'Y' && continueChoice != 'y') {
            break;
        }
    }
    printf("Thank you for using the Elementary Arithmetic Program!\n");
    return 0;
}