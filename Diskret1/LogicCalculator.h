#pragma once
#include<iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class LogicCalculator
{
private:
	const string expression;	
	string valGotExp;			
	int num;					
	vector<char> names;			
	bool calculate(int);		

	
	bool calculateExp();		
	bool calculateTerm();		
	bool calculatefactor();		
	void PrintExpression(bool flag); 

public:
	LogicCalculator(const string&);
	void printChart();			
	void printOrExpression();	
	void printAndExpression();	
};


