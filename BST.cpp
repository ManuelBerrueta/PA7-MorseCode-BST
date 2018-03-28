#include "BST.h"

template <class T, class S>
BST<T, S>::BST()
{
	pRoot = nullptr;



	//FILE
	fileWork.open();
}

template<class T, class S>
bool BST<T, S>::isEmpty()
{
	return pRoot == nullptr;
}