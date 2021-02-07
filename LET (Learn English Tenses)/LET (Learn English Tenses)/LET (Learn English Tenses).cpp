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
void displayTheUsageOfPresentSimpleTense(string mutualChoice)
{
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Present Simple Tense.");
	printf("\n\n\n 1. We use the present simple when something is generally or always true.");
	printf("\n\n\t- People need food.");
	printf("\n\n\t- It snows in winter here.");
	printf("\n\n\t- Two and two make four.");
	printf("\n\n 2. Similarly, we need to use this tense for a situation that we think is more or less permanent.");
	printf("\n\n\t- Where do you live?");
	printf("\n\n\t- She works in a bank.");
	printf("\n\n\t- I don't like mushrooms.");
	printf("\n\n 3. The next use is for habits or things that we do regularly. We often use adverbs of frequency.");
	printf("\n\n\t- Do you smoke?");
	printf("\n\n\t- I play tennis every Tuesday.");
	printf("\n\n\t- I don't travel very often.");
	printf("\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");
	getline(cin, mutualChoice);
}
void practisePresentSimpleTenseEx1(string mutualChoice)
{
	string sentence[10] = { "1. Do/Does I sing well?","2. Do/Does you play football?","3. Do/Does he read books?",
	"4. Do/Does she speak English?","5. Do/Does we play video games?","6. Do/Does you travel by bus?",
	"7. Do/Does your teacher live in London?","8. Do/Does dogs like cats?","9. Do/Does it eat bananas?",
	"10. Do/Does they go to school?" };
	string condition[1] = { "Enter The Correct Answer: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Do Or Does.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Does")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Does")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Does")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Does")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Do")
	{
		points++;
	}
}
void practisePresentSimpleTenseEx2(string mutualChoice)
{
	string sentence[10] = { "1. My mother work/works on Sundays.","2. We write/writes the answers.","3. It eat/eats grass.",
	"4. I want/wants more ice-cream.","5. She never play/plays chess.","6. They walk/walks to school.",
	"7. He drive/drives a bus.","8. Monkeys make/makes a lot of noise.","9. This girl speak/speaks Italian.",
	"10. My father pay/pays for the tickets." };
	string condition[1] = { "Enter The Correct Answer: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Affirmative forms.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "works")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "write")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "eats")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "want")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "plays")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "walk")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "drives")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "make")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "speaks")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "pays")
	{
		points++;
	}
}
void practisePresentSimpleTenseEx3(string mutualChoice)
{
	string sentence[10] = { "1. He love playing basketball.","2. They sleeps in afternoon.","3. He get up early everyday.",
	"4. We cooks every day.","5. We goes to the gym together.","6. You has a big house.",
	"7. She go to work by car.","8. The sun rise at the east.","9. I likes programming and biology.",
	"10. I don't plays video games." };
	string condition[1] = { "Enter The Correct Form Of The Mistake: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "loves")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "sleep")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "gets")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "cook")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "go")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "have")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "goes")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "rises")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "like")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "play")
	{
		points++;
	}
}
void practisePresentSimpleTenseEx4(string mutualChoice)
{
	string sentence[10] = { "1. I am/is/are girl.","2. My father am/is/are at work.","3. Trixi and Susi am/is/are my cats.",
	"4. The hamster am/is/are in the cage.","5. I am/is/are a painter.","6. My green pencil am/is/are on the floor.",
	"7. Emma and Betty am/is/are good friends.","8. Am/Is/Are you from Scotland?","9. His sister am/is/are seven years old.",
	"10. We am/is/are children." };
	string condition[1] = { "Enter The Correct Answer: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Am, Is Or Are.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "am")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "am")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Are" || mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
}
void practisePresentSimpleTenseEx5(string mutualChoice)
{
	string sentence[10] = { "1. A: Where are you from?\n  B: I __ from Bulgaria.",
	"2. A: Where __ you live?\n  B: I live in Brazil.","3. A: Hello, how are you?\n  B: I __ good thanks!",
	"4. A: What do you do in your free time?\n  B: I __.","5. A: ___ she writes an email?\n  B: Yes,she does.",
	"6. A: The earth __ around the sun.\n  B: I know this.","7. A: ___ they good friends?\n  B: Yes, they are.",
	"8. A: I ___ reading detective stories.\n  B: I like it too!","9. A: Do we ___ each other?\n  B: No, we don't.",
	"10. A: Do you have a pool in your yard?\n  B: No, I __." };
	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.5 Choose The Correct Answer.");
	cout << "\n\n" << sentence[0];
	printf("\n\n\ta) am  b) is");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	printf("\n\n\ta) do  b) does");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	printf("\n\n\ta) is  b) am");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	printf("\n\n\ta) study  b) studies");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	printf("\n\n\ta) Do  b) Does");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	printf("\n\n\ta) go  b) goes");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	printf("\n\n\ta) Are  b) Is");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	printf("\n\n\ta) likes  b) like");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	printf("\n\n\ta) know  b) knows");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	printf("\n\n\ta) doesn't b) don't");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
}
void displayTheUsageOfPresentContinuousTense(string mutualChoice)
{
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Present Continuous Tense.");
	printf("\n\n\n 1. First, we use the present continuous for things that are happening at the moment of speaking.");
	printf("\n\n\t- I'm working at the moment.");
	printf("\n\n\t- Please call back as we are eating dinner now.");
	printf("\n\n\t- Julie is sleeping.");
	printf("\n\n\n 2. We can also use this tense for kinds of temporary situations, even if the action isn't happening at this moment.");
	printf("\n\n\t- John's working in a bar until he finds a job in his field. (He might not be working now.)");
	printf("\n\n\t- I'm reading a really great book.");
	printf("\n\n\t- She's staying with her friend for a week.");
	printf("\n\n\n 3. We can use the present continuous for temporary or new habits.");
	printf("\n\n\t- He's eating a lot these days.");
	printf("\n\n\t- She's swimming every morning (she didn't use to do this).");
	printf("\n\n\t- You're smoking too much.");
	printf("\t\t\t\t\tPress Enter To Continue: ");
	getline(cin, mutualChoice);
}
void practisePresentContinuousTenseEx1(string mutualChoice)
{
	string sentence[10] = { "1. I am/is/are reading a book.","2. You am/is/are playing football.",
	"3. He am/is/are my sleeping.","4. She am/is/are dancing.","5. It am/is/are eating bamboo.",
	"6. We am/is/are running.","7. You am/is/are talking too much.","8. My sister am/is/are riding her bike.",
	"9. The birds am/is/are flying.", "10. She am/is/are playing the piano." };
	string condition[1] = { "Enter The Correct Answer: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Am, Is Or Are.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "am")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
}
void practisePresentContinuousTenseEx2(string mutualChoice)
{
	string sentence[10] = { "1. I ___ football.", "2. You ___ tennis.","3. He ___ video games.",
	"4. She ___ rugby.","5. It ___ golf.", "6. We ___ the guitar.","7. You ___ the piano.",
	"8. They ___ basketball.","9. She ___ volleyball.", "10. It ___ table tennis." };
	string answers[1] = { "\n\n   a) am playing      b) is playing\n\n\t    c) are playing" };
	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Choose The Correct Answer.");
	cout << "\n\n" << sentence[0];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "c" || mutualChoice == "c)")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "c" || mutualChoice == "c)")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "c" || mutualChoice == "c)")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "c" || mutualChoice == "c)")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << answers[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
}
void practisePresentContinuousTenseEx3(string mutualChoice)
{
	string sentence[10] = { "1. The boys is playing football now.","2. They are learn Spanish now.",
	"3. Why aren't you do your homework?","4. Suzan are ironing her clothes right now.",
	"5. Marry is at university. She is study chemistry.","6. She is works at this moment.",
	"7. They isn't studying English these days.","8. She is constantly changed her hair color.",
	"9. Children is studying their lessons.","10. The man is talks on the phone now." };
	string condition[1] = { "Enter The Correct Form Of The Mistake: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Correct The Mistakes (Only The Incorrect Word).");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "learning")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "doing")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "is")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "studying")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "working")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "aren't")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "changing")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "are")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "talking")
	{
		points++;
	}
}
void practisePresentContinuousTenseEx4(string mutualChoice)
{
	string incorrectWord;
	string sentence[10] = { "1. Look! Tom is ridings his bike.","2. Alec ist doing a test right now.",
	"3. The boys ares running in the yard at the moment.","4. I am watchinges very interesting film.",
	"5. We areing listening to the classical music now.","6. He is nots learning German right now.",
	"7. Is Nick drinkings coffer at this moment.","8. Are theyr playing football at this moment?",
	"9. Arent you singing a new song right now?","10. We aret not helping Andrew at this moment." };
	string condition[2] = { "Enter The Incorrect Word: ", "Enter The Unnecessary part: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Erase The Unnecessary Part.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "ridings" && mutualChoice == "s")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "ist" && mutualChoice == "t")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "ares" && mutualChoice == "s")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "watchinges" && mutualChoice == "es")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "areing" && mutualChoice == "ing")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "nots" && mutualChoice == "s")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "drinkings" && mutualChoice == "s")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "theyr" && mutualChoice == "r")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if ((incorrectWord == "arent" || incorrectWord == " Arent") && mutualChoice == "nt")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, incorrectWord);
	cout << "\n\n" << condition[1];
	getline(cin, mutualChoice);
	if (incorrectWord == "aret" && mutualChoice == "t")
	{
		points++;
	}
}
void practisePresentContinuousTenseEx5(string mutualChoice)
{
	string sentence[10] = { "1. A: Where are you going?\n  B: I ___ going to school.",
	"2. A: What are you doing?\n  B: I am ___ the guitar.","3. A: What are they doing?\n  B: ___ are playing football.",
	"4. A: ___ we starting?\n  B: Yes, we are.","5. A: Why are you ___?\n  B: Because, I fell terrible.",
	"6. A: Why ___ they skiing?\n  B: I have no idea.","7. A: Are you studying?\n  B: Yes, I ___.",
	"8. A: I love reading detective stories.\n  B: Realy? At this moment I ___ reading detective story.",
	"9. A: Is the girl studying ___?\n  B: Yes, she is.",
	"10. A: Are you having a bath right now?\n  B: No, I __." };
	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.5 Choose The Correct Answer.");
	cout << "\n\n" << sentence[0];
	printf("\n\n\ta) am  b) is");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	printf("\n\n\ta) playing  b) play");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	printf("\n\n\ta) We  b) They");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	printf("\n\n\ta) Are  b) Do");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	printf("\n\n\ta) crying  b) cry");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	printf("\n\n\ta) we  b) are");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	printf("\n\n\ta) do  b) does");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	printf("\n\n\ta) do  b) am");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	printf("\n\n\ta) now  b) general");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	printf("\n\n\ta) doesn't b) don't");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
}
void displayTheUsageOfPastSimpleTense(string mutualChoice)
{
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\t\t\t\t\t    The Usage Of Past Simple Tense.");
	printf("\n\n\n 1. We use it with finished actions, states or habits in the past when we have a finished time word.");
	printf("\n\n\t- I went to the cinema yesterday.\n");
	printf("\n\t- We spent a lot of time in Japan in 2007.");
	printf("\n\n\n 2. We use it with finished actions, states or habits in the past when we know that the time period has finished.");
	printf("\n\n\t- Leonardo painted the Mona Lisa.\n");
	printf("\n\t- The Vikings invaded Britain.");
	printf("\n\n\n 3. For stories or lists of events, we often use the past simple for the actions in the story.");
	printf("\n\n\n\t- He went to a cafe. People were chatting and music was playing. He sat down and ordered a coffee.");
	printf("\n\n\n\n\t\t\t\t\t\t\t\tPress Enter To Continue: ");
	getline(cin, mutualChoice);
}
void practisePastSimpleTenseEx1(string mutualChoice)
{
	string sentence[10] = { "1. Tom looks out of the window.","2. We arrive at 6.30.",
	"3. Laura watches television all afternoon.","4. The bus stops at the end of the street.",
	"5. I visit an old castle on Saturday.","6. Sue waits for her friends for more than an hour.",
	"7. They decide to come to my party.","8. He does his test.",
	"9. Ivan and George play football.","10. Susan study more than us." };
	string condition[1] = { "Enter The Past Simple Form Of The Sentence: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.1 Change The Sentences Into Past Simple Tense.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Tom looked out of the window." || mutualChoice == "Tom looked out of the window")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "We arrived at 6.30." || mutualChoice == "We arrived at 6.30")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Laura watched television all afternoon." || mutualChoice == "Laura watched television all afternoon")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "The bus stopped at the end of the street." || mutualChoice == "The bus stopped at the end of the street")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "I visited an old castle on Saturday." || mutualChoice == "I visited an old castle on Saturday")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Sue waited for her friends for more than an hour." ||
		mutualChoice == "Sue waited for her friends for more than an hour")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "They decided to come to my party." || mutualChoice == "They decided to come to my party")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "He did his test." || mutualChoice == "He did his test")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Ivan and George played football." || mutualChoice == "Ivan and George played football")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Susan studied more than us." || mutualChoice == "Susan studied more than us")
	{
		points++;
	}
}
void practisePastSimpleTenseEx2(string mutualChoice)
{
	string sentence[10] = { "1. I watch TV last week.","2. We eated meat with my best friend yesterday.",
	"3. The bus stoped a few minutes ago.","4. I meeted my wife 9 years ago.",
	"5. She leaved the school in 2010.","6. He buyed a new house last month.",
	"7. I readed an interesting book yesterday.","8. We do a lot of job before 3 days.",
	"9. She finish her work at six o'clock yesterday.","10. I goed to bed early two days ago." };
	string condition[1] = { "Enter The Correct Form Of The Mistake: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.2 Correct The Mistakes (Only The Incorrect Word).");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "watched")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "ate")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "stopped")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "met")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "left")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "bought")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "read")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "did")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "finished")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "went")
	{
		points++;
	}
}
void practisePastSimpleTenseEx3(string mutualChoice)
{
	string sentence[10] = { "1. Did she ___ her room?","2. We ___ good friends before.",
	"3. They ___ in Spain two years ago.","4. An old man ___ down in front of my eyes yesterday.",
	"5. Marry ___ to turn of the light.","6. Did they ___ the match?",
	"7. I ___ to school yesterday.","8. A gardener _____ dead leaves.",
	"9. Amelia ___ to stay with her father.","10. George ___ home very late last night." };
	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.3 Choose The Correct Answer.");
	cout << "\n\n" << sentence[0];
	printf("\n\n\ta) clean  b) cleaned");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	printf("\n\n\ta) were  b) are");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	printf("\n\n\ta) life  b) lived");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	printf("\n\n\ta) sat  b) sitted");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	printf("\n\n\ta) forget  b) forgot");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	printf("\n\n\ta) lost  b) lose");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	printf("\n\n\ta) went  b) goed");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	printf("\n\n\ta) sweeped up  b) swept up");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	printf("\n\n\ta) chose  b) choosed");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	printf("\n\n\ta) comed b) came");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
}
void practisePastSimpleTenseEx4(string mutualChoice)
{
	string sentence[10] = { "1. Tim arrived at 2.00.","2. Sam phoned home.",
	"3. Helen wanted to make a phone call.","4. Paul visited the doctor.",
	"5. Bill missed the bus.","6. George walked to school.",
	"7. Jim opened the window.","8. Emma helped the teacher.",
	"9. Alice washed her hair.","10. Nikol went to bed." };
	string condition[1] = { "Enter The Past Simple Form Of The Sentence: " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.4 Change The Sentences Into Past Simple Tense Questions.");
	cout << "\n\n" << sentence[0];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Tim arrive at 2.00?" || mutualChoice == "Did Tim arrive at 2.00")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Sam phone home?" || mutualChoice == "Did Sam phone home")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Helen want to make a phone call?" || mutualChoice == "Did Helen want to make a phone call")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Paul visit the doctor?" || mutualChoice == "Did Paul visit the doctor")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Bill miss the bus?" || mutualChoice == "Did Bill miss the bus")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did George walk to school?" || mutualChoice == "Did George walk to school")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Jim open the window?" || mutualChoice == "Did Jim open the window")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Emma help the teacher?" || mutualChoice == "Did Emma help the teacher")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Alice wash her hair?" || mutualChoice == "Did Alice wash her hair")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "Did Nikol go to bed?" || mutualChoice == "Did Nikol go to bed")
	{
		points++;
	}
}
void practisePastSimpleTenseEx5(string mutualChoice)
{
	string sentence[10] = { "1. A: What ___ you do yesterday?\n  B: I did nothing all day.",
	"2. A: How did you ___ with the test?\n  B: I did it very well.","3. A: What did you say?\n  B: I ___ that you are cool.",
	"4. A: What did you see at the Zoo?\n  B: I ___ tigers.","5. A: Where did you go on holidays?\n  B: I ___ to Paris.",
	"6. A: Where ___ you yesterday at 5.00?\n  B: I was at home.","7. A: Why didn't you learn your French words?\n  B: I ___.",
	"8. A: What ___ you do last Saturday?\n  B: I studied.","9. A: What did you do?\n  B: I ___ a homework.",
	"10. A: What did he take?\n  B: He ___ nothing." };
	string condition[1] = { "Enter The Correct Answer (Enter The Letter Only!): " };
	system("cls");
	printf("\t\t\t\t\t   Welcome to LET (Learn English Tenses)!");
	printf("\n\n\nEx.5 Choose The Correct Answer.");
	cout << "\n\n" << sentence[0];
	printf("\n\n\ta) did  b) do");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[1];
	printf("\n\n\ta) do  b) did");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[2];
	printf("\n\n\ta) say  b) said");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[3];
	printf("\n\n\ta) saw  b) see");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[4];
	printf("\n\n\ta) went  b) go");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[5];
	printf("\n\n\ta) are  b) were");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[6];
	printf("\n\n\ta) forgot  b) forget");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[7];
	printf("\n\n\ta) do  b) did");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
	cout << "\n\n" << sentence[8];
	printf("\n\n\ta) wrote  b) write");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "a" || mutualChoice == "a)")
	{
		points++;
	}
	cout << "\n\n" << sentence[9];
	printf("\n\n\ta) take b) took");
	cout << "\n\n" << condition[0];
	getline(cin, mutualChoice);
	if (mutualChoice == "b" || mutualChoice == "b)")
	{
		points++;
	}
}
int main()
{

}