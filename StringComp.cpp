#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 40

void readLine(char buffer, int length);
int comp(char buffer, int length);

int main(){
	char buffer[BUFFER_SIZE];
	int length = 0;
	int compLen;

	readLine(buffer, &length);
	compLen = comp(buffer, length);
	
	return 0;
}

void readLine(char *buffer, int *length){
	char input;
	while ((input = getchar()) != '\n') {
		buffer[*length] = input;
		*length++;
	}
}
int comp(char *buffer, int length){

}