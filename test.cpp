#include <iostream>
using namespace std;

int main(){
	
	int num, arr[100], counter = 0;
	
	cout << "Enter decimal number: ";
	cin >> num;
	
	while(num != 0){
		if(num % 2 == 0){
			num = num / 2;
			arr[counter] = 0;
		} else{
			num = num / 2;
			arr[counter] = 1;
		}
		counter++;
	}
	cout << "Binary equivalent: ";
	for(int i = counter-1; i >= 0; i--){
		cout << arr[i];
	}
	return 0;
}
