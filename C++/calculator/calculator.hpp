class badPrimary {};
class badTerm {};
class badExpression {};
class badToken {};

class Token {
	int value;
	char type;
public :
	Token(char type);
	Token(int value);
	char getType();
	int getValue();
};

class Calculator {
	int depth;
	vector<Token> tokens;
	double term();
	double primary();
public :
	Calculator();
	double expression();
	void getTokens(string line); 
};

