#include<stdio.h>
int fact(int x){
    if(x==1)
    return 1;
    while(x!=0){
        return ((x)*fact(x-1));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int f=fact(n);
    printf("%d",f);
    return 0;
}