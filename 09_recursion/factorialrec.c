#include<stdio.h>
    int factrec(int n){
        if (n==1 || n==0)
        {
            return 1;
        }
        int recans= n*factrec(n-1);
        return recans;
    }
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("%d",factrec(n));
    return 0;
}