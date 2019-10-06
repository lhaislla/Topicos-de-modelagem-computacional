/* --- Generated the 2/10/2019 at 10:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp1.ept --- */

#ifndef LAMP1_TYPES_H
#define LAMP1_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Lamp1__St_1_On,
  Lamp1__St_1_Off
} Lamp1__st_1;

Lamp1__st_1 Lamp1__st_1_of_string(char* s);

char* string_of_Lamp1__st_1(Lamp1__st_1 x, char* buf);

typedef enum {
  Lamp1__St_On,
  Lamp1__St_Off
} Lamp1__st;

Lamp1__st Lamp1__st_of_string(char* s);

char* string_of_Lamp1__st(Lamp1__st x, char* buf);

#endif // LAMP1_TYPES_H
