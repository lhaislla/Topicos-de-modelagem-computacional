/* --- Generated the 21/10/2019 at 11:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c task_controller.ept --- */

#ifndef TASK_CONTROLLER_H
#define TASK_CONTROLLER_H

#include "task_controller_types.h"
typedef struct Task_controller__task_controller_task_c1_out {
  int task_c1;
} Task_controller__task_controller_task_c1_out;

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
                                                   Task_controller__task_controller_task_c1_out* _out);

typedef struct Task_controller__task_controller_task_c2_out {
  int task_c2;
} Task_controller__task_controller_task_c2_out;

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
                                                   Task_controller__task_controller_task_c2_out* _out);

typedef struct Task_controller__task_controller_task_c3_out {
  int task_c3;
} Task_controller__task_controller_task_c3_out;

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
                                                   Task_controller__task_controller_task_c3_out* _out);

typedef struct Task_controller__task_controller_out {
  int task_c1;
  int task_c2;
  int task_c3;
} Task_controller__task_controller_out;

void Task_controller__task_controller_step(int task_b1, int task_b2,
                                           int task_b3, int task_ck_1,
                                           int task_pnr_2, int task_ck_3_1,
                                           int task_pnr_1, int task_ck_5_1,
                                           int task_pnr, int p_task_c1,
                                           int p_task_c2, int p_task_c3,
                                           Task_controller__task_controller_out* _out);

#endif // TASK_CONTROLLER_H
