//Name: Wesley Su
//Name: Maxine Xin

#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <sstream>
#include <stdexcept>

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;
     void add(T element);

     T get(int index) const;
     T remove(int index); 

     std::vector<T> toArray() const;

     LinkedList<T>& operator+=( const T& item );
};

// default constrcutor
template <class T>
LinkedList<T>::LinkedList() {}

// destructor
template <class T>
LinkedList<T>::~LinkedList() {}

// copy constructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
    typename std::list<T>::const_iterator it = other.theList.begin();
    while (it != other.theList.end())
    {
        theList.push_back(*it);
        it++;
    }
}

template <class T> 
void LinkedList<T>::add(T element)
{
    theList.push_back(element);
}


template <class T>
int LinkedList<T>::size() const
{
    return theList.size();
}


template <class T>
T LinkedList<T>::get(int index) const
{
    if (index >= 0 && index < theList.size()) 
    {
    	typename std::list<T>::const_iterator it = theList.begin();
    	advance(it, index);
    	return *it;
    }
    //if out of bound then throw invalid_argument exception
    std::stringstream ss;
    int size = theList.size();
    if (size == 0) 
    	ss << "invalid attempt to retrieve from empty list";
    else 
	ss << "invalid index: " << index << "   list size: " << size;
    std::string str = ss.str();
    throw std::invalid_argument(str.c_str());
}



template <class T>
T LinkedList<T>::remove(int index)
{
    if (index >= 0 && index < theList.size())
    {
    	typename std::list<T>::iterator it = theList.begin();
	
	 advance(it, index);
   	 T rmvEle = *it;
   	 theList.erase(it);
   	 return rmvEle;
    }
    std::stringstream ss;
    int size = theList.size();
    if (size == 0)
        ss << "invalid attempt to remove from empty list";
    else
        ss << "invalid index: " << index << "   list size: " << size;
    std::string str = ss.str();
    throw std::invalid_argument(str.c_str());
}



template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
    std::vector<T> newArray;

    typename std::list<T>::const_iterator it = theList.begin();
    while (it != theList.end())
    {
        newArray.push_back(*it);
        it++;
    }
    return newArray;
}



template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item)
{
    theList.push_back(item);
    return(*this);
}

#endif
