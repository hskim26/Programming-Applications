//리스트(lsit)
// -> 자료가 1차원적으로 나열된 형태
// -> 리스트의 처음과 끝이 어딘지의 정보가 필요함
// -> 배열을 이용한 리스트 -> arraylist
// -> 노드를 이용한 리스트 -> linkedlist


#include <stdio.h>

int size = 0;
// 리스트에 데이터를 추가하는 함수
void append(int*, int);//	리스트의 끝에 추가하는 함수
//	앞에 추가하는 함수
//	중간에 추가하는 함수
//리스트에서 데이터를 삭제하는 함수
void removelast(int* arr) {


	int removeitem = arr[size - 1];

	arr[size = 1] = 0;
	size--;
	printlist(arr);
}
void removefirst(int* arr) {
	
	int removeitem = arr[0];
	
	
	for (int i = 0; i < size - 1; i++)
		arr[i] = arr[i + 1];
	arr[size - 1] = 0;
	size--;

	return removeitem;

}
void remove
//리스트를 출력하는 함수


int main() {

	int arraylist[100];

	append(arraylist, 10);
	append(arraylist, 20);
	append(arraylist, 30);
	printlist(arraylist);

	return 0;
}

void printlist(int* arr) {
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	puts("");
}










void append(int* arr, int value) {

	arr[size] = value;
	size++;

}

void prepend(int* arr, int value) {

	for (int i = size - 1; i >= 0; i--)
		arr[i + 1] = arr[i];
	arr[0] = value;


}

void insert(int* arr, int target, int value) {

	int position = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			position = i;
			break;
		}
	}

	// target이 리스트에 없는 경우
	if (position == -1) return;

	// 리스트를 뒤로 shift하는 부분
	for (int i = size - 1; i >= position; i--)
		arr[i + 1] = arr[i];
	arr[position] = value;
	size++;

	printlist(arr);

}


