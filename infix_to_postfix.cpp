#include <iostream>
#include <stack>
using namespace std;

bool precedence(char op1, char op2){
	string lvl1 = "*/";
	string lvl2 = "+-";
	if((lvl1.find(op1)!=string::npos) && (lvl2.find(op2)!=string::npos)){
		return true;
	}
	else if((lvl1.find(op2)!=string::npos) && (lvl2.find(op1)!=string::npos)){
		return false;
	}
	else if((lvl1.find(op1)!=string::npos) && (lvl1.find(op2)!=string::npos)){
		return true;
	}
	else{
		return false;
	}
}

string postfix(string input){
	stack<char> s;
	char e;
	int current = 0;
	string operators = "+-*/";
	string infix = "";
	while(current<input.length()){
		e = input[current];
		if(operators.find(e)!=string::npos){
			while(!s.empty() && precedence(s.top(), e)){
				infix += s.top();
				s.pop();
			}
			s.push(e);
		}
		else if(e == '('){
			s.push(e);
		}
		else if(e == ')'){
			while(!s.empty() && s.top()!='('){
				infix += s.top();
				s.pop();
			}
			s.pop();
		}
		else{
			infix += e;
		}
		current++;
	}
	while(!s.empty()){
		infix += s.top();
		s.pop();
	}
	return infix;
}

int main(){
    string tests[] = {
        "A+B",
        "A+B*C",
        "A*B+C",
        "A-B/C",
        "A*B/C",

        "(A+B)*C",
        "A*(B+C)",
        "(A+B)*(C-D)",
        "A+(B*C-D)",
        "((A+B)*C)-D",
    };

    for(int i = 0; i < 10; i++){
        cout << "\nTest " << i+1 << endl;
        cout << "Infix:   " << tests[i] << endl;
        cout << "Postfix: " << postfix(tests[i]) << endl;
    }
	return 0;
}

