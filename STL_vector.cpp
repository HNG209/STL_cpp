#include<iostream>
#include<vector>
using namespace std;
int main() {
	//vector's method:
	//push_back(push the next value)
	//pop_back(delete the top value)
	//begin(iterator to the first element)
	//end(iterator to the last element + 1)
	//size(size of the vector)
	vector<int> v;
	//#vector<type> v(<optional:size>,<optional:initial value>);
	//#vector<type> v(<optional:iterator first>,<optional:iterator last>);//copy in range of an another
	//+do not try to access the vector by using subscript operator when not declaring its size
	//+push back 1 element will make vector's size increase by 1
	//+dereferencing to get the value if using iterator looping
	int n;
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cout << "enter value " << i + 1 << ":";
		cin >> temp;
		v.push_back(temp);
	}
	cout << "vector's size:" << v.size() << endl;
	//range based for loop
	cout << "range based for loop:" << endl;
	for (const auto& i : v) {
		cout << i << endl;
	}
	//iterator:
	cout << "iterator looping:" << endl;
	vector<int> ::iterator it = v.begin();
	while (it != v.end()) {
		cout << *it << endl;
		++it;
	}
	return 0;
}