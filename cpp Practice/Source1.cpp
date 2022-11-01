//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int n, i, largest, second;
//	int arr[100];
//
//
//	cout << "Enter Number: ";
//	cin >> n;
//	cout << "Asking for " << n << " elements......." << endl;
//
//	for (i = 0; i < n; i++) {
//		cout << "Element #" << i+1 << " : ";
//		cin >> arr[i];
//	}
//
//	if (arr[0] > arr[1]) 
//	{
//		largest = arr[0];
//		second = arr[1];
//	}
//	else 
//	{
//		second = arr[1];
//		largest = arr[0];
//	}
//
//
//	for (i = 2; i < n; i++) {
//
//		if (arr[i] > largest) 
//		{
//			second = largest;
//			largest = arr[i];
//		}
//		else if(arr[i] > second && arr[i] != largest)
//		{
//			second = arr[i];
//		}
//	}
//
//	cout << "Second largest element is: " << second;
//
//	return 0;
//}