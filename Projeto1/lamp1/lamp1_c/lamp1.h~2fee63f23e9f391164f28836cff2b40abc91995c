/* --- Generated the 16/10/2019 at 11:4 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp1.ept --- */

#ifndef LAMP1_H
#define LAMP1_H

#include "lamp1_types.h"
typedef struct Lamp1__lamp_mem {
  int ck_1_2;
  int pnr;
} Lamp1__lamp_mem;

typedef struct Lamp1__lamp_out {
  int s;
} Lamp1__lamp_out;

void Lamp1__lamp_reset(Lamp1__lamp_mem* self);

void Lamp1__lamp_step(int c, int b, Lamp1__lamp_out* _out,
                      Lamp1__lamp_mem* self);

typedef struct Lamp1__task_mem {
  int ck_1;
  int pnr;
} Lamp1__task_mem;

typedef struct Lamp1__task_out {
  int s;
} Lamp1__task_out;

void Lamp1__task_reset(Lamp1__task_mem* self);

void Lamp1__task_step(int c1, int b1, Lamp1__task_out* _out,
                      Lamp1__task_mem* self);

#endif // LAMP1_H
