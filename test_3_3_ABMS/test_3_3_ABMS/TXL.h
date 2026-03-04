#pragma once
#include<iostream>
#include<string>
using namespace std;
#define MAX 100 

typedef struct Person {
	string name;
	string sex;
	int age;
	string phone;
}P;

typedef struct Addressbooks {
	P parray[MAX];
	int count = 0;
}ABS;

void addPerson(ABS *abs);

void showPerson(ABS *abs);

void deletePerson(ABS *abs);

void findPerson(ABS *abs);

void modifyPerson(ABS *abs);
