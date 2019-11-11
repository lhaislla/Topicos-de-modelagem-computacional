/* --- Generated the 16/10/2019 at 11:4 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Lamp1__task_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int c1;
  int b1;
  Lamp1__task_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Lamp1__task_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("c1 ? ");
    scanf("%d", &c1);;
    
    printf("b1 ? ");
    scanf("%d", &b1);;
    Lamp1__task_step(c1, b1, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.s);
    puts("");
    fflush(stdout);
  };
  return 0;
}

