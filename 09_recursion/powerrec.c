#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int ans=a*power(a,b-1);
    return ans;
}
int main(){
    int a;
    printf("enter base: ");
    scanf("%d",&a);
    int b;
    printf("enter power: ");
    scanf("%d",&b);
    printf("%d raised to the power %d is %d",a,b,power(a,b));
}