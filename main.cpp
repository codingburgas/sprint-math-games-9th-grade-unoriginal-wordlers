#include <iostream>
using namespace std;

void close(){
    cout << "Exiting....";
    exit;
    // незабавно затвяране на програмата 
}

void rules(){
    cout << R"(
    In Wordle, you have six attempts to guess a secret five-letter word. 
    After each guess, the tiles change color to provide feedback: 
    green means the letter is correct and in the right spot, 
    yellow means the letter is in the word but in the wrong spot, 
    and gray means the letter is not in the word at all. 
    Each guess must be a valid five-letter word.
    
    type "ok" to continue;
    )"
    cin >> int afterRules;
}

void Menu(){
    int choice;
    // "R()" е лесен начин да се въведе текст, ако е на няколко реда
    cout << R"( 

  --------------------------------------------------------------------
 |                         1. Start Game                              |
 |                         2. Rules                                   |
 |                         3. Exit                                    |
  --------------------------------------------------------------------

 Choose option: )";
    cin >> choice;
    switch(choice){
        case 1: "startGame();";
        break;
        case 2: "rules();";
        break;
        case 3: close();
        break;
        default:
        break;
    }
}

int main()
{
    Menu();
}