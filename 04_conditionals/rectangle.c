#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("enter length: ");
    scanf("%d",&length);
    printf("enter breadth: ");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area>perimeter)
    {
        printf("area is greater");
    }
    else{
        printf("permeter is greater");
    }
    return 0;
}