/* --- Generated the 21/10/2019 at 10:36 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks lamp3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

int main(int argc, char** argv) {
  int step_c;
  int step_max;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
  };
  return 0;
}

