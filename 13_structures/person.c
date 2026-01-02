#include <stdio.h>
#include<string.h>
int main()
{
    typedef struct person
    {
        int salary;
        int age;
        char name[20];
    } person;
    person p1;
    strcpy(p1.name, "Mushfiq");
    p1.age = 24;
    p1.salary = 250000; 

    person p2={30000,30,"Nihal"};

    printf("%s\n",p1.name);
    printf("%d\n",p1.age);
    printf("%d\n",p1.salary);

    printf("%s\n",p2.name);
    printf("%d\n",p2.age);
    printf("%d\n",p2.salary);


    return 0;
}