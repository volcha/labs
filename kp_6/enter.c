#include <stdio.h>
#include <stdlib.h>
#include "../kp_6/data.h"
#define str(a) char a[20];

/*
  (inf_stud)

  select_type information;
  int choice = 0;
  char sex;
  char la;
  printf ("%s\n", "Welcome");
  printf ("%s\n", "Choose your option");
  printf ("%s\n", "1) Add");
  printf ("%s\n", "2) Exit");
  while (choice != 2) {
    scanf ("%d", &choice);
    if (choice == 1) {
      printf ("%s\n", "Please enter:");
      printf ("%s", "Last name - ");
      scanf ("%s", &information.fnp.last_name);
      printf ("%s", "First name - ");
      scanf ("%s", &information.fnp.first_name);
      printf ("%s", "Patronymic - ");
      scanf ("%s", &information.fnp.patronymic);
      printf ("%s", "Sex - ");
      scanf ("%s", &sex);
      information.sex = (sex == 'F')?F:M;
      printf ("%s", "Group num - ");
      scanf ("%d", &information.group_num);
     
      enum есть ли зачёты
      
      printf ("%s", "Mark for mathematical analysis - ");
      scanf ("%d", &information.mks.ez.ma);
      printf ("%s", "Mark for history - ");
      scanf ("%d", &information.mks.ez.hi);
      printf ("%s", "Mark for discrete math - ");
      scanf ("%d", &information.mks.ez.dm);
      printf ("%s", "Mark for computer science - ");
      scanf ("%d", &information.mks.ez.dm);
      information.next = NULL;
      information.last = NULL;
      printf ("%s\n", "Choose your option");
      printf ("%s\n", "1) Add");
      printf ("%s\n", "2) Exit");
    }
    else {
      printf ("%s\n", "Goodbye");
    }
  }
*/



/*
  (info_pc)


  select_type information;
  int choice = 0;
  printf ("%s\n", "Welcome");
  printf ("%s\n", "Choose your option");
  printf ("%s\n", "1) Add");
  printf ("%s\n", "2) Exit");
  while (choice != 2) {
    scanf ("%d", &choice);
    if (choice == 1) {
      printf ("%s\n", "Please enter:");
      printf ("%s", "Last name - ");
      scanf ("%s", &information.last_name);
      printf ("%s", "Number of processors - ");
      scanf ("%d", &information.proc.count);
      printf ("%s", "Type of processors - ");
      scanf ("%s", &information.proc.type);
      printf ("%s", "Memory - ");
      scanf ("%d", &information.memory);

      enum тип видеокарты
      
      printf ("%s", "Video card memory - ");
      scanf ("%d", &information.video.memory);

      enum тип винчестера

      printf ("%s", "Winchester memory - ");
      scanf ("%d", &information.hdd.memory);
      printf ("%s", "Number of winchester - ");
      scanf ("%d", &information.hdd.count);
      printf ("%s", "Number of controller - ");
      scanf ("%d", &information.ctrl.built_in);
      printf ("%s", "Number of external devices - ");
      scanf ("%d", &information.ctrl.discrete);
      printf ("%s", "Operating system - ");
      scanf ("%s", &information.OC);
      information.next = NULL;
      information.last = NULL;
      printf ("%s\n", "Choose your option");
      printf ("%s\n", "1) Add");
      printf ("%s\n", "2) Exit");
    }
    else {
      printf ("%s\n", "Goodbye");
    }
  }
*/



/*
  (info_exam)


  select_type information;
  int choice = 0;
  char sex;
  printf ("%s\n", "Welcome");
  printf ("%s\n", "Choose your option");
  printf ("%s\n", "1) Add");
  printf ("%s\n", "2) Exit");
  while (choice != 2) {
    scanf ("%d", &choice);
    if (choice == 1) {
      printf ("%s\n", "Please enter:");
      printf ("%s", "Last name - ");
      scanf ("%s", &information.full_name.last_name);
      printf ("%s", "First name - ");
      scanf ("%s", &information.full_name.first_name);
      printf ("%s", "Patronymic - ");
      scanf ("%s", &information.full_name.patronymic);
      printf ("%s", "Sex - ");
      scanf ("%s", &sex);
      information.this_sex = (sex == 'F')?F:M;
      printf ("%s", "School number - ");
      scanf ("%d", &information.school_number);

      enum есть ли медаль

      printf ("%s", "Mark for math - ");
      scanf ("%d", &information.mar.math);
      printf ("%s", "Mark for russian - ");
      scanf ("%d", &information.mar.rus);
      printf ("%s", "Mark for informatics - ");
      scanf ("%d", &information.mar.inf);
      printf ("%s", "Mark for physics - ");
      scanf ("%d", &information.mar.phis);

      enum есть ли сочинение
            
      information.next = NULL;
      information.last = NULL;
      printf ("%s\n", "Choose your option");
      printf ("%s\n", "1) Add");
      printf ("%s\n", "2) Exit");
    }
    else {
      printf ("%s\n", "Goodbye");
    }
  }
*/



/*
  (info_passenger)


  select_type information;
  int choice = 0;
  printf ("%s\n", "Welcome");
  printf ("%s\n", "Choose your option");
  printf ("%s\n", "1) Add");
  printf ("%s\n", "2) Exit");
  while (choice != 2) {
    scanf ("%d", &choice);
    if (choice == 1) {
      printf ("%s\n", "Please enter:");
      printf ("%s", "Last name - ");
      scanf ("%s", &information.full_name.last_name);
      printf ("%s", "First name - ");
      scanf ("%s", &information.full_name.first_name);
      printf ("%s", "Patronymic - ");
      scanf ("%s", &information.full_name.patronymic);
      printf ("%s", "Number of bags - ");
      scanf ("%d", &information.bags);
      printf ("%s", "Bags weight - ");
      scanf ("%d", &information.mass);

      enum транзит

      printf ("%s", "Number of children - ");
      scanf ("%d", &information.children_count);  
      information.next = NULL;
      information.last = NULL;
      printf ("%s\n", "Choose your option");
      printf ("%s\n", "1) Add");
      printf ("%s\n", "2) Exit");
    }
    else {
      printf ("%s\n", "Goodbye");
    }
  }
*/

int main () {
  //(info_school)


  select_type information;
  int choice = 0;
  char sex;
  printf ("%s\n", "Welcome");
  printf ("%s\n", "Choose your option");
  printf ("%s\n", "1) Add");
  printf ("%s\n", "2) Exit");
  while (choice != 2) {
    scanf ("%d", &choice);
    if (choice == 1) {
      printf ("%s\n", "Please enter:");
      printf ("%s", "Last name - ");
      scanf ("%s", &information.full_name.last_name);
      printf ("%s", "First name - ");
      scanf ("%s", &information.full_name.first_name);
      printf ("%s", "Patronymic - ");
      scanf ("%s", &information.full_name.patronymic);
      printf ("%s", "Sex - ");
      scanf ("%s", &sex);
      information.this_sex = (sex == 'F')?F:M;
      printf ("%s", "Class number - ");
      scanf ("%d", &information.class_num);
      printf ("%s", "Class letter - ");
      scanf ("%s", &information.lit_class);
      printf ("%s", "University - ");
      scanf ("%s", &information.University);
      printf ("%s", "Work - ");
      scanf ("%s", &information.work);
      printf ("%s", "Army - ");
      scanf ("%s", &information.army);
      information.next = NULL;
      information.last = NULL;
      printf ("%s\n", "Choose your option");
      printf ("%s\n", "1) Add");
      printf ("%s\n", "2) Exit");
    }
    else {
      printf ("%s\n", "Goodbye");
    }
  }
}
