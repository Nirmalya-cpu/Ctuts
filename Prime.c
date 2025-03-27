#include<stdio.h>
int main(){
    int n,i,counter;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        counter++;
    }if(n==0||n==1)
    printf("ncnp");
    else if (counter==0)
    printf("Prime");
    else
    printf("composite");
    return 0;
}