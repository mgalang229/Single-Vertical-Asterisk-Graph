#include <iostream>
using namespace std;

int main(){

	int n, arr[100], max[10];
	
	cin >> n;
	max[0] = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(max[0] < arr[i]){
			max[0] = arr[i];
		}
	}
	for(int i = 0; i < max[0]; i++){
		for(int j = 0; j < n; j++){
			cout << (i + arr[j] >= max[0] ? "*":" ");
		}
		cout << endl;
	}
	
	return 0;
}
