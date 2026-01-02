#include <stdio.h>
typedef struct student
{
    int rno;
    float percentage;
    char grade;
} student;

void print(student s)
{
    printf("%d\n", s.rno);
    printf("%f\n", s.percentage);
    printf("%c\n", s.grade);
}
void change(student s){
    s.grade='A';
}
int main()
{

    student s = {15, 70.7, 'B'};
    // print(s);
    printf("%c\n", s.grade);
    // s.grade = 'A';
    change(s);
    printf("%c\n", s.grade);
    return 0;
}