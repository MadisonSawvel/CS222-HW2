

//Madison Sawvel 

#include <iostream>
#include <string>
#include<cstdlib>
#include "LLN.h"

using namespace std;

LLN::LLN(string d, LLN* n) {
	data = d;
	next = n;
}
LLN::~LLN() {
	//delete next;
}
void LLN::print() {
	cout << data << endl;
	if (next) next->print();
}
int LLN::ct() {
	if (!next) return 1;
	return 1 + next->ct();
}
void LLN::split(LLN **arr, int len, int wh) { 
	bool loopFlag = false; //loopflag checks if list loops back to [0]
	if (next) next->split(arr, len, wh + 1);
	if (len - wh > len - 1) {
		loopFlag = true;
		wh = len;
	}
	if (!loopFlag) {
		arr[len - wh] = this;
		arr[len - wh]->setnext(nullptr);
	}
	else {
		LLN* temp = arr[len - wh];
		arr[len - wh] = this;
		arr[len - wh]->setnext(temp);
	}
		
}
LLN* LLN::mildsort() {
	/*
	* Looking at mildsort, when you swap the first two nodes, you have the right idea, 
	but once you issue this->setnext, next->next isn't the same it was before; you've cut off that part of the list.
	*/

	if (!next) return this;
	if (next) {
		next = next->mildsort();
		if (this->getdata() > next->getdata()) {

			this->setnext(next->next);
			//next->setnext(this);
			//next->setnext(next);
			
			
			
			return this;
		}
		else {
			return this;
		}
	}
}
string LLN::getdata() {
	return data;
}
LLN* LLN::getnext() {
	return next;
}
void LLN::setnext(LLN* n) {
	next = n;
}
/*
To fix:
mildsort - 
If you don't have to swap, what should you return?
If you do have to swap, just make the two or three pointer assigments you need to make manually.  THEN what do you return?

rejoin -
complete


*/