// Write a C++ program to sort the given five names from the keyboard and print it in the sorted order. (Use
// C++'s DMA).

#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    char name[20];
    public:
    void setData(void)
    {
        cout << "Enter name.. : " << endl;
        cin.getline(name,20);
    }

    void getData(void)
    {
        cout << name << endl;
    }
    
    void sortData(Student **&obj)
    {
        char temp[20];
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<5; j++) {
                if(strcmp(obj[i]->name,obj[j]->name)>0) {
                    strcpy(temp,obj[i]->name);               
                    strcpy(obj[i]->name,obj[j]->name);               
                    strcpy(obj[j]->name,temp);               
                }
            }
        }
    }


};
int main()
{
    Student **obj;
    obj = new Student *[5];
    for(int i=0; i<5; i++) {
        obj[i] = new Student;
    }
    for(int i=0;i<5;i++) {
        obj[i]->setData();
    }
    cout << endl;
    cout<< "First it was" << endl;
    for(int i=0; i<5; i++) 
        obj[i]->getData();

    obj[0]->sortData(obj);

    cout << endl << "Sorted" << endl;
    for(int i=0; i<5; i++) 
        obj[i]->getData();

    return 0;

}