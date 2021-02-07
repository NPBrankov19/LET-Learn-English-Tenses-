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
int main()
{

}