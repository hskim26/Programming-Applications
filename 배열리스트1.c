//����Ʈ(lsit)
// -> �ڷᰡ 1���������� ������ ����
// -> ����Ʈ�� ó���� ���� ������� ������ �ʿ���
// -> �迭�� �̿��� ����Ʈ -> arraylist
// -> ��带 �̿��� ����Ʈ -> linkedlist


#include <stdio.h>

int size = 0;
// ����Ʈ�� �����͸� �߰��ϴ� �Լ�
void append(int*, int);//	����Ʈ�� ���� �߰��ϴ� �Լ�
//	�տ� �߰��ϴ� �Լ�
//	�߰��� �߰��ϴ� �Լ�
//����Ʈ���� �����͸� �����ϴ� �Լ�
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
//����Ʈ�� ����ϴ� �Լ�


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

	// target�� ����Ʈ�� ���� ���
	if (position == -1) return;

	// ����Ʈ�� �ڷ� shift�ϴ� �κ�
	for (int i = size - 1; i >= position; i--)
		arr[i + 1] = arr[i];
	arr[position] = value;
	size++;

	printlist(arr);

}


