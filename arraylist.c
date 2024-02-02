//arraylist.c
#include "arraylist.h"
int count = 0;

int main() {
	
	char** arrlist = (char**)malloc(sizeof(char*) * 10);
	
	
	
	void printlist(char*) {

	}
	void append(char**, const char*) {

		int size = strlen(value) - 1;
		arr[size] = (char**)malloc(strlen(value) + 1);
		strcpy_s(arr[count], size, value);
		count++;
	}

	void prepend(char arr[][100], const char* value) {
		for (int i = count - 1; i >= 0; i--)
			strcpy_s(arr[i + 1], 100, a[i]);
		strcpy_s(arr[0], 100, value);
		count++;

	}
}