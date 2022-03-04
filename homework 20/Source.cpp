#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void showArr(int array[], int lenght);

int maxEl(int array[], int length);

int minEl(int array[], int length);

int searchIndex(int array[], int length, int key, int begin);

int searchLastIndex(int array[], int length, int key, int begin);

int meanValue(int array[], int length);

void range(int array[], int length, int num1, int num2);



int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int n1, n2;

	int Arr[100];
	for (int i = 0; i < 100; i++)
		Arr[i] = rand() % (100 -(-100) + 1) - 100;
	
		//����� �������
	showArr(Arr, 100);

		//������������ �������
	cout << "������������ ������� ������� -> " << maxEl(Arr, 100) << endl;

		//����������� ������� �������
	cout << "����������� ������� ������� -> " << minEl(Arr, 100) << endl;

		//������ ������� ��������� �������� � ������
	cout << "������ ������� ��������� �������� � ������ = " << searchIndex(Arr, 100, 0, 0) << endl;

		//������ ���������� ��������� �������� � ������
	cout << "������ ���������� ��������� �������� � ������ = " << searchLastIndex(Arr, 100, 0, 0) << endl;
	
		//������� �������������� �������
	cout << "������� �������������� ������� = " << meanValue(Arr, 100) << endl;

		//������� ��������
	cout << "������� ������ � ����� ���������: ";
	cin >> n1 >> n2;
	if (n1 > n2) {
		cout << "�� ����� ������ ��������� ������, ��� ����� � ������� � �� ������� �������!" << endl;
		swap(n1, n2);
	}
	range(Arr, 100, n1, n2);
	
	


	return 0;
}
void range(int array[], int length, int num1, int num2) {
	cout << "����� ��������� � �������:\n[";
		for (int i = num1; i < num2; i++)
			cout << array[i] << ", ";
	cout << "\b\b]\n";
}

int meanValue(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

int searchLastIndex(int array[], int length, int key, int begin = 0) {

	for (int i = length - 1; i >= 0; i--)
		if (array[i] == key) {
			return i;
		}
	return -1;
}

int searchIndex(int array[], int length, int key, int begin = 0) {
	
	for(int i = 0; i < length; i++)
		if (array[i] == key) {
			return i;
		}
	return -1;
}

int minEl(int array[], int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}

int maxEl(int array[], int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}

void showArr(int array[], int lenght) {
	cout << "����������� ������:\n[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}