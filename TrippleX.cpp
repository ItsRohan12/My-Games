// Everthing is camel Capitalized For Using it Unreal Engine 4 Documention ,,,
#include <iostream>
#include <ctime>
using namespace std;
// This void will return the data that we need to increase game difficulty 
void IntroPrint(int Difficulty) 
{
    // This Will Print Introduction
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    // Difficulty is used to print the level from Loop:
    cout<< "\nWelcome to the hacking the server Level: "<< Difficulty;
    cout<< "\nYour a Secrete Hacker Breaking Into Secure Sever......\n";
    cout<< "You have to find 3 number in it.....\n";

}
 // To increase the game difficulty
bool PlayGame(int Difficulty)
{
    IntroPrint(Difficulty);

    // random is to import random number which will assign to difficulty return in void +!

    const int NumA = rand() % Difficulty + 1; 
    const int NumB = rand() % Difficulty + 1;
    const int NumC = rand() % Difficulty + 1;
    
    int CodeSum = NumA + NumB + NumC;
    int CodeProd = NumA * NumB * NumC;


    cout<<"\n+There are 3 numbers in code "<<"\n";
    cout<<"+The Numbers add-up to: "<<CodeSum;"\n";
    cout<<"\n+The Numbers multiply to give: "<<CodeProd;"\n";

    int GuessA, GuessB, GuessC;
    cout<<"\n\nEnter your Guess Number: ";
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    //  To check wheather the given element = to an declared Variables

    if (CodeSum == GuessSum && CodeProd == GuessProd)
    {
        cout<<"Access Granted! Keep Going!\n";
        cout << "Moving to next Level....\n";
        return true;                                                            
    }
    else
    {
        cout<<"You got Caught...Be Carefull Try Again!";
        return false;
    }
}

int main()
{  
    //For creating new random sequence
    srand(time(NULL));
    int DifficultyLevel = 1;
    const int MaxLevel = 6;

    // To Set the Level on desire MaxLevel
    while (DifficultyLevel <= MaxLevel)
    {   
        bool bLevelComplete = PlayGame(DifficultyLevel);
        // To Clear the errors 
        cin.clear(); 
        // This will ignore the input rather than integer 
        cin.ignore();
        // Also it will save from getting in endless loop lol

        if (bLevelComplete)
        {
            // For Incrementing the game difficultyLevel
            ++ DifficultyLevel;
        }
    }

     cout<<"\n\nWell Done You Cracked All The Server....\n";
     cout<<"Here is gift for you... Copy this Link\n";
     cout<<"-->>>> shorturl.at/fmHWX"; 

    return 0;
}
 
