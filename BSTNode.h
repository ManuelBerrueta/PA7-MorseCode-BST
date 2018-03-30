#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

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
	
	//Our Data is private so we need getters & setters
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
