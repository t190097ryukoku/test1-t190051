#include <stdio.h>

int main(void){
    int a=1,i,n=1;
    long int f=1;
    while(1){
        for(i=1;i<n;i++){
            f=f*n;
        }
        if(f<2147483647)a=f;
        else break;
        printf("%d\n",a);
        n++;
        f=n;
    }
}
