#include <stdio.h>

int even(int a){
    return a/2;
}
int kis(int a){
    return 3*a+1;
}

int main(void){
    int a=245845,n;
    printf("%d\n",a);
    while(1){
        if(a%2==1)a=kis(a);
        else a=even(a);
        printf("%d\n",a);
        if(a==1)break;
    }
}

