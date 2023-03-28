#include <iostream>
#include <string>
#include "Articles.h"
using namespace std;

void display_choices();
int number_prompt(string prompt);

int main()
{
	int choice;
	int article_num;
	Articles article;
	list<Articles> articles;

	cout << "Welcome to learning your Articles of Faith\n";
	bool make_choice = true;

	while (make_choice) {

		display_choices();
		choice = number_prompt("Which would you like to start with? ");
		
		switch (choice) {

		case 0:
			cout << "\n\nCome back soon to study some more!\n\n";
			make_choice = false;
			break;

		case 1:
			// display all articles of faith
			article.build_list(articles);
			article.display_all(articles);
			break;

		case 2:
			// display single
			article_num = number_prompt("Which Article of Faith do you want displayed? ");
			break;

		case 3:
			// Display random AofF
			break;

		case 4:
			// Guess which one (enter number as guess)
			break;

		default:
			// something
			make_choice = false;
			break;
		}

	}
	// end of main()
}

void display_choices() {
	std::cout << "\n";
	std::cout << "\t1. Display all\n";
	std::cout << "\t2. Choose by number (1-13)\n";
	std::cout << "\t3. Display random Article of Faith\n";
	std::cout << "\t4. Guess which one\n";
	std::cout << "\t0. To exit\n";
}

int number_prompt(string prompt) {
	cout << prompt;
	cin >> prompt;
	return stoi(prompt);
}

