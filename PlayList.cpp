#include "PlayList.hpp"

#include <iostream>

using namespace std;


PlayList::PlayList(const Song& a_song)

{
    // insert() funciton adds the element to the set
    playlist_.add(a_song);

}


int PlayList::getNumberOfSongs() const{
	return playlist_.getCurrentSize();
}


bool PlayList::isEmpty() const{
	return playlist_.isEmpty();
}

bool PlayList::addSong(const Song& new_song){
	return playlist_.add(new_song);
}

bool PlayList::removeSong(const Song& a_song){
	return playlist_.remove(a_song);

}

void PlayList::clearPlayList()
{
    // clear function removes all elements from set
    return playlist_.clear();
}



void PlayList::displayPlayList() const{

	vector<ItemType> v = playlist_.toVector();
	cout << v << endl; 

}









