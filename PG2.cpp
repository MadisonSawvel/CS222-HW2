
//Madison Sawvel

#include <iostream>
#include <string>
#include <cstdlib>
#include "PG2.h"
#include "LL.h"

using namespace std;

int main(int argc, char** argv) {
	LL* list = new LL();
	while (true) {
		string d;
		getline(cin, d);
		if (d == "") break;
		list->add(d);
	}
	list->shellsort();
	list->print();

	delete list;
	return 0;
}

LLN * rejoin(LLN** arr, int len, int wh, LLN* l) {
	/*rejoin takes the lists in arr (whose length is len) and appends them to the beginning of list l.
	wh indicated the postition within arr the element that needs to be the 
	first one attached to l.*/


	//rejoin moves first node from arr[wh] to the front of l list

	//then is recursively moves all other nodes from arr to l list

	//l = rejoin(arr, len, wh-1, l);

	//Then returns l list after the l list has been completed
	return l;
	//If a node is moved from arr[wh] the next one has to be moved from arr[wh-1], then arr[wh-2], and so forth
	//REMEMBER: wrap back to the end of arr once you get to zero
	//In the end, all the nodes should be reuinted within a single linked list



	//At no time, should you create/destroy/modify the data of nodes. Only change pointers
	//All methods should be recursive, no loops allowed
	//If your method returns something, be sure that there in no way to leave the method without returning that thing
	//If your method calls a method, recursively or otherwise, then use the thing that is returned.


	
}