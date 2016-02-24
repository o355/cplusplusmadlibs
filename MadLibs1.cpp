#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void slowType(string str);

int main()
{
	slowType("Welcome to Mad Libs");
	slowType("This contains 10 spots for you to fill in");
	string feeling;
	slowType("Please, type in a feeling");
	getline(cin, feeling);
	string time;
	slowType("Thanks! Now, please type in a time");
	getline(cin, time);
	string place;
	slowType("Great choice. Please type in a place");
	getline(cin, place);
	string modeof;
	slowType("Cool! Please type in a mode of transportation.");
	getline(cin, modeof);
	string somethingodd;
	slowType("Super cool! Please type in something odd that could happen.");
	getline(cin, somethingodd);
	string name;
	slowType("#piekitkat2k15. Please enter in a name.");
	getline(cin, name);
	string feeling2;
	slowType("Cool name. Please enter in another feeling.");
	getline(cin, feeling2);
	string feeling3;
	slowType("Cool! Please enter in a third feeling.");
	getline(cin, feeling3);
	string feeling4;
	slowType("That's a good feeling. Please enter in a fourth feeling.");
	getline(cin, feeling4);
	string mode2;
	slowType("Cool! Last input! Enter a second mode of transportation.");
	getline(cin, mode2);
	slowType("Great! Your mad lib should be spitting out right now.");
	slowType("I woke up feeling " + feeling + ". I looked at my alarm clock, and it said " + time + ". Oh no! I was running really late to " + place + ". I hopped on the " + modeof + ", and headed to " + place + ". When I got to " + place + ", something very odd happened. " + somethingodd + " was going on...interesting. I then saw " + name + ". I was so " + feeling2 + ". " + name + " said to me Go home, you are not my friend any more. I was so " + feeling3 + ". I went back home, on the " + mode2 + ". I was very " + feeling4);
	slowType("(c) 2015 Owen McGinley. Thanks for checking this out!");
	string didyou;
	slowType("Press enter to close the program.");
	getline(cin, didyou);
	slowType("Closing...");
	

		//FINAL: I woke up feeling (FEELING). I looked at my alarm clock, and it said (TIME). Oh no! I was really running late to (PLACE). I hopped on the (MODE OF TRANSPORT), and headed to (PLACE). When I got to (PLACE), something very odd happened. (SOMETHINGODD) was going on...interesting. I then saw (NAME). I was so (FEELING 2). (NAME) said to me "Go home. You aren't my friend any more. I was so (FEELING 3). I went back home, on (MODE 2). I was very (FEELING 4).
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
