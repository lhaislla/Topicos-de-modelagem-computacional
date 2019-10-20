/* --- Generated the 20/10/2019 at 15:17 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks lamp3.ept --- */

#ifndef LAMP3_TYPES_H
#define LAMP3_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "twotasks_controller.h"
typedef enum {
  Lamp3__St_3_On,
  Lamp3__St_3_Off
} Lamp3__st_3;

Lamp3__st_3 Lamp3__st_3_of_string(char* s);

char* string_of_Lamp3__st_3(Lamp3__st_3 x, char* buf);

typedef enum {
  Lamp3__St_2_On,
  Lamp3__St_2_Off
} Lamp3__st_2;

Lamp3__st_2 Lamp3__st_2_of_string(char* s);

char* string_of_Lamp3__st_2(Lamp3__st_2 x, char* buf);

typedef enum {
  Lamp3__St_1_On,
  Lamp3__St_1_Off
} Lamp3__st_1;

Lamp3__st_1 Lamp3__st_1_of_string(char* s);

char* string_of_Lamp3__st_1(Lamp3__st_1 x, char* buf);

typedef enum {
  Lamp3__St_On,
  Lamp3__St_Off
} Lamp3__st;

Lamp3__st Lamp3__st_of_string(char* s);

char* string_of_Lamp3__st(Lamp3__st x, char* buf);

#endif // LAMP3_TYPES_H
