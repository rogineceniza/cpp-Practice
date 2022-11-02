//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	int arr[] = { 34,67,90,34,12,1,2,456,0,342,78,34,4 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	sort(arr, arr + length);
//
//	cout << "Sorted Elements: " << endl;
//
//	
//		for (int i = length - 1; i > 0; --i) 
//	{
//			cout << arr[i] << " ";
//	}
//
//		cout << "\nTop 3 Largest Arrays:" << endl;
//
//		for (int i = length - 1; i > length - 4; --i)
//		{
//			cout << arr[i] << " ";
//		}
//}



#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int arr[] = { 34,56,76,76,54,23,312,43,56,786,973,4,3,545,6,8,9,0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + size, greater<int>()); // remove greater aron ma ascending order....

	cout << "Array in Descending order: \n";
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nTop 3 Largest Arrays:  ";
	for (int i = 0; i < 3; i++) 
	{
		cout << "\n";
		cout << arr[i] << " ";
	}
}