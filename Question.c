#include <stdio.h>
#include <pthread.h>
#include "programs.h"

void QuestionStart(int id){
  printf("Student %d asks a question\n", id);
}

void QuestionDone(int id){
  printf("Student %d is satisfied.\n", id);
}
