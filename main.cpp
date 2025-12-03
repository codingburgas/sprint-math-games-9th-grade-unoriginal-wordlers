#include <iostream>#include <string>
using namespace std;
string words["apple", "bread", "chair", "dance",
        "flame", "grape", "heart", "image", "juice",
        "knife", "lemon", "mouse", "night", "ocean",
        "paint", "queen", "river", "stone", "table",
        "urban", "voice", "water", "hater", "youth",
        "zebra", "angel", "basic", "candy", "dream",
        "earth", "faith", "giant", "happy", "ideal",
        "jelly", "kitty", "light", "magic", "photo",
        "olive", "peace", "quick", "royal", "sweet",
        "tiger", "union", "piano", "whale", "yield",
        "racer", "blank", "cloud", "radar", "prize",
        "frost", "globe", "honey", "rifle", "joker",
        "knock", "laugh", "miner", "north", "orbit",
        "scrap", "quest", "rider", "shiny", "track",
        "under", "valid", "wings", "xerox", "young",
        "skull", "aroma", "beach", "crown", "daisy",
        "sneak", "madam", "funny", "hills", "stack",
        "judge", "kneel", "lucky", "meter", "ninth",
        "opera", "pride", "quiet", "round", "floss"];



void close(){
    cout << "Exiting....";
    exit;
    // незабавно затвяране на програмата 
}

void startGame(){
    string guess;
    int index = rand() % 94;
    string randomWord = words[index];
    
    cout << "First try, enter your word:" << endl;
    cin >> guess;
    
    for (int i = 0; i < 5; i++){
        char guessLetter = guess[i]; // променливата guessLetter взима стойноста на буквата на думата
    }
}


void menu(){
    int choice;
    // R"()" е лесен начин да се въведе текст, ако е на няколко реда
    cout << R"( 

  --------------------------------------------------------------------
 |                         1. Start Game                              |
 |                         2. Exit                                    |
  --------------------------------------------------------------------

 Choose option: )";
    cin >> choice;
    switch(choice){
        case 1: "startGame();";
        break;
        case 2: close();
        break;
        default:
        break;
    }
}

int main()
{
    menu();
}