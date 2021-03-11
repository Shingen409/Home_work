#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;

void Filrand(int arr[], const int n);
void Filrand(double arr[], const int n);
template<typename T>T Print(T arr[], const int n);
template<typename T>T Summ(T arr[], const int n);
template<typename T>T Avg(T arr[], const int n);
template<typename T>T Min(T arr[], const int n); 
template<typename T>T Max(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	 /*int n = 10;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		
		for (int j = 1; j <= n; j++)
		{
			if (i * j <10)
			{
			 cout << " ";
			}
			cout <<" "<< i * j;
		}
		cout << endl;
	}
	*/

	

	const int n = 5;
	int a_arr[n];
	Filrand(a_arr, n);
	cout << "Первый массив "; Print(a_arr, n); cout << endl;
	cout << "Сумма элементом массива " << Summ(a_arr, n) << endl;
	cout<<"Среднее первого массива "<< Avg(a_arr, n)<<endl;
	cout << "Минимальнй элемент " << Min(a_arr, n) << endl;
	cout << "Максимальный элемент " << Max(a_arr, n) << endl;
	cout << endl;

	double b_arr[n];
	Filrand(b_arr,n);
	cout << "Второй массив "; Print(b_arr, n); cout << endl;
	cout << "Сумма элементов второго массива " << Summ(b_arr, n) << endl;
	cout << "Среднее торого массива " << Avg(b_arr, n) << endl;
	cout << "Минимальный элемент " << Min(b_arr, n) << endl;
	cout << "Максимальный элемент " << Max(b_arr, n) << endl;
	
}
void Filrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() %100;
	}
	
}
void Filrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}

template<typename T>T Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<  arr[i]<<" ";
		
	}
	return T();
}
template<typename T>T Summ(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T Avg(T arr[], const int n)
{
	return Summ(arr, n)/n;

}
template<typename T>T Min(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{

	  if (arr[i] < min)
	  {
		min = arr[i];
	  }
	}
	return min;
}
template<typename T>T Max(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;

} max;
}
