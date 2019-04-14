#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int age;
    double hourly_pay;
};

int main()
{
    
    /* Create an array of 3 employees, and initialize to the following:
    "John", 34, 10.50
    "Jack", 40, 15.25
    "Mary", 26, 11.75
    
    Your code here:
    */
    
    Employee employees[3];
    
    //John's settings
    employees[0].name = "John";
    employees[0].age = 34;
    employees[0].hourly_pay = 10.50;
    
    //Jack's settings
    employees[1].name = "Jack";
    employees[1].age = 40;
    employees[1].hourly_pay = 15.25;
    
    //Mary's settings
    employees[2].name = "Mary";
    employees[2].age = 26;
    employees[2].hourly_pay = 11.75;
    
    // Write a loop to print the contents of the employee array.
    // Output should look like this:
    // John is 34 years old and makes $10.50 an hour.
    // Jack is 40 years old and makes $15.25 an hour.
    // Mary is 26 years old and makes $11.75 an hour.
    
    //Your code here:
    
    for(int i = 0; i < 3; i++)
    {
        cout << employees[i].name << " is " << employees[i].age << " years old and makes $" << employees[i].hourly_pay << " an hour." << endl;
    }
    
    // Dynamically allocate a second array of 3 employees and copy the contents
    // of the prior array to the newly allocated array.
    
    // Your code here:
    int size = 3;
    Employee a[size];
    Employee *ep = new Employee[size];
    
    int k;
    
    for(k = 0; k < size; k++)
    {
        a[k] = employees[k];
    }
    
    for(int j = size - 1; j >= 0; j--)
    {
        cout << a[j].name << " is " << a[j].age << " years old and makes $" << a[j].hourly_pay << " an hour." << endl;
    }
    
    return 0;
}