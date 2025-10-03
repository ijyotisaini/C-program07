#include <iostream>

using namespace std;
int main() {
	int count=0;
	int num;
	int arr[]={3,5,6,7,6,5,3,2,3};
	
	cout<<"Enter the num:";
	cin>>num;
	for(int i=0; i<(sizeof(arr));i++){
		if(arr[i]==num){
			++count;
		}
	}
	cout<<"Frequency of a number:"<<count;
	return 0;
}
