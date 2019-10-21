/* --- Generated the 21/10/2019 at 11:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c task_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task_controller.h"

void Task_controller__task_controller_task_c1_step(int task_b1, int task_b2,
                                                   int task_b3,
                                                   int task_ck_1,
                                                   int task_pnr_2,
                                                   int task_ck_3_1,
                                                   int task_pnr_1,
                                                   int task_ck_5_1,
                                                   int task_pnr,
                                                   int p_task_c1,
                                                   int p_task_c2,
                                                   int p_task_c3,
                                                   int task_c2, int task_c3,
                                                   Task_controller__task_controller_task_c1_out* _out) {
  
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  sub_1 = p_task_c1;
  v = !(task_ck_5_1);
  sub_3 = (v&&sub_1);
  if (task_ck_3_1) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_1;
  };
  if (task_ck_1) {
    v_16 = sub_1;
  } else {
    v_16 = sub_2;
  };
  if (task_c3) {
    v_17 = v_16;
  } else {
    v_17 = sub_1;
  };
  if (task_ck_1) {
    v_1 = sub_2;
  } else {
    v_1 = sub_1;
  };
  if (task_c3) {
    v_2 = v_1;
  } else {
    v_2 = sub_1;
  };
  sub_4 = sub_1;
  if (task_c2) {
    v_18 = v_17;
    v_3 = v_2;
  } else {
    v_18 = sub_4;
    v_3 = sub_4;
  };
  sub_6 = (task_ck_5_1&&sub_1);
  if (task_ck_3_1) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_1;
  };
  if (task_ck_1) {
    v_19 = sub_1;
  } else {
    v_19 = sub_5;
  };
  if (task_c3) {
    v_20 = v_19;
  } else {
    v_20 = sub_1;
  };
  if (task_c2) {
    v_21 = v_20;
  } else {
    v_21 = sub_4;
  };
  if (task_b3) {
    v_22 = v_18;
  } else {
    v_22 = v_21;
  };
  if (task_ck_1) {
    v_4 = sub_5;
  } else {
    v_4 = sub_1;
  };
  if (task_c3) {
    v_5 = v_4;
  } else {
    v_5 = sub_1;
  };
  if (task_c2) {
    v_6 = v_5;
  } else {
    v_6 = sub_4;
  };
  if (task_b3) {
    v_7 = v_3;
  } else {
    v_7 = v_6;
  };
  if (task_ck_3_1) {
    sub_7 = sub_1;
  } else {
    sub_7 = sub_3;
  };
  if (task_ck_1) {
    v_23 = sub_1;
  } else {
    v_23 = sub_7;
  };
  if (task_c3) {
    v_24 = v_23;
  } else {
    v_24 = sub_1;
  };
  if (task_c2) {
    v_25 = v_24;
  } else {
    v_25 = sub_4;
  };
  if (task_ck_1) {
    v_8 = sub_7;
  } else {
    v_8 = sub_1;
  };
  if (task_c3) {
    v_9 = v_8;
  } else {
    v_9 = sub_1;
  };
  if (task_c2) {
    v_10 = v_9;
  } else {
    v_10 = sub_4;
  };
  if (task_ck_3_1) {
    sub_8 = sub_1;
  } else {
    sub_8 = sub_6;
  };
  if (task_ck_1) {
    v_26 = sub_1;
  } else {
    v_26 = sub_8;
  };
  if (task_c3) {
    v_27 = v_26;
  } else {
    v_27 = sub_1;
  };
  if (task_c2) {
    v_28 = v_27;
  } else {
    v_28 = sub_4;
  };
  if (task_b3) {
    v_29 = v_25;
  } else {
    v_29 = v_28;
  };
  if (task_b2) {
    v_30 = v_22;
  } else {
    v_30 = v_29;
  };
  if (task_ck_1) {
    v_11 = sub_8;
  } else {
    v_11 = sub_1;
  };
  if (task_c3) {
    v_12 = v_11;
  } else {
    v_12 = sub_1;
  };
  if (task_c2) {
    v_13 = v_12;
  } else {
    v_13 = sub_4;
  };
  if (task_b3) {
    v_14 = v_10;
  } else {
    v_14 = v_13;
  };
  if (task_b2) {
    v_15 = v_7;
  } else {
    v_15 = v_14;
  };
  if (task_b1) {
    sub_0 = v_15;
  } else {
    sub_0 = v_30;
  };
  _out->task_c1 = sub_0;;
}

void Task_controller__task_controller_task_c2_step(int task_b1, int task_b2,
                                                   int task_b3,
                                                   int task_ck_1,
                                                   int task_pnr_2,
                                                   int task_ck_3_1,
                                                   int task_pnr_1,
                                                   int task_ck_5_1,
                                                   int task_pnr,
                                                   int p_task_c1,
                                                   int p_task_c2,
                                                   int p_task_c3,
                                                   int task_c3,
                                                   Task_controller__task_controller_task_c2_out* _out) {
  
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  sub_4 = p_task_c2;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->task_c2 = sub_0;;
}

void Task_controller__task_controller_task_c3_step(int task_b1, int task_b2,
                                                   int task_b3,
                                                   int task_ck_1,
                                                   int task_pnr_2,
                                                   int task_ck_3_1,
                                                   int task_pnr_1,
                                                   int task_ck_5_1,
                                                   int task_pnr,
                                                   int p_task_c1,
                                                   int p_task_c2,
                                                   int p_task_c3,
                                                   Task_controller__task_controller_task_c3_out* _out) {
  
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  sub_3 = p_task_c3;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->task_c3 = sub_0;;
}

void Task_controller__task_controller_step(int task_b1, int task_b2,
                                           int task_b3, int task_ck_1,
                                           int task_pnr_2, int task_ck_3_1,
                                           int task_pnr_1, int task_ck_5_1,
                                           int task_pnr, int p_task_c1,
                                           int p_task_c2, int p_task_c3,
                                           Task_controller__task_controller_out* _out) {
  Task_controller__task_controller_task_c1_out Task_controller__task_controller_task_c1_out_st;
  Task_controller__task_controller_task_c3_out Task_controller__task_controller_task_c3_out_st;
  Task_controller__task_controller_task_c2_out Task_controller__task_controller_task_c2_out_st;
  Task_controller__task_controller_task_c3_step(task_b1, task_b2, task_b3,
                                                task_ck_1, task_pnr_2,
                                                task_ck_3_1, task_pnr_1,
                                                task_ck_5_1, task_pnr,
                                                p_task_c1, p_task_c2,
                                                p_task_c3,
                                                &Task_controller__task_controller_task_c3_out_st);
  _out->task_c3 = Task_controller__task_controller_task_c3_out_st.task_c3;
  Task_controller__task_controller_task_c2_step(task_b1, task_b2, task_b3,
                                                task_ck_1, task_pnr_2,
                                                task_ck_3_1, task_pnr_1,
                                                task_ck_5_1, task_pnr,
                                                p_task_c1, p_task_c2,
                                                p_task_c3, _out->task_c3,
                                                &Task_controller__task_controller_task_c2_out_st);
  _out->task_c2 = Task_controller__task_controller_task_c2_out_st.task_c2;
  Task_controller__task_controller_task_c1_step(task_b1, task_b2, task_b3,
                                                task_ck_1, task_pnr_2,
                                                task_ck_3_1, task_pnr_1,
                                                task_ck_5_1, task_pnr,
                                                p_task_c1, p_task_c2,
                                                p_task_c3, _out->task_c2,
                                                _out->task_c3,
                                                &Task_controller__task_controller_task_c1_out_st);
  _out->task_c1 = Task_controller__task_controller_task_c1_out_st.task_c1;
}

