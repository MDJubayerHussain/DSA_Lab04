#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
const int Maxvalue =5 ;

template <class T>
class unsorted
{
public:
    unsorted ();
    bool IsEmpty();
    bool IsFull();
    void makeEmpty();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T&,bool&);
    void restList();
    void getNextItem(T&);

private:
    T info[Maxvalue];
    int length;
    int currentPos;

};
#endif // UNSORTED_H_INCLUDED
