#include<stdio.h>
int sum(int x,int y);
int main(){
int a,b,s;
scanf("%d %d",&a,&b);
s=sum(a,b);
printf("%d",s);
    return 0;

}
int sum(int x,int y){
    return(x+y);
}