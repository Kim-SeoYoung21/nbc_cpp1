#include <iostream>

using namespace std;

void avg(int list[], int n);
void sum(int list[], int n);

int main()
{
	const int n = 5;
	int myList[n]; // 5���� ���� �迭

	// �Է¹޾� ����
	for (int i = 0;i < n;i++)
	{
		cout << "�迭�� " << i << "��° ���ڸ� �Է����ּ���.: ";
		cin >> myList[i];
	}

	//�հ�
	sum(myList, 5);

	//���
	avg(myList, 5);


	return 0;
}
void sum(int list[], int n)
{
	int returnSum = 0;
	for (int i = 0;i < n;i++)
	{		
		returnSum += list[i];
	}
	cout << " �迭�� ��: " << returnSum << endl;
}
void avg(int list[], int n)
{
	int returnAvg = 0;
	for (int i = 0;i < n;i++)
	{
		returnAvg += list[i];
	}
	returnAvg /= n;      
	cout << " �迭�� ���: " << returnAvg << endl;
}