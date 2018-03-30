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

	void insert(C & englishChar, S & Morse);

	//print() recursively prints BST in order (left most printed first)
	//search() will return morse code for each English char

	//destructor that destroys the tree
	//~BST();

	void loadMorseCode();
	void printInOrder();
	void searchEnglish();

private:
	BSTNode<C,S> * pRoot;
	fstream fileWork;

	void insert(BSTNode<C, S> *& pTree, C & englishChar, S & Morse);
	void searchEnglish(BSTNode<C, S>* pTree);
	void printInOrder(BSTNode<C, S> * pTree);

};

template <class C, class S>
BST<C, S>::BST()
{
	pRoot = nullptr;
	//C TempEnglish;
	//S TempMorse;

	//BSTNode<C, S> *pTreeTemp = new BSTNode<C, S>(TempEnglish, TempMorse);
	loadMorseCode();
	//FILE
	/*fileWork.open("MorseTable.txt", ios::in);*/

}

template<class C, class S>
bool BST<C, S>::isEmpty()
{
	return pRoot == nullptr;
}

template<class C, class S>
void BST<C, S>::insert(C & englishChar, S & Morse)
{
	insert(pRoot, englishChar, Morse);
}

template<class C, class S>
void BST<C, S>::loadMorseCode()
{
	fileWork.open("MorseTable.txt", ios::in);
	string tempstrEnglish;
	char * tempEnglish;
	string tempMorse;
	//BSTNode<C, S> tempData(tempEnglish, tempMorse);

	//getline(fileHandle, tempStr);

	while (getline(fileWork, tempstrEnglish))
	{
		getline(fileWork, tempstrEnglish, ','); //might need to make english into a char?
		strcpy(tempEnglish, tempstrEnglish.c_str());
		getline(fileWork, tempMorse, ','); //might need to make morse into a string?
		BSTNode<C, S> tempData(tempEnglish, tempMorse);
		tempData(fileWork, tempMorse);
		//At the end of this loop
		this->insert(tempData);
	}
	fileWork.close();
}

template<class C, class S>
void BST<C, S>::printInOrder()
{
	printInOrder(pRoot);
}

template<class C, class S>
void BST<C, S>::searchEnglish()
{
	searchEnglish(pRoot);
}

template<class C, class S>
void BST<C, S>::searchEnglish(BSTNode<C, S> * pTree)
{
	if (pTree->getnormEnglish() == ) {
		cout << "Unknown Character" << endl;
		return;
	}
	else {
		inOrderPrint(pTree->getLeftPtr());
		cout << *pTree;
		inOrderPrint(pTree->getRightPtr());
	}

}

template<class C, class S>
void BST<C, S>::insert(BSTNode<C, S> *& pTree, C & englishChar, S & Morse)
{
	if (pTree == nullptr)
	{
		pTree = new BSTNode(englishChar, Morse);
	}
	else if (englishChar < pTree->getnormEnglish())
	{
		insert(pTree->getpLeft(), englishChar, Morse);
	}
	else if (englishChar > pTree->getData())
	{
		insert(pTree->getpRight(), englishChar, Morse);
	}
	else {
		cout << "Duplicate Ignored" << endl;
	}
}

template<class C, class S>
void BST<C, S>::printInOrder(BSTNode<C, S> * pTree)
{
	if (pTree == nullptr) {
		return;
	}
	else {
		inOrderPrint(pTree->getpLeft());
		cout << *pTree;
		inOrderPrint(pTree->getpRight());
	}
}
