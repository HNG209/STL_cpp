#include<iostream>
#include<map>
using namespace std;
int main() {
	//commonly used map's method:
	//find(return iterator to the found element,if value not found,return an iterator to the last element(.end()),by default will return the key,use (->second) to get the value)
	//first,second(get the key(->first) or value(->second))
	//begin,end(return iterator to the first/last element in map)
	//iterator looping
	//size(return the size of map)
	//after inserting value,map's size will be automatically increase by 1
	std::map<string, string> my_map;
	//#std::map<key_type,value_type> m(<optional:iterator first>,<optional:iterator last>);
	//#std::map<key_type,value_type> m(other_map)//copying constructor
	my_map["Hung"];//1
	my_map["Thao"];//2
	my_map["Phuc"];//3
	my_map["Thinh"];//4
	my_map["Dat"];//5
	my_map["Hao"];//6
	my_map["Thanh"];//7
	my_map["Diep"];//8
	for (const auto& i : my_map) {
		cout << "enter age for " << i.first << ":";
		cin >> my_map.find(i.first)->second;
	}
	for (const auto& i : my_map) {
		cout << i.first << " age:" << i.second << endl;
	}
	std::map<int, string> m;
	int n;
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "enter person " << i + 1 << " name:";
		cin >> m[i];//cin >> m.at(i);
	}
	cout << "range based for loop:" << endl;
	for (const auto& i : m) {
		cout << i.first << ":" << i.second << endl;
	}
	cout << "map's size:" << m.size() << endl;
	//iterator looping:
	cout << "iterator looping:" << endl;
	map<int, string> ::iterator it = m.begin();
	while (it != m.end()) {
		cout << "key:" << it->first << ",value:" << it->second << endl;
		++it;
	}
	return 0;
}