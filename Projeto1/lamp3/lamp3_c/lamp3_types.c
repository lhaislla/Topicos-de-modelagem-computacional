/* --- Generated the 21/10/2019 at 10:36 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks lamp3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lamp3_types.h"

Lamp3__st_3 Lamp3__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_On")==0)) {
    return Lamp3__St_3_On;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return Lamp3__St_3_Off;
  };
}

char* string_of_Lamp3__st_3(Lamp3__st_3 x, char* buf) {
  switch (x) {
    case Lamp3__St_3_On:
      strcpy(buf, "St_3_On");
      break;
    case Lamp3__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    default:
      break;
  };
  return buf;
}

Lamp3__st_2 Lamp3__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_On")==0)) {
    return Lamp3__St_2_On;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return Lamp3__St_2_Off;
  };
}

char* string_of_Lamp3__st_2(Lamp3__st_2 x, char* buf) {
  switch (x) {
    case Lamp3__St_2_On:
      strcpy(buf, "St_2_On");
      break;
    case Lamp3__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    default:
      break;
  };
  return buf;
}

Lamp3__st_1 Lamp3__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_On")==0)) {
    return Lamp3__St_1_On;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Lamp3__St_1_Off;
  };
}

char* string_of_Lamp3__st_1(Lamp3__st_1 x, char* buf) {
  switch (x) {
    case Lamp3__St_1_On:
      strcpy(buf, "St_1_On");
      break;
    case Lamp3__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

Lamp3__st Lamp3__st_of_string(char* s) {
  if ((strcmp(s, "St_On")==0)) {
    return Lamp3__St_On;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return Lamp3__St_Off;
  };
}

char* string_of_Lamp3__st(Lamp3__st x, char* buf) {
  switch (x) {
    case Lamp3__St_On:
      strcpy(buf, "St_On");
      break;
    case Lamp3__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

