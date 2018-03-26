#include "BSTNode.h"

//Default Constructor
BSTNode::BSTNode(char newEnglish, string newMorse, BSTNode * newRight, BSTNode * newLeft)
{
	normEnglish = newEnglish;
	strMorse = newMorse;
	pRight = nullptr;
	pLeft = nullptr;
}

char BSTNode::getnormEnglish() const
{
	return normEnglish;
}

string BSTNode::getstrMorse() const
{
	return strMorse;
}

BSTNode *& BSTNode::getpRight(void)
{
	return pRight;
}

BSTNode *& BSTNode::getpLeft()
{
	return pLeft;
}



//BSTNode *& BSTNode::getpRight()
//{
//	return pRight;
//}