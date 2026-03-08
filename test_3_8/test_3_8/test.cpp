#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//void myPrint(int val) {
//	cout << val << endl;
//}
//
//void test01() {
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
//		cout << *it << endl;
//	}
//	//for_each(v.begin(), v.end(), myPrint);
//}

//class Person {
//public:
//	Person(string name, int age) {
//		Name = name;
//		Age = age;
//	}
//
//	string Name;
//	int Age;
//};
//
//void myPrint(Person p) {
//	cout << p.Name << "   " << p.Age << endl;
//}
//
//void test02() {
//	vector<Person>v;
//	Person p1("a", 1);
//	Person p2("b", 2);
//	Person p3("c", 3);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	for_each(v.begin(), v.end(), myPrint);
//}

//void test03() {
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	for (vector<vector<int>>::iterator it = v.begin(); it < v.end(); it++) {
//		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++) {
//			cout << *vit << "  ";
//		}
//		cout << endl;
//	}
//}

//int main() {
//	//test01();
//	//test02();
//	//test03();
//
//	return 0;
//}

//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//void test01() {
	/*vector<int>v;
	v.reserve(100000);
	int* p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;*/

	/*cout << "容量：" << v.capacity() << endl;
	cout << "大小：" << v.size() << endl;
	v.resize(3);
	cout << "容量：" << v.capacity() << endl;
	cout << "大小：" << v.size() << endl;
	vector<int>(v).swap(v);
	cout << "容量：" << v.capacity() << endl;
	cout << "大小：" << v.size() << endl;*/

	//vector<int>v1, v2, v3, v4;
	//for (int i = 0; i < 10; i++) {
	//	v1.push_back(i);
	//}
	//v2.push_back(10);
	//printVector(v1);
	//printVector(v2);
	//swap(v1, v2);
	//// v1.swap(v2);
	//printVector(v1);
	//printVector(v2);

	/*for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << v1.front() << endl;
	cout << v1.back() << endl;*/

	/*printVector(v1);
	v1.pop_back();
	printVector(v1);
	v1.insert(v1.begin() + 4, 100);
	printVector(v1);
	v1.insert(v1.begin(), 3, 100);
	printVector(v1);
	v1.erase(v1.begin(), v1.end() - 1);
	printVector(v1);
	v1.clear();
	if (v1.empty()) {
		cout << "v1为空" << endl;
	}*/

	/*if (!v1.empty()) {
		printVector(v1);
		cout << "容量：" << v1.capacity() << endl;
		cout << "大小：" << v1.size() << endl;
	}
	v1.resize(15);
	printVector(v1);
	v1.resize(16, 100);
	printVector(v1);*/

	/*vector<int>v2(v1.begin(), v1.end());
	printVector(v2);*/

	/*vector<int>v3(10, 100);
	printVector(v3);*/

	/*vector<int>v4(v3);
	printVector(v4);*/

	/*v2 = v1;
	printVector(v2);*/

	/*v3.assign(v1.begin(), v1.end());
	printVector(v3);*/

	/*v4.assign(10, 100);
	printVector(v4);*/
//}

//int main() {
//	test01();
//
//	return 0;
//}