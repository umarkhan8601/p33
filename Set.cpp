#include "Set.hpp"
#include <iostream>

using namespace std;

template<class ItemType>
Set<ItemType>::Set(){
	max_items_ = DEFAULT_SET_SIZE;
	item_count_ = 0;
}




template<class ItemType>
bool Set<ItemType>::isEmpty()
{
	if(item_count_ == 0)
	{
		return true;
	}
return false;
}

template<class ItemType>
void Set<ItemType>::clear()
{ 
	item_count_ = 0;
}


template<class ItemType>
int Set<ItemType>::getCurrentSize() 
{

return item_count_;

}


template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) 
{
	return getIndexOf(anEntry) > -1;
}



template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry){
	if(item_count_ < max_items_)
	{
		items_[item_count_] == newEntry;
		
			item_count_++;
			return true;
		
	}
	return false;
}


template<class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const
{
	bool found = false;
	int search = 0;
	int result;
	while(found && (item_count_ < max_items_))
	{
		if(items_[search] == target)
		{
			found = true;
			result = search;
		}
		else
		{
			search++;
		}
	}
	return result;
}

template<class ItemType>
vector<ItemType> Set<ItemType>::toVector() const
{
	std::vector<ItemType> v;
	for(int i = 0; i < item_count_; i++)
	
		v.push_back(items_[i]);
	
	return v;
}

template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry){

	int located_index = getIndexOf(anEntry);
	bool istrue = !isEmpty() && (located_index > -1);
	if(istrue){
		item_count_--;
		items_[located_index] = items_[item_count_];
} // end if
return istrue;
}







