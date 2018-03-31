#include "BST.h"

int main(void)
{
	BST<char, string> MorseTree;
	fstream fileWork;
	/*
	loading morse list..template
	*/

	//fileWork.open("MorseTable.txt", ios::in);
	//string tempstrEnglish;
	//char * tempEnglish = nullptr;
	//string tempMorse;
	//BSTNode<C, S> tempData(tempEnglish, tempMorse);

	//getline(fileHandle, tempStr);

	//while (getline(fileWork, tempstrEnglish))
	//{
	//	getline(fileWork, tempstrEnglish, ','); //might need to make english into a char?
	//	//strcpy_s(tempEnglish, tempstrEnglish.c_str());
	//	getline(fileWork, tempMorse, ','); //might need to make morse into a string?
	//	//BSTNode<C, S> tempData(*tempEnglish, tempMorse);
	//	//tempData(tempEnglish, tempMorse);
	//	//At the end of this loop
	//	MorseTree.insert(*tempEnglish, tempMorse);//I need help with figuring our what to insert here
	//										  //It needs to be templated, yet I need to use get s to get it in
	//}
	//fileWork.close();

	////read file in
	//fileWork.open("Convert.txt", ios::in);
	//while (getline(fileWork, tempstrEnglish))
	//{
	//	getline(fileWork, tempstrEnglish, ','); //might need to make english into a char?
	//											//strcpy_s(tempEnglish, tempstrEnglish.c_str());
	//	getline(fileWork, tempMorse, ','); //might need to make morse into a string?
	//									   //BSTNode<C, S> tempData(*tempEnglish, tempMorse);
	//									   //tempData(tempEnglish, tempMorse);
	//									   //At the end of this loop
	//	MorseTree.insert(*tempEnglish, tempMorse);//I need help with figuring our what to insert here
	//											  //It needs to be templated, yet I need to use get s to get it in
	//}
	//fileWork.close();


	return 0;
}