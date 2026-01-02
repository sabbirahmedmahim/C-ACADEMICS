#include <stdio.h>
int main()
{
    typedef struct student
    {
        int rno;
        float percent;
        char grade;
    } student;

    student s1 = {20, 90.5, 'A'};
    student s2 = s1;
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    s2.grade='B';
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    return 0;
}