#include <stdio.h>
int main()
{
    int x;
    x = 5;
    struct student
    {
        int rno;
        float percent;
        char grade;
    };
    struct student Mushfiq;
    Mushfiq.grade = 'A';
    Mushfiq.rno = 88;
    Mushfiq.percent = 95.4;

    // struct student raghav;
    // raghav.grade='C';
    // raghav.rno=19;
    // raghav.percent=90.5;

    // printf("%c\n",raghav.grade);
    // printf("%d\n",raghav.rno);
    // printf("%f\n",raghav.percent);

    struct student raghav = {19, 90.5, 'C'};

    printf("%d\n", raghav.rno);
    printf("%f\n", raghav.percent);
    printf("%c\n", raghav.grade);

    return 0;
}