// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1


/*Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to
the header file or the source file.
Operation to Be Tested and Description of Action Input Values Expected Output
• Create a list of integers
•
• Insert four items 5 7 6 9
• Print the list 5 7 6 9
• Print the length of the list 4
• Insert one item 1
• Print the list 5 7 6 9 1
• Retrieve 4 and print whether found or not Item is not found
• Retrieve 5 and print whether found or not Item is found
• Retrieve 9 and print whether found or not Item is found
• Retrieve 10 and print whether found or not Item is not found
• Print if the list is full or not List is full
• Delete 5
• Print if the list is full or not List is not full
• Delete 1
• Print the list 7 6 9
• Delete 6
• Print the list 7 9
• Write a class studentInfo that represents a student
record. It must have variables to store the student ID,
student’s name and student’s CGPA. It also must have a
function to print all the values. You will also need to
overload a few operators.

• Create a list of objects of class studentInfo.

• Insert 5 student records

15234 Jon 2.6
13732 Tyrion 3.9
13569 Sandor 1.2
15467 Ramsey 2 3.1
16285 Arya 3.1

• Delete the record with ID 15467
• Retrieve the record with ID 13569 and print whether
found or not along with the entire record

Item is found
13569, Sandor, 1.2

• Print the list
15234, Jon, 2..6
13732, Tyrion, 3.9
13569, Sandor, 1.2
16285, Arya, 3.1*/

#include <iostream>
#include"unsorted.cpp"
#include"StudentInfo.h"
using namespace std;

int main()
{
    unsorted<int> x1;
    for (int i=0; i<4; i++)
    {
        int temp ;
        cout<<"Enter the number :";
        cin>>temp;
        x1.insertItem(temp);
        cout<<endl;
    }
    if(x1.IsEmpty())
        cout<<"List is Empty !"<<endl;
    else
        cout<<"List is not Empty !"<<endl;

    cout<<endl;

    if(x1.IsFull())
        cout<<"List is Full !"<<endl;
    else
        cout<<"List is not Full !"<<endl;

    cout<<endl;
    int d;
    cout<<"Enter another number : ";
    cin>>d;
    x1.insertItem(d);
    if(x1.IsFull())
        cout<<"List is Full !"<<endl;
    else
        cout<<"List is not Full !"<<endl;

    for(int i=0;i<x1.lengthIs();i++)
    {
        int item;
        x1.getNextItem(item);
        cout<<item<<"  ";
    }
    cout<<endl;
    x1.restList();
    int k;
    cout<<"Enter the number you want to delete :";
    cin>>k;
    x1.deleteItem(k);
    for(int i=0;i<x1.lengthIs();i++)
    {
        int item;
        x1.getNextItem(item);
        cout<<item<<"  ";
    }
    cout<<endl;
    x1.restList();
    int value ;
    cout<<"Enter a number for check :";
    cin>>value;

    bool found=false;
    x1.retriveItem(value,found);
    if(found)
        cout<<value<< " is in the List !"<<endl;
    else
        cout<<value<< "is not found in the List !"<<endl;

    StudentInfo s1 (101721,"Junayed",3.05);
    StudentInfo s2 (201729,"Habib",3.91);
    StudentInfo s3 (991721,"Khalid",4.01);
    StudentInfo s4 (188991,"Rahim",2.15);

    unsorted<StudentInfo>SI;

    SI.insertItem(s1);
    SI.insertItem(s2);
    SI.insertItem(s3);
    SI.insertItem(s4);

    StudentInfo temp;
    for (int i=0;i<4;i++)
    {
        SI.getNextItem(temp);
        temp.print();
    }
     /*StudentInfo s8;
     s8.getid(2);
     bool found;
     SI.retriveItem(s8,found);
     if(found)
        cout<<"Student is in the list "<<endl;
     else
        cout<<"Student is notin the list "<<endl;*/


}
