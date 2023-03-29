#pragma once
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <list>
#include <iostream>
using namespace std;

class Articles {
private:
	string verse;
	string text;
	int a_of_f;

public:
	Articles();
	Articles(string verse, string text, int a_of_f);
	int get_article();
	void individual_display(void) const;
	void display_verse_only(void) const;
	void display_all(list<Articles>& article_list);
    void build_list(list<Articles>& article_list);
};

// https://github.com/bcbooks/scriptures-json/blob/master/pearl-of-great-price.json