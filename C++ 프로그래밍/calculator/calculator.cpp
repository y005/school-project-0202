#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
#include "calculator.hpp"

Token::Token(char type) {
	this->type = type;
	this->value = 0;
}

Token::Token(int value) {
	this->type = '8';
	this->value = value;	
}

char Token::getType() {
	return type;
}

int Token::getValue() {
	return value;
}


double Calculator::expression()
{
	double value = term();
	if (tokens.size() > 0) {
		Token t = tokens.back();
		if (t.getType() == '+') {
			tokens.pop_back();
			value = expression() + value;
		} else if (t.getType() == '-') {
			tokens.pop_back();
			value = expression() - value;
		}
		else if ((depth == 0 && t.getType() == '(') || t.getType() != '(')
			throw badExpression();
	}
    return value;
}

double Calculator::term()
{
	double value = primary();
	if (tokens.size() > 0) {
		Token t = tokens.back();
		if (t.getType() == '*') {
			tokens.pop_back();
			value = term() * value;
		} else if (t.getType() == '/') {
			tokens.pop_back();
			value = term() / value;
		} else if ((t.getType() != '+' && t.getType() != '-' && t.getType() != '(') || (depth == 0 && t.getType() == '('))
			throw badTerm();
	}
    return value;
}

double Calculator::primary()
{
	double value;
	if (tokens.size() == 0)
		throw badPrimary();
	Token t = tokens.back();
	tokens.pop_back();
	if (t.getType() == ')') {
		depth++;
		value = expression();
		if (tokens.size() == 0)
			throw badPrimary();
		t = tokens.back();
		tokens.pop_back();
		if (t.getType() == '(')
			depth--;
		else
			throw badPrimary();
	} else if (t.getType() == '8') {
		value = t.getValue();
	} else
		throw badPrimary();
		
	return value;
}
 
Calculator::Calculator() {
	depth = 0;
}

void Calculator::getTokens(string line) 
{
	tokens.clear();
	string token = "";
	char t = '\0', prev;
	for (int i=0; i < line.length(); i++) {
		t = line[i];
		switch (t) {
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
				token += t;
				break;
			case '+': case '-': case '*': case '/': case '(': case ')':
				if (token != "") {
					stringstream ss(token);
					int n;
					ss >> n;
					tokens.push_back(Token(n));
					token = "";
				}				
				tokens.push_back(Token(t));
				break;
			case ' ':
				if (token != "") {
					stringstream ss(token);
					int n;
					ss >> n;
					tokens.push_back(Token(n));
					token = "";
				}
				break;
			default :
				throw badToken();
		}
	}
	if (token != "") {
		stringstream ss(token);
		int n;
		ss >> n;
		tokens.push_back(Token(n));
	}
}

