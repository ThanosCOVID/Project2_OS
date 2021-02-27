#include <stdio.h>
#include <pthread.h>
#include "programs.h"

void EnterOffice(int id){
  printf("Student %d enters the office\n", id);
}

void LeaveOffice(int id){
  printf("Student %d leaves the office\n", id);
}
