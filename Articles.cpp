#include "Articles.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

Articles::Articles() : verse{ "" }, text{ "" }, a_of_f{ 0 } {};
Articles::Articles(string title, string full_verse, int article_num ) : verse( title ), text( full_verse ), a_of_f( article_num ) {};

void Articles::individual_display() const
{
	cout << "\n\t# " << a_of_f;
	cout << "\n" << verse << "\n";
	cout << "\t" << text << "\n";
};

void Articles::display_all(list<Articles>& article_list)
{
	for_each(article_list.begin(), article_list.end(), [](auto& each)
		{
			each.individual_display();
		});
};

void Articles::build_list(list<Articles>& article_list) 
{
	Articles a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13;
	a1.verse = "Articles of Faith 1:1";
	a1.text = "We believe in God, the Eternal Father, and in His Son, Jesus Christ, and in the Holy Ghost.";
	a1.a_of_f = 1;
	article_list.push_back(a1);
	a2.verse = "Articles of Faith 1:2";
	a2.text = "We believe that men will be punished for their own sins, and not for Adam's transgression.";
	a2.a_of_f = 2;
	article_list.push_back(a2);
	a3.verse = "Articles of Faith 1:3";
	a3.text = "We believe that through the Atonement of Christ, all mankind may be saved, by obedience to the laws and ordinances of the Gospel.";
	a3.a_of_f = 3;
	article_list.push_back(a3);
	a4.verse = "Articles of Faith 1:4";
	a4.text = "We believe that the first principles and ordinances of the Gospel are: first, Faith in the Lord Jesus Christ; second, Repentance; third, Baptism by immersion for the remission of sins; fourth, Laying on of hands for the gift of the Holy Ghost.";
	a4.a_of_f = 4;
	article_list.push_back(a4);
	a5.verse = "Articles of Faith 1:5";
	a5.text = "We believe that a man must be called of God, by prophecy, and by the laying on of hands by those who are in authority, to preach the Gospel and administer in the ordinances thereof.";
	a5.a_of_f = 5;
	article_list.push_back(a5);
	a6.verse = "Articles of Faith 1:6";
	a6.text = "We believe in the same organization that existed in the Primitive Church, namely, apostles, prophets, pastors, teachers, evangelists, and so forth.";
	a6.a_of_f = 6;
	article_list.push_back(a6);
	a7.verse = "Articles of Faith 1:7";
	a7.text = "We believe in the gift of tongues, prophecy, revelation, visions, healing, interpretation of tongues, and so forth.";
	a7.a_of_f = 7;
	article_list.push_back(a7);
	a8.verse = "Articles of Faith 1:8";
	a8.text = "We believe the Bible to be the word of God as far as it is translated correctly; we also believe the Book of Mormon to be the word of God.";
	a8.a_of_f = 8;
	article_list.push_back(a8);
	a9.verse = "Articles of Faith 1:9";
	a9.text = "We believe all that God has revealed, all that He does now reveal, and we believe that He will yet reveal many great and important things pertaining to the Kingdom of God.";
	a9.a_of_f = 9;
	article_list.push_back(a9);
	a10.verse = "Articles of Faith 1:10";
	a10.text = "We believe in the literal gathering of Israel and in the restoration of the Ten Tribes; that Zion (the New Jerusalem) will be built upon the American continent; that Christ will reign personally upon the earth; and, that the earth will be renewed and receive its paradisiacal glory.";
	a10.a_of_f = 10;
	article_list.push_back(a10);
	a11.verse = "Articles of Faith 1:11";
	a11.text = "We claim the privilege of worshiping Almighty God according to the dictates of our own conscience, and allow all men the same privilege, let them worship how, where, or what they may.";
	a11.a_of_f = 11;
	article_list.push_back(a11);
	a12.verse = "Articles of Faith 1:12";
	a12.text = "We believe in being subject to kings, presidents, rulers, and magistrates, in obeying, honoring, and sustaining the law.";
	a12.a_of_f = 12;
	article_list.push_back(a12);
	a13.verse = "Articles of Faith 1:13";
	a13.text = "We believe in being honest, true, chaste, benevolent, virtuous, and in doing good to all men; indeed, we may say that we follow the admonition of Paul�We believe all things, we hope all things, we have endured many things, and hope to be able to endure all things. If there is anything virtuous, lovely, or of good report or praiseworthy, we seek after these things.";
	a13.a_of_f = 13;
	article_list.push_back(a13);
};