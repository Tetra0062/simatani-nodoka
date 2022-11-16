#include <stdio.h>

int main(){
    
    int data[10];
    
    for(int i = 0; i < 10; ++i){
        
        data[i]=rand();

        printf("%d\n",data[i]);

    }
    
    return 0;

}