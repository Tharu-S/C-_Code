#include <iostream>
using namespace std;

int main() {

	float arr[10];
	
	cout << "Enter 10 positive numbers:\n";
	for(int i=0;i<10;i++) {
		cin >> arr[i];
		if(arr[i]<0) {
			cout << "Enter the only positive numbers.\n";
			i=i-1;
		}	 
	}
	
	int max=arr[0];
	for(int i=0;i<10;i++) {
		if(arr[i]>=max) {
			max=arr[i];
		}
	}
	cout << "\nThe maximum number is: " << max;
	
	int min=arr[0];
	for(int i=0;i<10;i++) {
		if(arr[i]<=min) {
			min=arr[i];
		}
	}
	cout << "\nThe minimum number is: " << min;

return 0;
}

