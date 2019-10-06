/* --- Generated the 6/10/2019 at 19:18 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lamp3.h"

void Lamp3__lamp_reset(Lamp3__lamp_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void Lamp3__lamp_step(int c, int b, Lamp3__lamp_out* _out,
                      Lamp3__lamp_mem* self) {
  
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
  int s_3_St_On_1;
  int r_St_Off;
  int s_3_St_Off_1;
  int s_3_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v_1 = (c||b);
    if (v_1) {
      r_St_Off = true;
      s_3_St_Off_1 = false;
    } else {
      r_St_Off = self->pnr;
      s_3_St_Off_1 = true;
    };
    r = r_St_Off;
    s_3_1 = s_3_St_Off_1;
  } else {
    v = (c||b);
    if (v) {
      r_St_On = true;
    } else {
      r_St_On = self->pnr;
    };
    r = r_St_On;
    if (v) {
      s_3_St_On_1 = true;
    } else {
      s_3_St_On_1 = false;
    };
    s_3_1 = s_3_St_On_1;
  };
  ck_1_1 = s_3_1;
  if (ck_1_1) {
    s_St_Off = false;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->s = s_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    s_St_On = true;
    _out->s = s_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Lamp3__task_reset(Lamp3__task_mem* self) {
  self->pnr = false;
  self->ck_5_1 = true;
  self->pnr_1 = false;
  self->ck_3_1 = true;
  self->pnr_2 = false;
  self->ck_1 = true;
}

void Lamp3__task_step(int b1, int b2, int b3, Lamp3__task_out* _out,
                      Lamp3__task_mem* self) {
  Task_controller__task_controller_out Task_controller__task_controller_out_st;
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int s_2_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int s_2_St_1_Off;
  int ck_6_1;
  int v_9;
  int v_8;
  int r_St_1_On;
  int s_4_St_1_On_1;
  int r_St_1_Off;
  int s_4_St_1_Off_1;
  int nr_1_St_2_On;
  int ns_1_St_2_On_1;
  int s_1_St_2_On;
  int nr_1_St_2_Off;
  int ns_1_St_2_Off_1;
  int s_1_St_2_Off;
  int ck_4_1;
  int v_7;
  int v_6;
  int r_1_St_2_On;
  int s_5_St_2_On_1;
  int r_1_St_2_Off;
  int s_5_St_2_Off_1;
  int nr_2_St_3_On;
  int ns_2_St_3_On_1;
  int s_St_3_On;
  int nr_2_St_3_Off;
  int ns_2_St_3_Off_1;
  int s_St_3_Off;
  int ck_2_1;
  int v_5;
  int v_4;
  int r_2_St_3_On;
  int s_6_St_3_On_1;
  int r_2_St_3_Off;
  int s_6_St_3_Off_1;
  int s_6_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_5_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_4_1;
  int ns_1_2;
  int r;
  int nr;
  int c_2;
  int b_2;
  int s_2;
  int c_1;
  int b_1;
  int s_1;
  int c;
  int b;
  int s;
  int v;
  int v_2;
  int v_3;
  int c1;
  int c2;
  int c3;
  b_2 = b3;
  b_1 = b2;
  b = b1;
  Task_controller__task_controller_step(b1, b2, b3, self->ck_1, self->pnr_2,
                                        self->ck_3_1, self->pnr_1,
                                        self->ck_5_1, self->pnr, true, true,
                                        true,
                                        &Task_controller__task_controller_out_st);
  c1 = Task_controller__task_controller_out_st.task_c1;
  c2 = Task_controller__task_controller_out_st.task_c2;
  c3 = Task_controller__task_controller_out_st.task_c3;
  c_2 = c3;
  c_1 = c2;
  c = c1;
  if (self->ck_5_1) {
    v_9 = (c_2||b_2);
    if (v_9) {
      r_St_1_Off = true;
      s_4_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_4_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_4_1 = s_4_St_1_Off_1;
  } else {
    v_8 = (c_2||b_2);
    if (v_8) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v_8) {
      s_4_St_1_On_1 = true;
    } else {
      s_4_St_1_On_1 = false;
    };
    s_4_1 = s_4_St_1_On_1;
  };
  ck_6_1 = s_4_1;
  if (ck_6_1) {
    s_2_St_1_Off = false;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    s_2 = s_2_St_1_Off;
    nr = nr_St_1_Off;
    ns_1_2 = ns_St_1_Off_1;
  } else {
    s_2_St_1_On = true;
    s_2 = s_2_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1_2 = ns_St_1_On_1;
  };
  _out->s3 = s_2;
  if (self->ck_3_1) {
    v_7 = (c_1||b_1);
    if (v_7) {
      r_1_St_2_Off = true;
      s_5_St_2_Off_1 = false;
    } else {
      r_1_St_2_Off = self->pnr_1;
      s_5_St_2_Off_1 = true;
    };
    r_1 = r_1_St_2_Off;
    s_5_1 = s_5_St_2_Off_1;
  } else {
    v_6 = (c_1||b_1);
    if (v_6) {
      r_1_St_2_On = true;
    } else {
      r_1_St_2_On = self->pnr_1;
    };
    r_1 = r_1_St_2_On;
    if (v_6) {
      s_5_St_2_On_1 = true;
    } else {
      s_5_St_2_On_1 = false;
    };
    s_5_1 = s_5_St_2_On_1;
  };
  ck_4_1 = s_5_1;
  if (ck_4_1) {
    s_1_St_2_Off = false;
    nr_1_St_2_Off = false;
    ns_1_St_2_Off_1 = true;
    s_1 = s_1_St_2_Off;
    nr_1 = nr_1_St_2_Off;
    ns_1_1 = ns_1_St_2_Off_1;
  } else {
    s_1_St_2_On = true;
    s_1 = s_1_St_2_On;
    nr_1_St_2_On = false;
    nr_1 = nr_1_St_2_On;
    ns_1_St_2_On_1 = false;
    ns_1_1 = ns_1_St_2_On_1;
  };
  _out->s2 = s_1;
  if (self->ck_1) {
    v_5 = (c||b);
    if (v_5) {
      r_2_St_3_Off = true;
      s_6_St_3_Off_1 = false;
    } else {
      r_2_St_3_Off = self->pnr_2;
      s_6_St_3_Off_1 = true;
    };
    r_2 = r_2_St_3_Off;
    s_6_1 = s_6_St_3_Off_1;
  } else {
    v_4 = (c||b);
    if (v_4) {
      r_2_St_3_On = true;
    } else {
      r_2_St_3_On = self->pnr_2;
    };
    r_2 = r_2_St_3_On;
    if (v_4) {
      s_6_St_3_On_1 = true;
    } else {
      s_6_St_3_On_1 = false;
    };
    s_6_1 = s_6_St_3_On_1;
  };
  ck_2_1 = s_6_1;
  if (ck_2_1) {
    s_St_3_Off = false;
    nr_2_St_3_Off = false;
    ns_2_St_3_Off_1 = true;
    s = s_St_3_Off;
    nr_2 = nr_2_St_3_Off;
    ns_2_1 = ns_2_St_3_Off_1;
  } else {
    s_St_3_On = true;
    s = s_St_3_On;
    nr_2_St_3_On = false;
    nr_2 = nr_2_St_3_On;
    ns_2_St_3_On_1 = false;
    ns_2_1 = ns_2_St_3_On_1;
  };
  _out->s1 = s;
  v = (_out->s1&&_out->s2);
  v_2 = (v&&_out->s3);
  v_3 = !(v_2);
  self->pnr = nr;
  self->ck_5_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_3_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_1 = ns_2_1;;
}

