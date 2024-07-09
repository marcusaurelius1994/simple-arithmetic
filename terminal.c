#include <stdlib.h>
#include <stdio.h>
#include "locallib.h"

typedef enum {
    quit,
    add,
    subtract,
    multiply,
    divide,
    help
} action;

void print_menu();

void menu_terminal() {
       
    int *result;
    int choice;

    while(1) { 

        print_menu();
        printf("Select option > ");

        if(scanf("%d", &choice) != 1) {
            if(feof(stdin)) {
                printf("%sEOF Detected. Exiting...%s\n", C_YELLOW, C_NORMAL);
                exit(EXIT_SUCCESS);
            } else {
                while(getchar() != '\n');
                printf("Invalid input!\n");
            }
        }

        switch(choice) {
            case add:
                num_add();
                break;
            case subtract:
                num_sub();
                break;
            case multiply:
                num_sub();
                break;
            case divide:
                num_div();
                break;
            case quit:
                printf("Exit selected.\n");
                exit(EXIT_SUCCESS);
                break;
            case help:
                printf("%sHELP: Input format is \"%s%%d %%d%s\"\n", C_BLUE, C_MANGENTA, C_NORMAL);
                break;
            default:
                break;
        }
    }
    
}

/* Prints the menu */
void print_menu() {
    printf("%s=== MAIN MENU ===\n%s", C_CYAN, C_NORMAL);
    printf("1. Add\t");
    printf("2. Subtract\t");
    printf("3. Multiply\t");
    printf("4. Divide\t");
    printf("5. Help\n");
    printf("%s0. Exit program\n%s", C_RED, C_NORMAL);
}

