#include"TXL.h"

int isExist(ABS *abs,string name) {
	for (int i = 0; i < abs->count; i++) {
		if (abs->parray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void addPerson(ABS *abs) {
	if (abs->count == MAX) {
		cout << "通讯录已满,无法添加！" << endl;
		return;
	}
	else {
		cout << "请输入姓名：" << endl;
		cin >> abs->parray[abs->count].name;
		cout << "请输入性别：" << endl;
		cin >> abs->parray[abs->count].sex;
		cout << "请输入年龄：" << endl;
		cin >> abs->parray[abs->count].age;
		cout << "请输入电话：" << endl;
		cin >> abs->parray[abs->count].phone;
		abs->count++;
		cout << "添加成功!" << endl;
		cout << endl;
	}
}

void showPerson(ABS* abs) {
	if (abs->count == 0) {
		cout << "联系人为空，请添加联系人！" << endl;
	}
	else {
		for (int i = 0; i < abs->count; i++) {
			cout << "姓名：" << abs->parray[i].name<< "\t";
			cout << "性别：" << abs->parray[i].sex << "\t";
			cout << "年龄：" << abs->parray[i].age << "\t";
			cout << "电话：" << abs->parray[i].phone << endl;
		}
		cout << endl;
	}
}

void deletePerson(ABS* abs) {
	string name;
	cout << "请输入要删除的人：" << endl;
	cin >> name;
	if (isExist(abs, name) == -1) {
		cout << "查无此人！" << endl;
		cout << endl;
		return;
	}
	else {
		for (int i = isExist(abs, name); i < abs->count; i++) {
			abs->parray[i].name = abs->parray[i + 1].name;
			abs->parray[i].sex = abs->parray[i + 1].sex;
			abs->parray[i].age = abs->parray[i + 1].age;
			abs->parray[i].phone = abs->parray[i + 1].phone;
		}
		abs->count--;
		cout << "删除成功！" << endl;
		showPerson(abs);
		cout << endl;
	}

}

void findPerson(ABS* abs) {
	string name;
	cout << "请输入要查找的人：" << endl;
	cin >> name;
	if (isExist(abs, name) == -1) {
		cout << "查无此人！" << endl;
		cout << endl;
		return;
	}
	else {
		int ret = isExist(abs, name);
		cout << "姓名：" << abs->parray[ret].name << "\t";
		cout << "性别：" << abs->parray[ret].sex << "\t";
		cout << "年龄：" << abs->parray[ret].age << "\t";
		cout << "电话：" << abs->parray[ret].phone << endl;
		cout << endl;
	}
}

void modifyPerson(ABS* abs) {
	string name;
	cout << "请输入要修改的人：" << endl;
	cin >> name;
	if (isExist(abs, name) == -1) {
		cout << "查无此人！" << endl;
		cout << endl;
		return;
	}
	else {
		int ret = isExist(abs, name);
		cout << "请输入姓名：" << endl;
		cin >> abs->parray[ret].name;
		cout << "请输入性别：" << endl;
		cin >> abs->parray[ret].sex;
		cout << "请输入年龄：" << endl;
		cin >> abs->parray[ret].age;
		cout << "请输入电话：" << endl;
		cin >> abs->parray[ret].phone;
		cout << "修改成功！" << endl;
		showPerson(abs);
		cout << endl;
	}
}