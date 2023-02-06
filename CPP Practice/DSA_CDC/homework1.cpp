#include <iostream>
using namespace std;


class GameEntry { 
public:
	GameEntry(const string &n = "", int s = 0); 
	string getName() const;						
	int getScore() const;						
private:
	string name; 
	int score;	 
};
GameEntry::GameEntry(const string &n, int s) : name(n), score(s) {
}
string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }
class Scores { 
public:
	Scores(int maxEnt = 10);				  
	~Scores();								  
	void add(const GameEntry &e);			  
	GameEntry remove(int i) ; 
	void printAllScores();
private:
	int maxEntries;		// maximum number of entries
	int numEntries;		// actual number of entries
	GameEntry *entries; // array of game entries
};
Scores::Scores(int maxEnt) {			 // constructor
	maxEntries = maxEnt;				 // save the max size
	entries = new GameEntry[maxEntries]; // allocate array storage
	numEntries = 0;						 // initially no elements
}
Scores::~Scores() { 
	delete[] entries;
}
void Scores::add(const GameEntry &e) {
	int newScore = e.getScore(); // score to add
	if (numEntries == maxEntries) { // the array is full
		if (newScore <= entries[maxEntries - 1].getScore())
			return; // not high enough - ignore
	}
	else
		numEntries++; // if not full, one more entry
	int i = numEntries - 2; // start with the next to last
	while (i >= 0 && newScore > entries[i].getScore() ) {
		entries[i + 1] = entries[i]; // shift right if smaller
		i--;
	}
	entries[i + 1] = e; // put e in the empty spot
}
GameEntry Scores::remove(int i) 
{
	if ((i < 0) || (i >= numEntries)) // invalid index
		throw("IndexOutOfBounds - Invalid index");
	GameEntry e = entries[i]; // save the removed object
	for (int j = i + 1; j < numEntries; j++)
		entries[j - 1] = entries[j]; // shift entries left
	numEntries--;					 // one fewer entry
	return e;						 // return the removed object
}
void Scores::printAllScores()
{
	for (int i = 0; i < numEntries; i++)
	{
		cout << entries[i].getName() << " : " << entries[i].getScore() << "\n";
	}
}
int main(){
    int max{}; cin >> max;
    Scores *obj = new Scores(max);
    bool flag = true;
    while (flag)
    {   
        cout<< "ENTER 1 TO ADD ENTRY"<<endl;
        cout<<"ENTER 2 TO DELETE ENTRY"<<endl;
        cout<<"ENTER 3 TO DISPLAY ENTRIES"<<endl;
        cout<<"ENTER 4 TO EXIT"<<endl;
        string s;
        int points;
        int choice;
        cin>>choice;
        GameEntry g;
        switch(choice){
            case 1:
                   cin >> s >> points;
                   g = GameEntry(s,points);
                   obj->add(g);
                    break;
            case 2:
                    int index;
                    cin >> index;
                    obj->remove(index);
                    break;
            case 3:
                    obj->printAllScores();
                    break;
            case 4:
                   flag = false;
                   break;

        }
    }
    
    return 0;
}