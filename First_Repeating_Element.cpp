#include <iostream>
using namespace std;

int main()
{

	int arr[] = {1,123,14,15,2,15,2};
	int N = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<N;i++)
		for(int j=i+1;j<N;j++)
				if(arr[i] == arr[j])
					{
						cout << "First repeating integer is "<<arr[i];
						return 0;
					}

	cout<<"No repeating integer found\n";

	return 0;
}
