#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<numeric>
using namespace std;

void Myprint(int v) {
	cout << v << " ";
}

bool Greater(int v) {
	return v>5;
}

//random_shuffle/merge/copy/replace/replace_if
//accumulate/fill
//set_intersection/set_union/set_difference
void test01() {
	vector<int>v1, v2, v3, v4;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 2);
	}
	//v3.resize(10);
	/*v1.push_back(1);
	for_each(v1.begin(), v1.end(), Myprint);
	cout << endl;*/

	//random_shuffle(v1.begin(), v1.end());

	//v3.resize(v1.size() + v2.size());
	//merge(v1.begin(), v1.end(), v2.begin(), v2.end(),v3.begin());

	//copy(v1.begin(), v1.end(), v2.begin());

	//replace(v1.begin(), v1.end(), 1, 10);

	//replace_if(v1.begin(), v1.end(), Greater, 0);

	//int total = accumulate(v1.begin(), v1.end(), 0);
	//cout << total << endl;

	//fill(v3.begin(), v3.end(), 100);
	//for_each(v1.begin(),v1.end(), Myprint);

	//v3.resize(min(v1.size(), v2.size()));
	//vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//v3.resize(v1.size() + v2.size());
	//vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	/*v3.resize(max(v1.size(), v2.size()));
	v4.resize(max(v1.size(), v2.size()));
	vector<int>::iterator it1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	vector<int>::iterator it2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());
	for_each(v3.begin(), it1, Myprint);
	cout << endl;
	for_each(v4.begin(), it2, Myprint);*/
}

int main() {
	srand((unsigned int)time(NULL));
	test01();

	return 0;
}