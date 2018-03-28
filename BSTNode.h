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


	BSTNode *& getpRight();
	BSTNode *& getpLeft();
	
	void printInOrder();
	void searchEnglish();

private:
	C normEnglish[1];
	S strMorse;

	BSTNode *pRight;
	BSTNode *pLeft;
};