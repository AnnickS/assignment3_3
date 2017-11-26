//============================================================================
// Name        : assignment3_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main() {
	LinkedStack<int> numberOne;
	LinkedStack<int> numberTwo;
	LinkedStack<int> total;

	char a;
	int num;
	string num1;
	string num2;
	cout<<"Enter a very large number: ";
	cin>>num1;
	for(int i = 0; i < num1.length(); i++){
		a = num1[i];
		num = a-'0';
		numberOne.push(num);
	}

	cout<<"Enter a very large number: ";
	cin>>num2;
	for(int i = 0; i < num2.length(); i++){
		a = num2[i];
		num = a-'0';
		numberTwo.push(num);
	}
	int one;
	int two;
	int extra = 0;

	while((!numberOne.isEmpty()) || (!numberTwo.isEmpty())){
		if(!numberOne.isEmpty()){
			one = numberOne.pop();
		}
		else
			one = 0;
		if(!numberTwo.isEmpty()){
			two = numberTwo.pop();
		}
		else
			two = 0;
		total.push((one+two+extra)%10);
		extra = (one+two+extra)/10;
	}

	cout<<"sum=";

	while(!total.isEmpty()){
		cout<<total.pop();
	}

	delete numberOne;
	delete numberTwo;
	delete total;

	return 0;
}
