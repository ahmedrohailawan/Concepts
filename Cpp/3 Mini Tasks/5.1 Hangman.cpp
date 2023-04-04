#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<ctime>
using namespace std;

//function for displaying Hangman
void HangMan(int tries)
{
	cout << endl << endl;
	cout << "  -----" << endl;
	cout << "  |   |" << endl;
	cout << "  |"; if (tries <  3) cout << "   O    "; cout << endl;
	cout << "  |"; if (tries <= 2) cout << "  /|\\   "; cout << endl;
	cout << "  |"; if (tries <= 1) cout << "  / \\    "; cout << endl;
	cout << "  |" << endl;
	cout << "__|__" << endl;
}

int main()
{
	
	srand(time(0));  //seeding time into rand function

	//Below string array stores the list of countries to be guessed by the user
	//Program chooses one element using rand function
	string wordList[10] =
	{
		"pakistan",
		"turkey",
		"azerbaijan",
		"malaysia",
		"bangladesh",
		"australia",
		"iran",
		"japan",
		"oman",
		"iraq"
	};

	string word;  //randomly chosen country name is stored here
	string guessed;  //Already guessed letters are stored here

	word = wordList[rand() % 10]; //randomly chosen name is being assigned

	int wordLength = word.length();  //assigning length of secret name to variable
	string dispWord(wordLength, 'X');  //function to display multiple characters

	int found = 0; //variable to store the number of letters found by user
	char guess = ' '; //variable to store the input letter by the user
	int tries = 3; //number of total tries
	int flagFound = 0; //variable for identifing if the user entered wrong input

	while (tries >= 0) //loop will only run if there are enough tries left
	{
		system("cls"); //for clearing the screen
		cout<<"\n\t\t\t------------------------";		
		cout <<"\n\t\t\tWelcome to Hangman Game\n";
		cout<<"\t\t\t------------------------";
		cout<<"\nRules";
		cout<<"\n-----";
		cout<<"\nchoose a correct Country Name Or Else The Poor Guy Will Die :(" << endl;
		cout<<"\n--------------------------------------------------------------\n";
		cout<<"\t\t<<<<< Options >>>>>\n";
		cout<<"1 = Pakistan"<<"\t\t\t\t2 = Turkey\n"<<"3 = Tazerbaijan"<<"\t\t\t\t4 = Malaysia\n"<<"5 = Bangladesh"<<"\t\t\t\t6 = Australia\n"<<"7 = Iran"<<"\t\t\t\t8 = Japan\n"<<"9 = Oman"<<"\t\t\t\t10 = Iraq\n";
		cout<< endl << " Guess name : ";		
		//loop for displaying the secret name in hidden form e.g "xxxx"
		for (int i = 0; i < wordLength; i++)
		{
			cout << " " << dispWord[i];
		}
		cout << endl << endl << endl;

		cout << "Wrong Attempts: " << tries << " / " << 3 << endl;
		cout << "Already Guessed Letters: " << guessed << endl;
		HangMan(tries); //calling the Hangman diplaying function

		//if statement if the user wins
		if (found == wordLength)
		{
			cout << endl;
			cout << "\t\t\t*****************" << endl;
			cout << "\t\t\t**** You Win ****" << endl;
			cout << "\t\t\t*****************\n" << endl;
			break;
		}

		//if no tries left, the while loop will break
		if (tries == 0)
		{
			break;
		}

		cout << "Country name ";
		guess = _getche(); //fetching chracter while displaying it

		//adding the chracters already gussed by the user
		guessed = guessed + " " + guess;

		//identifying wether the guess of the user is true or not
		if (dispWord.find(guess) != string::npos)
		{
			tries++;
		}

		flagFound = 0; //reseting the identifier

		//loop will run if the guess is not already guessed by the user
		for (int i = 0; i < wordLength; i++)
		{
			if (word[i] == guess && dispWord[i] == 'X')
			{
				dispWord[i] = guess;
				found++;
				flagFound = 1;
			}
		}

		//statment to minus the tries if the guess was wrong
		if (!flagFound)
		{
			tries--;
		}
	}//while loop ends here

	//display in case the user fails all the tries
	if (found != wordLength)
	{
		cout << endl;
		cout << "\t\t\t************************" << endl;
		cout << "\t\t\t******* You Lose *******" << endl;
		cout << "\t\t\t*  Please Try Again :( *" << endl;
		cout << "\t\t\t************************\n" << endl;
	}

	cout<<"Press 0 to exit , 1 to Continue...........";
	int z;
	cin>>z;
	if (z==0){
	return 0;
}
else 
main();
}
