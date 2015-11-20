#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void slowType(string str);

int main()
{
	slowType("Welcome to Mad Libs (Part 2)");
	slowType("This contains 5 spots for you to fill in.");
	string place;
	slowType("Please, type in a place");
	getline(cin, place);
	string food;
	slowType("Thanks! Now, please type in a food.");
	getline(cin, food);
	string feeling;
	slowType("Great choice. Please type in a feeling");
	getline(cin, feeling);
	string room;
	slowType("Cool! Please type in a room inside of a house.");
	getline(cin, room);
	string number;
	slowType("Super cool! Last input! Please type in a number.");
	getline(cin, number);
	slowType("Great! We're making your Mad Lib, give us a second.");
	Sleep(300);
	slowType("Making your Mad Lib, 26% complete.");
	Sleep(650);
	slowType("Making your Mad Lib, 46% complete.");
	Sleep(220);
	slowType("Making your Mad Lib, 79% complete.");
	Sleep(350);
	slowType("Making your Mad Lib, 83% complete.");
	Sleep(240);
	slowType("Making your Mad Lib, 100% complete!");
	slowType("Cleaning up...");
	Sleep(150);
	slowType("Your mad lib has been made. Enjoy!");
	slowType("I was back at " + place + ". Man, that was terrible. I needed to eat something, so I got " + food + " out of the fridge. It made me feel " + feeling + ". After that, I headed to " + room + ", and sat there. Then, " + number + " hour(s) later, I got back up, and went to bed.");
	slowType("Remember to also check out Part 3, the sequel! It contains a whooping 15 inputs!");
	string like;
	slowType("How did you like the program?");
	getline(cin, like);
	slowType("Awesome. Closing the program now.");

//The story: I was back at (PLACE). Man, that was terrible. I needed to eat something, so I got (FOOD) out of the fridge. It made me feel (FEELING). After that, I headed to (ROOM), and sat there. Then, (HOURS) later, I got back up, and went to bed. Part 3 continues the next morning.
	
}

void slowType(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
		Sleep(50);
	}
	cout << endl;
}
