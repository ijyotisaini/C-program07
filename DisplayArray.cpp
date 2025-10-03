#include <iostream>
using namespace std;

int main() {
	
	int arr[10];
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	
	cout<<"Enter the elements of array:";	
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Display the elements:";
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	cout<<endl;
		return 0;
}
