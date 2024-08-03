#include<stdbool.h>
#include<stdio.h>
int list[]={123,1234,124,324,345,362,123,1,23,12,213,2};
int var=0;
int size=sizeof(list)/sizeof(list[0]);
int main(){
 for(int i=0;i<size;i++){
    switch(list[i]){
      case 123:
        printf("it is:%d\n",list[i]);
        break;
    }
  }
  return 0;
}
