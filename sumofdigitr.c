#include <stdio.h>
int sum(int x){
    int rem;
    if(x==0)
    return 0;
    else{
    rem=x%10;
    return rem+sum(x/10);
    }
    
}
int main(){
    int a,b;
    scanf("%d",&a);
    int total=sum(a);
    printf("%d",total);
    return 0;
}
