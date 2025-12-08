#include <iostream>
#include <string>

using namespace std;

string words[100] = {"apple", "bread", "chair", "dance","flame", "grape", "heart", "image", "juice","knife", "lemon", "mouse", "night", "ocean","paint", "queen", "river", "stone", "table","urban", "voice", "water", "hater", "youth","zebra", "angel", "basic", "candy", "dream","earth", "faith", "giant", "happy", "ideal","jelly", "kitty", "light", "magic", "photo","olive", "peace", "quick", "royal", "sweet","tiger", "union", "piano", "whale", "yield","racer", "blank", "cloud", "radar", "prize","frost", "globe", "honey", "rifle", "joker","knock", "laugh", "miner", "north", "orbit","scrap", "quest", "rider", "shiny", "track","under", "valid", "wings", "xerox", "young","skull", "aroma", "beach", "crown", "daisy","sneak", "madam", "funny", "hills", "stack","judge", "kneel", "lucky", "meter", "ninth","opera", "pride", "quiet", "round", "floss","vivid", "bloom", "crisp", "fable", "gleam","harsh"};

void close(){
    cout << "Exiting....";
    exit(1);
    // closing programme
}

// this function below starts Wordle
void startGame(){
    srand(time(NULL)); // it's necessary for random generating of a number:
    // srand sets a starting point for rand() to generate numbers
    // time counts seconds from 1st January, 1970y.
    // NULL means that the present time is needed
    // so, in together, this means we get a present time in seconds from very ago and, also, because time is in seconds, it is changing every second, so every run will generate random numbers
    
    string guess;
    int index = rand() % 100; // takes random int value from 0 to 99, then takes random word from the word list
    string secretWord = words[index];
    
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << " try, enter your word:" << endl;
        while (true){
            cin >> guess;
            if (guess.length() != 5){
                cout << "A 5 letter word is necessary" << endl;
                continue;
            }
            
            bool guessInArray = false;
            for (int i = 0; i < 100; i++) {
                if(guess == words[i]){
                    guessInArray = true;
                    break;
                }
            }
            if (guessInArray == true){
                break;
            }
            else{
                cout << "Your word is not in the word list" << endl;
                continue;
            }
            
        }
    
        if (secretWord == guess){
            cout << "Your word (" << guess << ") is correct!" << endl;
            exit(2);
        }
    
        for (int j = 0; j < 5; j++) {
            if (guess[j] == secretWord[j]){
                cout << j+1 << " letter is correct" << endl;
            }
            else{
                cout << j+1 << " letter is wrong" << endl;
            }
        }
    }
    cout << "You lost! The secret word was:" << endl << secretWord;
    exit(3);
}

// the main menu of the game
void menu(){
    int choice;
    // R"()" is a easy way to cout several rows of text
    cout << R"( 

  --------------------------------------------------------------------
 |                         1. Start Game                              |
 |                         2. Exit                                    |
  --------------------------------------------------------------------

 Choose option: )";
    cin >> choice;
    switch(choice){
        case 1: startGame();
        break;
        case 2: close();
        break;
        default:
        break;
    }
}

// main() calls out the main menu of the game
int main()
{
    menu();
}