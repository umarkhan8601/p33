#ifndef SONG_H_
#define SONG_H_
#include <vector>

using namespace std;



class Song{
	public:

Song();

Song(const std::string& title, const std::string& author, const std::string& album);

void setTitle(std::string title);

 //"set" in setTitle here means "give a value" and has nothing

                                   // to do with the Set class. Similarly for setAuthor and setAlbum

void setAuthor(string author);

void setAlbum(string album);

string getTitle() const;

string getAuthor() const;

string getAlbum() const;

friend bool operator==(const Song& lhs, const Song& rhs);



	private:
	std::string title_;

	string author_;

	string album_;
};
#endif