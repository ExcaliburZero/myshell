#ifndef _commands_h
#define _commands_h

#include <stdbool.h>

/**
 * Processes the given command array and performs the associated action.
 *
 * @param command The command separated into arguments.
 * @return True if the interpreter should continue, or False if it should quit.
 */
bool process_command(char**);

/**
 * Reads in a command from stdin.
 *
 * @returns The entered command separated into arguments.
 */
char** read_command();

/**
 * Frees the given command array.
 *
 * @param command The command array to be freed.
 */
void free_command(char**);

#endif
