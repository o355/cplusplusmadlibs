#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void slowType(string str);

int main()
{
	slowType("Welcome to Mad Libs (Part 3)");
	slowType("This contains 12 spots for you to fill in.");
	string number;
	slowType("Please, type in a number");
	getline(cin, number);
	string feeling;
	slowType("Thanks! Now, please type in a feeling.");
	getline(cin, feeling);
	string room;
	slowType("Great choice. Please type in a room in a house.");
	getline(cin, room);
	string food;
	slowType("Cool! Please type in a food.");
	getline(cin, food);
	string feeling2;
	slowType("Super cool! Please type in another feeling.");
	getline(cin, feeling2);
	string place;
	slowType("Awesome! Please type in a place.");
	getline(cin, place);
	string mode;
	slowType("That's awesome! Please type in a mode of transportation");
	getline(cin, mode);
	string name;
	slowType("That's radical! Please enter in a name.");
	getline(cin, name);
	string feeling3;
	slowType("Cool! Please enter in a third feeling.");
	getline(cin, feeling3);
	string verb;
	slowType("That's really cool! Please enter in a verb (without -ing).");
	getline(cin, verb);
	string place2;
	string mode2;
	string feeling4;
	slowType("Cool! Please enter in a second place.");
	getline(cin, place2);
	slowType("#piekitkat2k15. Please enter in a second mode of transportation.");
	getline(cin, mode2);
	slowType("Great choice. Last input! Please enter in a fourth feeling");
	getline(cin, feeling4);
	slowType("All done! Here comes your mad lib...");
	slowType("It was the morning. I just woke up from a " + number + " hour long nap. I was feeling very " + feeling + ". I went downstairs to " + room + ", and got " + food + " from the fridge. It was very " + feeling2 + ". After that, I packed for " + place + ", and hopped on " + mode + ". Once I got to " + place + ", I again saw " + name + ". I didn't dare to look at " + name + ", but he looked at me. I felt " + feeling3 + " to him, but I just couldn't. I wanted to" + verb + " him. My mom said for us to go to " + place2 + ". I hopped on the " + mode2 + ", and went to " + place2 + ". During the ride, I was feeling very " + feeling4 + ". Then I woke up. It was all a dream.");
	string like;
	slowType("Did you like these Mad Libs?");
	getline(cin, like);
	slowType("Thanks for the feedback! Closing the program now!");


	//Story: It was the morning. I just woke up from a (NUMBER) hour long nap. I was feeling very (FEELING). I went downstairs to (ROOM), and got (FOOD) out of the fridge. It was very (FEELING2). After that, I packed for (PLACE), and hopped on (MODE). Once I got to (PLACE), I again saw (NAME). I didn't dare to look at (NAME), but he looked at me. I felt (FEELING3). I wanted to (VERB) to him, but I just couldn't. My mom said for us to go to (PLACE2). I hopped on the (MODE2), and went to (PLACE2). During the ride, I was feeling very (FEELING4). Then I woke up. It was all a dream.



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
