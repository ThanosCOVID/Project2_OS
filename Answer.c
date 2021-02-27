#include <stdio.h>
#include <pthread.h>
#include "programs.h"

void AnswerStart(int id) {
  printf("Professor starts to answer question for student %d\n", id);
}

void AnswerDone(int id) {
    printf("Professor is done with answer for student %d\n", id);
}

