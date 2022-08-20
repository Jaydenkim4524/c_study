#include <stdio.h>

int main(void) {
    int X; scanf("%d",&X);
    int N; scanf("%d",&N);
    int sum=0;
    for (int i=1;i<=N;i++){
        int a,b; scanf("%d %d",&a,&b);
        int c=a*b;
        sum+=c;
    }
    if (sum==X){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
