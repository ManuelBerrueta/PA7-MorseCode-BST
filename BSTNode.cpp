#include "BSTNode.h"

//Default Constructor
template<class C, class S>
BSTNode<C, S>::BSTNode(C newEnglish, S newMorse)
{
	normEnglish = newEnglish;
	strMorse = newMorse;
	pRight = nullptr;
	pLeft = nullptr;
}

template<class C, class S>
C BSTNode<C,S>::getnormEnglish() 
{
	return normEnglish;
}


template<class C, class S>
S BSTNode<C, S>::getstrMorse() 
{
	return strMorse;
}


template<class C, class S>
BSTNode<C, S> *& BSTNode<C, S>::getpRight(void)
{
	return pRight;
}


template<class C, class S>
BSTNode<C, S> *& BSTNode<C, S>::getpLeft()
{
	return pLeft;
}

template<class C, class S>
void BSTNode<C, S>::printInOrder()
{
}

template<class C, class S>
void BSTNode<C, S>::searchEnglish()
{
}



//BSTNode *& BSTNode::getpRight()
//{
//	return pRight;
//}