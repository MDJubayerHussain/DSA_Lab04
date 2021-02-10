#include"unsorted.h"
template <class T>
unsorted<T>::unsorted ()
{
    length=0;
    currentPos=-1;
}
template <class T>
bool unsorted<T>::IsEmpty()
{
    return (length==0);
}
template <class T>
bool unsorted<T>::IsFull()
{
    return (length==Maxvalue);
}
template <class T>
void unsorted<T>::makeEmpty()
{
    length=0;
}
template <class T>
int unsorted<T>::lengthIs()
{
    return length;
}
template <class T>
void unsorted<T>::insertItem(T item)
{
    info[length]=item;
    length++;
}
template <class T>
void unsorted<T>::deleteItem(T item)
{
    for(int i=0; i<length; i++)
    {
        if (item==info[i])
        {
            info[i]=info[length-1];
            length--;
            break;
        }
    }
}
template <class T>
void unsorted<T>::retriveItem(T& item,bool& isfound)
{
    for(int i=0; i<length; i++)
    {
        if (item==info[i])
        {
            isfound=true;
            break;
        }
        else
            isfound=false;
    }
}

    template <class T>
    void unsorted<T>::restList()
    {
        currentPos=-1;
    }
    template <class T>
    void unsorted<T>::getNextItem(T& item)
    {
        currentPos++;
        item=info[currentPos];
    }
