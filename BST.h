#pragma once

#include "BSTNode.h"

template<class C, class S>
class BST 
{
public:
	//Constructor must open, read "MorseTable.txt", creat nodes for ea char insert nodes into tree
	//using insert function, close the file
	BST();

	bool isEmpty();

	//print() recursively prints BST in order (left most pritnted first)
	//search() will return morse code for each English char

	//destructor that destroys the tree
	//~BST();


private:
	BSTNode<C,S> * pRoot;
	//void insert(BSTNode *& pTree, const string & info);
	fstream fileWork;

};
