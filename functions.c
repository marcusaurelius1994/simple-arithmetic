#include <stdio.h>
#include "locallib.h"

int *get_numbers_safe();

void num_add() {
    printf("Add.\n");

    int *numbers =  get_numbers_safe();
    int result = numbers[0] + numbers[1];

    printf("%s%d + %d = %d%s\n", C_GREEN, numbers[0], numbers[1], result, C_NORMAL);
}

void num_sub() {
    printf("Subtract.\n");

    int *numbers =  get_numbers_safe();
    int result = numbers[0] - numbers[1];

    printf("%s%d - %d = %d%s\n", C_GREEN, numbers[0], numbers[1], result, C_NORMAL);
}

void num_mult() {
    printf("Multiply.\n");
    
    int *numbers =  get_numbers_safe();
    int result = numbers[0] * numbers[1];

    printf("%s%d * %d = %d%s\n", C_GREEN, numbers[0], numbers[1], result, C_NORMAL);
}
void num_div() {
    printf("Divide.\n");

    int *numbers =  get_numbers_safe();

    if(numbers[1] == 0) {
        while(numbers[1] < 1) {
            printf("%sCannot divide by zero!%s\n", C_RED, C_NORMAL);
            numbers = get_numbers_safe();
        }
        
    }

    float result = (float) numbers[0] / numbers[1];

    printf("%s%d / %d = %.2f%s\n", C_GREEN, numbers[0], numbers[1], result, C_NORMAL);
}


int *get_numbers_safe() {
    static int numbers[2];

    printf("Enter the numbers > ");
    int input = scanf("%d %d", &numbers[0], &numbers[1]);

    if(input == EOF) {
        printf("%sEOF detected. Exiting...%s", C_YELLOW, C_NORMAL);
        return NULL;
    } else {
        while(getchar() != '\n');
    }

    return numbers;
}