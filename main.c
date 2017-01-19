#include <stdbool.h>
#include <stdio.h>

#include "commands.h"

int main(int argc, char** argv) {
    bool keepGoing = true;

    while(keepGoing) {
        printf("> ");
        
        char** input = read_command();

        keepGoing = process_command(input);

        free_command(input);
    }
}

