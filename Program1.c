#include <stdio.h>
#include <pthread.h>

int i;

void Student(int id) {
    pthread_t studentThread = malloc(sizeof(studentThread));
}

void Professor() {
	for(i = 0; i < /*loop amount*/; i++) {
		AnswerStart();
		AnswerDone();
	}
}

void AnswerStart(int id) {
    return "Professor starts to answer question for student %d\n", id;
}

void AnswerDone(int id) {
    return "Professor is done with answer for student %d\n", id
}