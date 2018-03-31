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

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using std::ifstream;
using std::ofstream;
using std::fstream;
using std::string;
using std::ios;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::stoi;

template<class C, class S>
class BSTNode
{
public:
	BSTNode(C newEnglish, S newMorse);
	
	C getnormEnglish();
	S getstrMorse();

	void setEnglish(C newEnglish);
	void setMorse(S newMorse);

	BSTNode *& getpRight();
	BSTNode *& getpLeft();

private:
	C normEnglish;
	S strMorse;
	BSTNode *pRight;
	BSTNode *pLeft;
};


//Default Constructor
template<class C, class S>
BSTNode<C, S>::BSTNode(C newEnglish, S newMorse)
{
	normEnglish = newEnglish;
	strMorse = newMorse;
	this->pRight = nullptr;
	this->pLeft = nullptr;
}

template<class C, class S>
C BSTNode<C, S>::getnormEnglish()
{
	return normEnglish;
}

template<class C, class S>
S BSTNode<C, S>::getstrMorse()
{
	return strMorse;
}

template<class C, class S>
void BSTNode<C, S>::setEnglish(C newEnglish)
{
	this->normEnglish = newEnglish;
}

template<class C, class S>
void BSTNode<C, S>::setMorse(S newMorse)
{
	this->strMorse = newMorse;
}

template<class C, class S>
BSTNode<C, S> *& BSTNode<C, S>::getpRight()
{
	return pRight;
}

template<class C, class S>
BSTNode<C, S> *& BSTNode<C, S>::getpLeft()
{
	return pLeft;
}
