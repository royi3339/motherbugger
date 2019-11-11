#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;
class tree
{

	class DecisionTreeNode; //הצהרה

	class ValidAnswer
	{
	public:
		string ans;
		DecisionTreeNode* son;
	};

	class DecisionTreeNode
	{

	public:
		string value;
		bool isLeaf;
		list<ValidAnswer*> answersList;
		DecisionTreeNode()
		{
			value = "";
			isLeaf = true;
			answersList = { 0 };
		}

	};
public:
	DecisionTreeNode node;

	tree() 
	{
		node = NULL;
	
	}
	~tree();		//	to do ! ! !

};

