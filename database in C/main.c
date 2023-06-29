#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <signal.h>

#define MAX_COMMAND_LENGTH 1024
#define MAX_NUM_ARGS 1024
#define WHITESPACE " \t\n"      // We want to split our command line up into tokens



typedef struct 
{
    char * buffer;
    size_t buffer_length;
    size_t input_length;
}InputBuffer;

InputBuffer* new_input()
{
    InputBuffer* input_buffer = (InputBuffer*)malloc(sizeof(InputBuffer));
    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length = 0;

    return input_buffer;   
}

void printPrompt();
int main()
{
    printPrompt();
    //read and parse command
}

void printPrompt()
{
    printf("Welcome to custom sql shell in C\n");
    printf("Type 'help;' to get help\n");
    printf("Type 'exit; or quit;' to exit\n");
    printf("Type 'clear;' to clear screen\n");
}