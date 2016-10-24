#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void slowType(string str);

int main()
{
	slowType("Welcome to Mad Libs (Part 4)");
	slowType("This contains 5 spots for you to fill in.");
	string feeling;
	slowType("Please, type in a feeling");
	getline(cin, feeling);
	string feeling2;
	slowType("Thanks! Now, please type in a second feeling.");
	getline(cin, feeling2);
	string tell;
	slowType("Great choice. Please type in something you would tell your mom.");
	getline(cin, tell);
	string tell2;
	slowType("Cool! Please type in something your mom would say back to you.");
	getline(cin, tell2);
	string number;
	slowType("Super cool! Last input! Please type in a number.");
	getline(cin, number);
	slowType("I've ran out of creative things to update this line with in 2016. Just enjoy.");
	slowType("I just woke up. I was feeling " + feeling + ". My mom came into my room. She was " + feeling2 + " about me. I told her " + tell + ". She responded with  " + tell2 + ". I went back to bed, for about " + number + " hours.");
	slowType("And that's not it for the Mad Libs series. Hope you enjoyed it! Check out part 5!");
	string like;
	slowType("How did you like the program?");
	getline(cin, like);
	slowType("Awesome. Closing the program now.");

	//The story: I just woke up. I was feeling (FEELING). My mom came into my room. She was (FEELING2) about me. I told her (TELL). She responded with (TELL2). I went back to bed, for about (NUMBER) hours.

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
