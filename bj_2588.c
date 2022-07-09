#include <stdio.h>

int main(void){
    int n1; scanf("%d",&n1);
    int a,b,c; scanf("%1d%1d%1d",&c,&b,&a);
    int n2=n1*(100*c+10*b+a);
    printf("%d\n%d\n%d\n%d\n",n1*a,n1*b,n1*c,n2);
    return 0;
}
