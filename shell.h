#ifndef SHELL_H
#define SHELL_H
#include "symtab/symtab.h"
#include "source.h"

void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

int  parse_and_execute(struct source_s *src);

void initsh(void);

/* shell builtin utilities */
int dump(int argc, char **argv);

/**
 * builtin_s - built in utilities
 * @name: utility name
 * @func: function to call to execute the utility
 *
 * Description: struct for builtin utilities
 */
struct builtin_s
{
	char *name;
	int (*func)(int argc, char **argv);
};

/* the list of builtin utilities */
extern struct builtin_s builtins[];

/* and their count */
extern int builtins_count;
#endif
