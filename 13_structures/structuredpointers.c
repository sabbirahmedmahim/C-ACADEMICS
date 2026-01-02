#include <stdio.h>
typedef struct student
{
    int rno;
    float percentage;
    char grade;
} student;
void change(student *s)
{
    // (*s).grade = 'A';
    s->grade='A'; //second method
}
int main()
{
    student s = {15, 70.7, 'B'};
    printf("%c\n", s.grade);
    change(&s);
    printf("%c\n", s.grade);
    return 0;
}