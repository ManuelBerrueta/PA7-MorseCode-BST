/*******************************************************************************
* Programmer: Manuel Berrueta                                                  *
* Class: CptS 122; Lab Section 6                                               *
* Programming Assignment: PA7 - English To Morse Code Converter using a BST    *
* Date: 3/23/2018                                                              *
*                                                                              *
* Description: This program loads the morse code alphabet from a .txt file and *
*              inserts it into a templated Binary Search Tree. Displays the    *
*              letters and the equivalent morse code for reference. It then    *
*              loads ascii strings from a different .txt file, both upper and  *
*              lower case and converts them to morse code and displays the     *
*              equivalent morse code to the screen                             *
*                                                                              *
********************************************************************************/

#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "BSTNode.h"

template<class C, class S>
class BST 
{
public:
	BST();
	bool isEmpty();
	void insert(C & englishChar, S & Morse);
	void loadMorseCode();
	void printInOrder();
	void EnglishToMorse(char &EnglishIn);

private:
	BSTNode<C,S> * pRoot;
	fstream fileWork;

	void insert(BSTNode<C, S> *& pTree, C & englishChar, S & Morse);
	void EnglishToMorse(BSTNode<C, S>* pTree, char &EnglishIn);
	void printInOrder(BSTNode<C, S> * pTree);
};

template <class C, class S>
BST<C, S>::BST()
{
	pRoot = nullptr;
	string tempstrEnglish;
	char tempEnglish = '\0';
	int index = 0;

	loadMorseCode();
	
	fileWork.open("Convert.txt", ios::in);

	while (getline(fileWork, tempstrEnglish))
	{
		/*Loop to changer each character to  
		  Uppercase & translate to Morse Code */
		while (index <= tempstrEnglish.length())
		{
			tempEnglish = tempstrEnglish[index];
			tempEnglish = toupper(tempEnglish);
			EnglishToMorse(tempEnglish);	
			index++;
		}
		cout << endl;
		index = 0;
	}
	fileWork.close();
}

template<class C, class S>
bool BST<C, S>::isEmpty()
{
	return pRoot == nullptr;
}

template<class C, class S>
void BST<C, S>::insert(C & EnglishChar, S & Morse)
{
	insert(pRoot, EnglishChar, Morse);
}

template<class C, class S>
void BST<C, S>::loadMorseCode()
{
	fileWork.open("MorseTable.txt", ios::in);
	string tempstrEnglish;
	char tempEnglish = '\0';
	string tempMorse;

	while (getline(fileWork, tempstrEnglish, ','))
	{
		tempEnglish = tempstrEnglish[0];
		getline(fileWork, tempMorse); 
		this->insert(tempEnglish, tempMorse);
	}
	fileWork.close();
	printInOrder();
}

template<class C, class S>
void BST<C, S>::printInOrder()
{
	printInOrder(pRoot);
}

template<class C, class S>
void BST<C, S>::EnglishToMorse(char &EnglishIn)
{
	EnglishToMorse(pRoot, EnglishIn);
}

template<class C, class S>
void BST<C, S>::EnglishToMorse(BSTNode<C, S> * pTree, char &EnglishIn)
{
	if (pTree == nullptr)
	{
		return;
	}
	else if (pTree->getnormEnglish() == EnglishIn)
	{
		cout << pTree->getstrMorse() << " ";
		return;
	}
	else {
		EnglishToMorse(pTree->getpLeft(), EnglishIn);
		EnglishToMorse(pTree->getpRight(), EnglishIn);
	}
}

template<class C, class S>
void BST<C, S>::insert(BSTNode<C, S> *& pTree, C & englishChar, S & Morse)
{
	if (pTree == nullptr)
	{
		pTree = new BSTNode<C, S>(englishChar, Morse);
	}
	else if (englishChar < pTree->getnormEnglish())
	{
		insert(pTree->getpLeft(), englishChar, Morse);
	}
	else if (englishChar > pTree->getnormEnglish())
	{
		insert(pTree->getpRight(), englishChar, Morse);
	}
	else 
	{
		//cout << "Duplicate Ignored" << endl;
	}
}

template<class C, class S>
void BST<C, S>::printInOrder(BSTNode<C, S> * pTree)
{
	if (pTree == nullptr) {
		return;
	}
	else {
		printInOrder(pTree->getpLeft());
		cout << pTree->getnormEnglish() << " " << pTree->getstrMorse ()<< endl;
		printInOrder(pTree->getpRight());
	}
}

////Overloaded operator to print tree //do I need a function
//template<class C, class S>
//fstream & operator<<(fstream & lhs, BST<C,S> * rhs) 
//{
//	lhs << rhs.pRoot->getnormEnglish() << " ";
//	lhs << rhs.pRoot->getstrMorse() << " ";
//	return lhs; // Don't forget to return lhs! This allows us to chain the operator
//}
