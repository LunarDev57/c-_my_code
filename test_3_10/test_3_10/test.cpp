#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<map>
#include<algorithm>
using namespace std;

//员工分组
//class Worker {
//public:
//	string Name;
//	int Salary;
//};
//
//void createWorker(vector<Worker>& v) {
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++) {
//		Worker w;
//	    w.Name = "员工";
//		w.Name += nameSeed[i];
//		w.Salary = rand() % 10001 + 8000;
//		v.push_back(w);
//	}
//}
//
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
//	for (vector<Worker>::iterator vit = v.begin(); vit != v.end(); vit++) {
//		int deptId = rand() % 3;
//		m.insert(make_pair(deptId, *vit));
//	}
//}
//
//void Myprint(multimap<int, Worker>& m) {
//	string nameSeed = "ABC";
//	for (int i = 0; i < 3; i++) {
//		string deptId ="部门";
//		deptId += nameSeed[i];
//		deptId += ":";
//		cout << deptId << endl;
//		multimap<int, Worker>::iterator pos = m.find(i);
//		int count = m.count(i);
//		if (count == 0) {
//			cout << "无员工" << endl;
//			cout << endl;
//			continue;
//		}
//		for (int index = 0; pos != m.end() && index < count; pos++, index++) {
//			cout << "姓名:" << pos->second.Name << "   工资:" << pos->second.Salary << endl;
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	vector<Worker>v;
//	createWorker(v);
//	multimap<int, Worker>m;
//	setGroup(v, m);
//	Myprint(m);
//
//	return 0;
//}

//for_each/find/adjacent_find/binary_search/count/count_if
//void Myprint(int v) {
//	cout << v << endl;
//}

//bool Greater(int v) {
//	return v > 5;
//}

//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	v.push_back(9);
//	//for_each(v.begin(), v.end(), Myprint);
//	//vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	//vector<int>::iterator it = find_if(v.begin(), v.end(), Greater);
//	//vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	/*if (it == v.end())
//		cout << "没有找到" << endl;
//	else
//		cout << *it << endl;*/
//
//	/*bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//		cout << ret << endl;
//	else
//		cout << "没找到" << endl;*/
//
//	//int num = count(v.begin(),v.end(),9);
//	int num = count_if(v.begin(), v.end(), Greater);
//	cout << num << endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}