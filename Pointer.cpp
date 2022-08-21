#include <iostream>
#include <cstring>

using namespace std;

// declare function for program
void reverseString(const char *charPointer);

int main()
{
    // initialize char pointer
    const char *charPointer = "John Doe";
    
    // output the original input
    cout << "The input is: \n" << charPointer << endl;
    
    // output the reversed input
    cout << "The input reversed is: " << endl;
    
    // call function
    reverseString(charPointer);
    
    // output the original input to show change
    cout << "\nThe original input: \n" << charPointer << endl;


    return 0;
}

void reverseString(const char *charPointer){
    
    // get length for string
    int length = strlen(charPointer);
    
    
    // using recursion if length hits zero, return the string reversed
    if (length == 0)
            return;
       
    // keep calling the function using recursion until the end of the string is reached 
    else
     { 
      reverseString(charPointer + 1); 
      cout << *charPointer; 
     } 
    
    
}
