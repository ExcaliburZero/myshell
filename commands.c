#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#include "commands.h"

bool processInput(char** input) {
    if (strcmp(input[0], "exit") == 0 || strcmp(input[0], "quit") == 0) {
        return false;
    } else {
        pid_t childPid;

        childPid = fork();
        if (childPid == 0) {
            char* command = malloc(sizeof(char) * 100);
            strcpy(command, input[0]);
            execvp(command, input);

            printf("Unknown command: %s\n", command);
            exit(0);
        } else {
            int status;
            waitpid(childPid, &status, 0);
        }

        return true;
    }
}

char** read_command() {
    int args = 10;
    int argSize = 100;
    char** strings = malloc(sizeof(char*) * args);
    char* curString = malloc(sizeof(char) * argSize);
    int curArg = 0;
    int curChar = 0;

    char x;
    while((x = getchar()) != '\n') {   
        if (x == ' ') {
            curString[curChar] = '\0';

            strings[curArg] = curString;
            curString = malloc(sizeof(char) * argSize);
            curChar = 0;
            curArg++;
        } else {
            curString[curChar] = x;
            curChar++;
        }
    }
    curString[curChar] = '\0';
    strings[curArg] = curString;
    strings[curArg + 1] = '\0';

    return strings;
}

void free_command(char** command) {
    for (int i = 0; i < 10; i++) {
        if (command[i] == '\0') {
            break;
        } else {
            free(command[i]);
        }
    }
    free(command);
}
