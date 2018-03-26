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

class BSTNode
{
public:
	BSTNode(char newEnglish, string newMorse, BSTNode *newRight, BSTNode *newLeft);
	
	//Our Data is private so we need getters & setters
	char getnormEnglish()const;
	string getstrMorse()const;
	//


	BSTNode *& getpRight();
	BSTNode *& getpLeft();

private:
	char normEnglish[1];
	string strMorse;

	BSTNode *pRight;
	BSTNode *pLeft;
};