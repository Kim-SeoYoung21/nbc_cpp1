#include <iostream>

using namespace std;

void avg(int list[], int n);
void sum(int list[], int n);

int main()
{
	const int n = 5;
	int myList[n]; // 5개의 숫자 배열

	// 입력받아 저장
	for (int i = 0;i < n;i++)
	{
		cout << "배열의 " << i << "번째 숫자를 입력해주세요.: ";
		cin >> myList[i];
	}

	//합계
	sum(myList, 5);

	//평균
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
	cout << " 배열의 합: " << returnSum << endl;
}
void avg(int list[], int n)
{
	int returnAvg = 0;
	for (int i = 0;i < n;i++)
	{
		returnAvg += list[i];
	}
	returnAvg /= n;      
	cout << " 배열의 평균: " << returnAvg << endl;
}