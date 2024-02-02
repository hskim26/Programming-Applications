#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int n = 0;

	printf("입력할 문자열의 개수>>");
	scanf_s("%d", &n);
	getchar();

	char** arr = (char**)malloc(n * sizeof(char*));
	char temp[100] = "";

	for (int i = 0; i < n; i++) {
		printf("%d 번째 이름: ", i + 1);
		gets_s(temp, sizeof(temp));
		int size = strlen(temp) + 1;
		arr[i] = (char*)malloc(size);
		strcpy_s(arr[i], size, temp);
	}

	puts("\n### 문자열 출력 ###\n");
	for (int i = 0; i < n; i++) {
		puts(arr[i]);
	}

	return 0;
}