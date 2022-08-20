#include <stdio.h>

int main(void) {
    int a;
    do {
        printf("100이상 입력하시오");
        scanf("%d",&a);
    }while(a<100);
    int sum=0;
    for(int i=1; i<a;++i){
        if (i%3 ==0 || i%7==0) sum+=i;
    }
    printf("%d",sum);
    return 0;
}
