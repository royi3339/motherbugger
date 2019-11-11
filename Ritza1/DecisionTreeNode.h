#pragma once
#include <iostream>
#include <list>

class DecisionTreeNode
{
public:
	string value;
	bool isLeaf;
	list<ValidAnswer*> answersList;
	DecisionTreeNode();

};

