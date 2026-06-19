#include <iostream>
#include <stack>

// why use a stack? it keeps the order that we added the elements in, we could
// also use any other struct that supports top/front, pop and push
// basically we just check that for every element that we read, it either is an
// openning brack/parenthesis or either is closing the last one opened, a.k.a.
// stack top, if stack size != 0 at the end, we have leftover brackets
using namespace std;
bool isValid(string s) {
  stack<char> validator;

  for (int i = 0; i < int(s.size()); i++) {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
      validator.push(s[i]);
    } else if (validator.empty()) {
      return false;
    } else if (s[i] == ')' && validator.top() != '(') {
      return false;
    } else if (s[i] == '}' && validator.top() != '{') {
      return false;
    } else if (s[i] == ']' && validator.top() != '[') {
      return false;
    } else {
      validator.pop();
    }
  }
  if (validator.size() != 0) {
    return false;
  } else {
    return true;
  }
}

int main() {
  cout << isValid("()") << endl;
  cout << isValid("()[]{}") << endl;
  cout << isValid("([])") << endl;
  cout << isValid("([)]") << endl;
  cout << isValid("([]") << endl;
  cout << isValid("(") << endl;
  cout << isValid(")") << endl;
}
