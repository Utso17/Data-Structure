#include <iostream>
using namespace std;
int main()

{
   int n, largest ,arr[50];

   cout<<"How many number to enter?"<<endl;
   cin>>n;

    for(int i = 0; i < n; i++)
        {
      cout<<"Enter Element: ";
      cin>>arr[i];
        }
   largest = arr[0];

   for(int i = 1;i < n; i++)
        {
         if(largest < arr[i])
         largest = arr[i];
        }
   cout<<"Largest element is: "<<largest;
   return 0;
}




