#include <stdio.h>
int main()
{
    typedef struct student
    {
        int rno;
        float percent;
        char grade;
    } student;
    student arr[3];
    arr[0].rno = 20;
    arr[0].percent = 93.4;
    arr[0].grade = 'A';

    student s = {20, 97.5, 'B'};
    arr[1] = s;
    printf("%d ", arr[1].rno);
    printf("%f ", arr[1].percent);
    printf("%c ", arr[1].grade);
    return 0;
}