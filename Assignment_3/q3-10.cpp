#include <iostream>

using namespace std;

class Publication {
	protected:
		string author;
		string title;
		string year;

	public:
		Publication(string a, string t, string y);
		~Publication();
		virtual void display();
};

class Book: public Publication {
	protected:
		string publisher;

	public:
		void display();
		Book(string a, string t, string y, string p);
		~Book();	
};

class JournalArticle: public Publication {
	protected:
		string journalname;
		int issuenumber;

	public:
		void display();
		JournalArticle(string a, string t, string y, string j, int i);
		~JournalArticle();
};

Publication::Publication(string a, string t, string y) {
	author = a;
	title = t;
	year = y;
}

void Publication::display() {
	cout << "Author: " << author << endl;
	cout << "Title: " << title << endl;
	cout << "Year: "<< year << endl;
}

Publication::~Publication() {
	cout << "Publication object is being destroyed: \n";
	display();
}

Book::Book(string a, string t, string y, string p)
	: Publication(a, t, y) {
		publisher = p;
	}	

void Book::display() {
	cout << "Author: " << author << endl;
	cout << "Title: " << title << endl;
	cout << "Year: "<< year << endl;
	cout << "Publisher: " << publisher << endl;
}

Book::~Book() {
	cout << "Book object is being destroyed: \n";
	display();
}

JournalArticle::JournalArticle(string a, string t, string y, string j, int i)
	:	Publication(a, t, y) {
			journalname = j;
			issuenumber = i;
			}	

void JournalArticle::display() {
	cout << "Author: " << author << endl;
	cout << "Title: " << title << endl;
	cout << "Year: "<< year << endl;
	cout << "Journal Name: " << journalname << endl;
	cout << "Issue Number: " << issuenumber << endl;
}

JournalArticle::~JournalArticle() {
	cout << "Journal Article object is being destroyed: \n";
	display();
}

void printPublicationList(Publication* pubs[], int length) {
	for(int i = 0; i <= length; i++) {
		pubs[i]->display();
	}
}

int main() {
	Publication* pubSet[3];
	pubSet[0] = new Publication("Isaac Newton","Principia","1686");
	pubSet[1] = new Book("Bjarne Stroustrup","The C++ Programming Language","May 2013","Addison-Wesley");
	pubSet[2] = new JournalArticle("Donald E. Knuth","Optimum Binary Search Trees","1971","Acta Informatica", 1);

	printPublicationList(pubSet, 2);

	cout << "start of a new scope" << endl;
    Book a("publication a","a","a","a");
    Publication* b = new Book("publication b","b","b","b");
    cout << "a and b are about to go out of scope..." << endl;
	
	return 0;
}
