/*
* Ernest Ho - this C++ code expands certain abbreviations/lingo (ex: BFF, TMI, etc.)
*  The program asks for a sentence to be inputted and it will output
*  the sentence with expanded abbreviations.
*/


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () {
    
    string userInput;
    unsigned int userAb1 = 0; //new
    unsigned int userAb2 = 0;
    unsigned int userAb3 = 0;
    unsigned int userAb4 = 0;
    unsigned int userAb5 = 0;

    
    
    cout << "Enter text: " << endl;
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;
    
    // Top is good
    
    userAb1 = userInput.find("BFF");
    while (userInput.find("BFF") != string::npos) {
        userInput.replace(userAb1, 3, "best friend forever");
        userAb1 = userInput.find("BFF");
    }
    
    
    userAb2 = userInput.find("IDK");
    while (userInput.find("IDK") != string::npos) {
        userInput.replace(userAb2, 3, "I don't know");
        userAb2 = userInput.find("IDK");
    }
    
    userAb3 = userInput.find("JK");
    while (userInput.find("JK") != string::npos) {
        userInput.replace(userAb3, 2, "just kidding");
        userAb3 = userInput.find("JK");
    }
    
    userAb4 = userInput.find("TMI");
    while (userInput.find("TMI") != string::npos) {
        userInput.replace(userAb4, 3, "too much information");
        userAb4 = userInput.find("TMI");
    }
    
    userAb5 = userInput.find("TTYL");
    while (userInput.find("TTYL") != string::npos) {
        userInput.replace(userAb5, 4, "talk to you later");
        userAb5 = userInput.find("TTYL");
    }

        
        cout << "Expanded: " << userInput << endl;
        
    
    
    
    return 0;
}