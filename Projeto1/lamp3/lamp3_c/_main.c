/* --- Generated the 20/10/2019 at 15:17 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks lamp3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Lamp3__twotasks_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int b1;
  int b2;
  int b3;
  Lamp3__twotasks_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Lamp3__twotasks_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("b1 ? ");
    scanf("%d", &b1);;
    
    printf("b2 ? ");
    scanf("%d", &b2);;
    
    printf("b3 ? ");
    scanf("%d", &b3);;
    Lamp3__twotasks_step(b1, b2, b3, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.s1);
    printf("=> ");
    printf("%d ", _res.s2);
    printf("=> ");
    printf("%d ", _res.s3);
    puts("");
    fflush(stdout);
  };
  return 0;
}

