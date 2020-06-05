#include <stdio.h>

int even(int a){
    return a/2;
}
int kis(int a){
    return 3*a+1;
}

int main(void){
    int a=428428,n;
    printf("%d\n",a);
    while(1){
        if(a%2==1)a=kis(a);
        if(a%2==0)a=even(a);
        printf("%d\n",a);
        if(a==1)break;
    }
}
