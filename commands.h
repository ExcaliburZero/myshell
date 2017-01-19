#ifndef _commands_h
#define _commands_h

#include <stdbool.h>

bool processInput(char**);
char** read_command();
void free_command(char**);

#endif
