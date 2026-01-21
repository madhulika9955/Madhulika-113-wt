#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	int n, target;

	cout << "enter number of elements " ;
	cin >> n;

	int nums[n];
	cout << "enter elements\n ";
	for(int i=0; i<n; i++){
		cin >> nums[i];
	}

	cout << "Enter target sum ";
	cin >> target;

	unordered_map<int, int> mp;

	for(int i=0; i<n; i++){
		int compleiment = target - nums[i];

		if (mp.find(complement) != mp.end()){
			cout << "indices: "<< mp[complement] << "and" << i << end1;
			return 0;
		}
		mp[nums[i]] = i;
	}

	cout << "no two sum solution found." << end1;
	return 0;
}	
