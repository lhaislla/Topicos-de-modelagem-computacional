/* --- Generated the 2/10/2019 at 10:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lamp1.h"

void Lamp1__lamp_reset(Lamp1__lamp_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void Lamp1__lamp_step(int c=0, int b=0, Lamp1__lamp_out* _out,
                      Lamp1__lamp_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int s_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int s_St_Off;
  int ck_1_1;
  int v_1;
  int v;
  int r_St_On;
  int s_2_St_On_1;
  int r_St_Off;
  int s_2_St_Off_1;
  int s_2_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v_1 = (c||b);
    if (v_1) {
      r_St_Off = true;
      s_2_St_Off_1 = false;
    } else {
      r_St_Off = self->pnr;
      s_2_St_Off_1 = true;
    };
    r = r_St_Off;
    s_2_1 = s_2_St_Off_1;
  } else {
    v = (c||b);
    if (v) {
      r_St_On = true;
    } else {
      r_St_On = self->pnr;
    };
    r = r_St_On;
    if (v) {
      s_2_St_On_1 = true;
    } else {
      s_2_St_On_1 = false;
    };
    s_2_1 = s_2_St_On_1;
  };
  ck_1_1 = s_2_1;
  if (ck_1_1) {
    s_St_Off = 0;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->s = s_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    s_St_On = 1;
    _out->s = s_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Lamp1__task_reset(Lamp1__task_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Lamp1__task_step(int c1, int b1, Lamp1__task_out* _out,
                      Lamp1__task_mem* self) {
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int s_1_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int s_1_St_1_Off;
  int ck_2_1;
  int v_2;
  int v;
  int r_St_1_On;
  int s_3_St_1_On_1;
  int r_St_1_Off;
  int s_3_St_1_Off_1;
  int s_3_1;
  int ns_1;
  int r;
  int nr;
  int c;
  int b;
  int s_1;
  c = c1;
  b = b1;
  if (self->ck_1) {
    v_2 = (c||b);
    if (v_2) {
      r_St_1_Off = true;
      s_3_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_3_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_3_1 = s_3_St_1_Off_1;
  } else {
    v = (c||b);
    if (v) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v) {
      s_3_St_1_On_1 = true;
    } else {
      s_3_St_1_On_1 = false;
    };
    s_3_1 = s_3_St_1_On_1;
  };
  ck_2_1 = s_3_1;
  if (ck_2_1) {
    s_1_St_1_Off = 0;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    s_1 = s_1_St_1_Off;
    nr = nr_St_1_Off;
    ns_1 = ns_St_1_Off_1;
  } else {
    s_1_St_1_On = 1;
    s_1 = s_1_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1 = ns_St_1_On_1;
  };
  _out->s = s_1;
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

