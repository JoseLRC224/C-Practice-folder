#include <iostream>

using namespace std;


//types of variables
int integer = 0;
double decimals = 0.1;
char character = 'a';
string text = "Hello World!!";
bool binaryValue = true;




void types_of_variabls(){

    cout << "Types of variables" << endl;
    cout << endl;
    cout << "This is a int(integer number): " << integer << endl;
    cout << "This is a double(number with decimals): " << decimals << endl;
    cout << "This is a char(a single character): " << character << endl;
    cout << "This is a string(text): " << text << endl;
    cout << "This is a bool(boolean value true = 1, false = 0): " << binaryValue << endl;

};
    




int main(){


    types_of_variabls();  
        
    cout << "Press any key to finish..." << endl;
    cin.get();
    return 0;
}
