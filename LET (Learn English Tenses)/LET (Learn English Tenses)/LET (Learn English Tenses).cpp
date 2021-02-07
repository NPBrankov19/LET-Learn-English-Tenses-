#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <Windows.h>
#include <stdlib.h>
using namespace std;
int points = 0;
void displayLogo()
{
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\n\n\n\t\t\t\t|\t\t\t|-------------\t\t-------------");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|-------------\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|\t\t\t|\t\t\t      |");
	printf("\n\t\t\t\t|___________\t        |-------------\t\t      |");
}
void displayStartPage()
{
	displayLogo();
	printf("\n\n\n");
	for (int i = 0; i < 120; i++)
	{
		cout << "_";
		Sleep(15);
	}
	printf("\n\n\n\t\t    Enter 1 To Practise English Tenses\t\t     Enter 2 To Play Guess The Word");
	printf("\n\n\n\t\t\t\t\t\t     Enter Your Choice: ");
}
void displayMenu()
{
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\n\t\t\t\t  _________________________________________________________");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t    Menu\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 1 to practise Present Simple Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 2 to practise Present Continuous Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 3 to practise Past Simple Tense\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 4 to practise Past Continuous Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 5 to practise Present Perfect Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  Enter 6 to practise Future Simple Tense\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\n\n\t\t\t\t\t\t\tYour Choice: ");
}
void displayTheDeadBoyHead()
{
	printf("\n\n\t\t\t\t\t\t\t  _");
	printf("\n\t\t\t\t\t\t\t / \\");
	printf("\n\t\t\t\t\t\t\t/   \\");
	printf("\n\t\t\t\t\t\t       |     |");
	printf("\n\t\t\t\t\t\t       |     |");
	printf("\n\t\t\t\t\t\t        \\   /");
	printf("\n\t\t\t\t\t\t         \\_/");
}
void displayTheDeadBoyBody()
{
	printf("\n\t\t\t\t\t\t\t  |");
	printf("\n\t\t\t\t\t\t\t /|\\");
	printf("\n\t\t\t\t\t\t\t/ | \\");
	printf("\n\t\t\t\t\t\t       /  |  \\");
	printf("\n\t\t\t\t\t\t      /   |   \\");
	printf("\n\t\t\t\t\t\t     /    |    \\");
	printf("\n\t\t\t\t\t\t\t  |");

}
void displayTheDeadBoyLegs()
{
	printf("\n\t\t\t\t\t\t\t / \\");
	printf("\n\t\t\t\t\t\t\t/   \\");
	printf("\n\t\t\t\t\t\t       /     \\");
	printf("\n\t\t\t\t\t\t      /       \\");
	printf("\n\t\t\t\t\t\t     /         \\");
}
void playGuessTheWord()
{
	string wordList[50] = { "resource","pleasant","champion","necklace","offender","overlook","creation","cemetery","marriage",
	"solution","skeleton","stunning","contrast","register","function","midnight","resident","movement","overview","positive",
	"ceremony","sunshine","building","dressing","mushroom","position","minimize","detector","cupboard" };
	string choice;
	int counter = 0;
	unsigned int theIndexOfTheWord = rand() % 29;
	string theWord = wordList[theIndexOfTheWord];
	do
	{
		srand(time(0));
		unsigned int theIndexOfTheWord = rand() % 29;
		string theWord = wordList[theIndexOfTheWord];
		string choice, resume;
		for (size_t i = 0; i < theWord.length(); ++i)
		{
			if (theWord[i] == 'a' || theWord[i] == 'e' || theWord[i] == 'i' ||
				theWord[i] == 'o' || theWord[i] == 'u')
			{
				theWord[i] = '_';
			}
		}
		system("cls");
		printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
		printf("\n\n\n\n\n\n\n\n\n\t\t______________________");
		printf("\n\t\t|\t\t     |");
		printf("\n\t\t|\t\t     |");
		cout << "\n\t\t|     " << theWord << "       |";
		printf("\n\t\t|\t\t     |");
		printf("\n\t\t|____________________|");
		printf("\n\n\n\n\t\tEnter The Word: ");
		getline(cin, choice);
		if (choice != wordList[theIndexOfTheWord])
		{
			counter++;
		}
		else
		{
			points++;
		}
		if (counter == 1)
		{
			counter++;
			system("cls");
			displayTheDeadBoyHead();
			printf("\n\n\tPress Enter To Continue: ");
			getline(cin, resume);
		}
		else if (counter == 3)
		{
			counter++;
			system("cls");
			displayTheDeadBoyHead();
			displayTheDeadBoyBody();
			printf("\n\n\tPress Enter To Continue: ");
			getline(cin, resume);
		}
		else if (counter == 5)
		{
			system("cls");
			displayTheDeadBoyHead();
			displayTheDeadBoyBody();
			displayTheDeadBoyLegs();
			printf("\n\n\tPress Enter To Continue: ");
			getline(cin, resume);
			break;
		}
	} while (choice != theWord);
	//pravq gi prez dve zashtoto ako ne to ostava 1,2,3 dokato ne napravq greshka i vinagi shte izkarva dadenata funkciq!!!!!
}
int displayTheResultOfGuessTheWord(string mutualChoice)
{
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\n\t\t\t\t  _________________________________________________________");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t      Thanks For Playing!\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  \t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	cout << "\n\t\t\t\t |\t  \t\t   " << points << " Points\t\t\t   |";
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |\t  \t Congratulations Your Score Is:  \t   |");
	printf("\n\t\t\t\t |\t\t\t\t\t\t\t   |");
	printf("\n\t\t\t\t |_________________________________________________________|");
	return 0;
}
int main()
{

}
