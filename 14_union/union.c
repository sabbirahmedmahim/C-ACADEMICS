#include <stdio.h>
typedef union student
{
    int rno;          // 4 bytes
    float percentage; // 4 bytes
    char grade;       // 2 bytes
} student;
int main()
{

    student s = {67, 70.7, 'B'};

    printf("%c\n", s.grade);
    printf("%f\n", s.percentage);
    printf("%d\n", s.rno);

    // student s;
    // s.grade = 'A';
    // printf("%c\n", s.grade); 
    return 0;
}