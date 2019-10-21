/* --- Generated the 21/10/2019 at 10:36 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks lamp3.ept --- */

#ifndef LAMP3_H
#define LAMP3_H

#include "lamp3_types.h"
#include "towtasks_controller.h"
typedef struct Lamp3__lamp_mem {
  int ck_1_2;
  int pnr;
} Lamp3__lamp_mem;

typedef struct Lamp3__lamp_out {
  int s;
} Lamp3__lamp_out;

void Lamp3__lamp_reset(Lamp3__lamp_mem* self);

void Lamp3__lamp_step(int c, int b, Lamp3__lamp_out* _out,
                      Lamp3__lamp_mem* self);

typedef struct Lamp3__towtasks_mem {
  int ck_5_1;
  int ck_3_1;
  int ck_1;
  int pnr_2;
  int pnr_1;
  int pnr;
} Lamp3__towtasks_mem;

typedef struct Lamp3__towtasks_out {
  int s1;
  int s2;
  int s3;
} Lamp3__towtasks_out;

void Lamp3__towtasks_reset(Lamp3__towtasks_mem* self);

void Lamp3__towtasks_step(int b1, int b2, int b3, Lamp3__towtasks_out* _out,
                          Lamp3__towtasks_mem* self);

#endif // LAMP3_H
