#include <stdio.h>
int foo(int x){
    if(x>0){
        return x;
    }else return 10;
}

int main(){
    printf("hello world\n");
    foo(1);
    return 0;
}