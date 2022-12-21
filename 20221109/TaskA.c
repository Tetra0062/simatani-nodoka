#include<stdio.h>

void shuffle(int array[], int size){

    for(int i = 0; i < size; ++i){

        int j = rand() % size;

        int t = array[i];

        array[i] = array[j];

        array[j] = t;

    }

}


int main(void){

    int data[11] = {0,1,2,3,4,5,6,7,8,9,10};

    shuffle(data,11);

    for(int i = 0; i <= 11; i++){

        printf("%d\n",data[i]);

    }

    int target = 5;  //検索するやつ

    int endFlag = 0; //ループの終了条件の変数

    int result = -1;  //格納

    for(i = 0; i <= result; ++i){

        if(result[i]==target){
         
         printf("%d\n",result[i]);

         endFlag = 1;

         break;
        
        }

    }

        if(endFlag == 0){

            printf("%d\n",result[i]);

            break;

        }
  
    return 0;

}