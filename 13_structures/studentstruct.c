#include <stdio.h>
#include <string.h>
struct student
{
  int id;
  float cgpa;
  char name[10];
};

int main()
{
  struct student s1, s2;
  printf("Enter last 4 digits of ID:  ");
  scanf("%d", &s1.id);

  printf("Enter First Name: ");
  scanf("%s",&s1.name);

  printf("Enter CGPA: ");
  scanf("%f",&s1.cgpa);



  printf("Enter last 4 digits of ID:  ");
  scanf("%d", &s2.id);

  printf("Enter First Name: ");
  scanf("%s",&s2.name);

  printf("Enter CGPA: ");
  scanf("%f",&s2.cgpa);

  printf("%s\n%d\n%.2f\n",s1.name, s1.id, s1.cgpa);
  printf("%s\n%d\n%.2f", s2.name,s2.id, s2.cgpa);
  return 0;
}