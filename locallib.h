#ifndef LOCAL_LIB_H
    #define LOCAL_LIB_H 1
#endif

#define C_NORMAL    "\x1B[0m"
#define C_RED       "\x1B[31m"
#define C_GREEN     "\x1B[32m"
#define C_YELLOW    "\x1B[33m"
#define C_BLUE      "\x1B[34m"
#define C_MANGENTA  "\x1B[35m"
#define C_CYAN      "\x1B[36m"
#define C_WHITE     "\x1B[37m"


/* Add two numbers */
void num_add();

/* Subtract two numbers */
void num_sub();

/* Multiply two numbers */
void num_mult();

/* Divide two numbers */
void num_div();

// Functions.c

/* Terminal to choose operations */
void menu_terminal();

/* Get numbers from stdin and prevents unintended behavior */
int *get_numbers_safe();