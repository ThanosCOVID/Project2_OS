#include <stdio.h>
#include <pthread.h>
#include "programs.h"

void Student(int id) {
    //pthread_t studentThread = malloc(sizeof(studentThread));
}

void Professor() {
  int i;
	for(i = 0; i < 2; i++) {
		AnswerStart(i);
		AnswerDone(i);
	}
}

void AnswerStart(int id) {
  printf("Professor starts to answer question for student %d\n", id);
}

void AnswerDone(int id) {
    printf("Professor is done with answer for student %d\n", id);
}

