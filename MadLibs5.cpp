//This mad libs is here for when I have absolutely nothing to do and work on it. Maybe I'll make more?

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void slowType(string str);

int main()
{
	slowType("Welcome to Mad Libs (Part 5)");
	slowType("This contains 12 spots for you to fill in.");
	string day;
	slowType("Please, type in a day");
	getline(cin, day);
	string number;
	slowType("Thanks! Now, please type in a number");
	getline(cin, number);
	string tell;
	slowType("Great choice. Please type in something you would tell your mom.");
	getline(cin, tell);
	string tell2;
	slowType("Cool! Please type in something your mom would say back to you.");
	getline(cin, tell2);
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
	slowType("I just woke up. I was feeling " + feeling + ". My mom came into my room. She was " + feeling2 + " about me. I told her " + tell + ". She responded with  " + tell2 + ". I went back to bed, for about " + number + " hours.");
	slowType("And that's it for the Mad Libs series. Hope you enjoyed it!");
	string like;
	slowType("How did you like the program?");
	getline(cin, like);
	slowType("Awesome. Closing the program now.");

	//The story: It was (day).

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
