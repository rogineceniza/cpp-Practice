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

int main()
{
    // Get the array
    int arr[] = { 1, 45, 54, 71, 76, 12 };

    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());

    // Print the sorted array
    cout << "\nDescending Sorted Array:\n";
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    return 0;
}