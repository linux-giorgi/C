#include<stdio.h>
#include<stdlib.h>
char string[]="----------------------------------------------------------------------------------------------------------------------------------";
short size = sizeof(string)/sizeof(string[0]);
void animation(){
	for(short i;i<size;i++){
		system("sleep 0.5");system("clear");
		string[i]='#';
		printf("%s\n",string);
	}
}
int main(){
	animation();
	return 0;
}
