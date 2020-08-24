#include<iostream>
#include<vector>
using namespace std;
#include "calculator.hpp"

int main()
{
	double val = 0;
	string line;
	while (true) {
		try {
			Calculator cal;
			getline(cin, line);
			if (line == "q") break;
			cal.getTokens(line);
			cout << cal.expression() << endl;
		}
		catch (badToken&) {
			cout << "bad token:" << line << endl;
		}
		catch (badExpression&) {
			cout << "bad expression:" << line << endl;
		}
		catch (badTerm&) {
			cout << "bad term:" << line << endl;
		}
		catch (badPrimary&) {
			cout << "bad primary:" << line << endl;
		}
	}
}

