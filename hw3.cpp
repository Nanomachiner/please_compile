#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

bool is_operator(int c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int main()
{
    
    char c;
    
    // Declare three stacks of char, stk1, stk2, stk3.
    
    stack<char> stk1;
    stack<char> stk2;
    stack<char> stk3;
    
    cout << "Enter infix expression: ";
    
    while (cin >> c) // Read a character at a time from the keyboard. End when user enters CTL - D on the next line.
    {
        // If c is not ')', push c onto stk1.
        if (c != ')')
        {
            stk1.push(c);
        }
        
    }
    
    while ( ! stk1.empty() ) // As long as stk1 is not empty
    {
        char c;
        
        // Save the character at the top of stk1 in c and pop stk1.
        
        c = stk1.top();
        stk1.pop();
        
        // If c is a lower case alphabetic character (a through z), push c onto stk3.
        // Else if c is an operator, push c onto stk2.
        // Else if c is '(' push the character at the top of stk2 onto stk3 and pop stk2.
        
        if (islower(c))
        {
            stk3.push(c);
        }
        else if(is_operator(c))
        {
            stk2.push(c);
        }
        else if(c == '(')
        {
            stk3.push(stk2.top());
            stk2.pop();
        }
        
        
    }
    
    
    cout << "\n Equivalent prefix expression is: ";
    
    //While stk3 is not empty, send the character at the top of stk3 to cout and pop stk3.
    
    while(!stk3.empty())
    {
        cout << stk3.top() << " ";
        stk3.pop();
    }
    
    return EXIT_SUCCESS;
}
    