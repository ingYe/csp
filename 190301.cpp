#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> arr;
	int len;
	cin>>len;
	
	int tmp;
	
	for (int i = 0; i<len; i++) {
		cin>>tmp;
		
		arr.push_back(tmp);
	}
	
	int max, min;
	float mid;
	if (arr[0] > arr[len-1]) {
		max = arr[0];
		min = arr[len-1];
	} else {
		max = arr[len-1];
		min = arr[0];
	}
	
	int loc;
	if (len%2==1) {
		loc = (len-1)/2;
		mid = arr[loc];
	} else {
		loc = len/2;
		mid = (arr[loc-1] + arr[loc])/2;
	}
	
	cout<<max<<" "<<mid<<" "<<min;
	
	return 0;
	
}
