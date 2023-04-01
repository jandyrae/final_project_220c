#include <iostream>
#include <string>
#include <random>
#include <iomanip>
#include "Articles.h"
using namespace std;

void display_choices();
int number_prompt(string prompt);
std::list<Articles>::iterator it;
std::list<Articles>::iterator iterate_list(list<Articles>& article_list, int a_of_f);
int random_article();
void word_wrap(string full_verse);

int main()
{
	int choice, article_num;
	Articles article;
	list<Articles> articles;

	cout << "Welcome to learning your Articles of Faith\n";
	cout << "******************************************\n";
	bool make_choice = true;

	while (make_choice) {

		display_choices();
		choice = number_prompt("\nWhich would you like to start with? ");
		
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
			it = iterate_list(articles, article_num);
			it->individual_display();
			cout << endl;
			break;

		case 3:
			// Display random 
			int random;
			random = random_article();
			it = iterate_list(articles, random);
			it->individual_display();
			break;

		case 4:
			// Guess which one (enter number as guess)
			int to_guess;
			int guess;
			to_guess = random_article(); 
			it = iterate_list(articles, to_guess);
			it->display_verse_only();
			guess = number_prompt("\nWhat is your guess? ");
			if (to_guess == guess) {
				cout << "\n************************";
				cout << "\nGreat, you got it! \n\n";
				cout << "************************\n";
			}
			else {
				cout << "\n************************";
				cout << "\nShoot! Maybe next time. \nIt was number " << to_guess << ".\n";
				cout << "************************\n";
			}
			break;

		default:
			// something other than desired choice
			make_choice = false;
			break;
		}

	}
	
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

std::list<Articles>::iterator iterate_list(list<Articles>&  article_list, int a_of_f) {
	for (std::list<Articles>::iterator it = article_list.begin(); it != article_list.end(); ++it) {
		if (a_of_f == (*it).get_article()) {
			// it->individual_display();
			return it;
		}
	}
	return it;
}

int random_article()
{
	int min = 1;
	int max = 13;
	int randNum = rand() % (max - min + 1) + min;
	return randNum;
}

void word_wrap(string full_verse)
{
	int wrap_at = 70;
	int i = 0;
	int j = i + wrap_at;
	while (i < full_verse.length()) {
		//int j = i + wrap_at;
		if (j >= full_verse.length()) {
			j = full_verse.length() - 1;
		}
		else {
			while (j >= i && not isspace(full_verse[j])) {
				j--;
			}
		}
	}
	cout << setw(wrap_at) << full_verse.substr(i, j - i + 1) << endl;
}