#include <stdio.h>
struct employee
{
  int code;
  float salary;
  char name[10];
};

void show(struct employee e);

void show(struct employee e)
{
  printf("Code is %d\nSalary is  %f and Name is %s", e.code, e.salary, e.name);
}
int main()
{
  struct employee s1;
  printf("Enter name:  ");
  scanf("%s", s1.name);

  printf("Enter code: ");
  scanf("%d", &s1.code);

  printf("Enter salary: ");
  scanf("%f", &s1.salary);

  show(s1);

  return 0;
}