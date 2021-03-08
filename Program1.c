#include <stdio.h>
#include <pthread.h>
#include "programs.h"
#include <semaphore.h>

//office acts as the buffer to queue students to talk to the professor
int office[officeSize];
int officeSize;
int officeCounter;

//students are semaphores
void Student(int id) {
  int i;
  int length = (id % 4) + 1;
  
  sem_t studentSem;
  sem_init(&studentSem, 0, 1);
  //pthread_t studentThread = malloc(sizeof(studentThread));
  EnterOffice(id);

  for(i = 0; i < length; i++) {
    QuestionStart(id);
    QuestionDone(id);
  }

}

//professor is a thread
void Professor() {
  pthread_t professorThread = malloc(sizeof(professorThread));

  int i;
	for(i = 0; i < 2; i++) {
		AnswerStart(i);
		AnswerDone(i);
	}
}

int main(int argc, char **argv) {

}

void AnswerStart(int id) {
  printf("Professor starts to answer question for student %d\n", id);
}

void AnswerDone(int id) {
    printf("Professor is done with answer for student %d\n", id);
}

