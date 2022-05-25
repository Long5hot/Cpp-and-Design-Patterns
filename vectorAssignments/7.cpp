//Make an object of 5 ,scan from user and display it then sort.

#include<iostream>
#include<cstring>
using namespace std;
class Student {

	int rollno, marks;
	char name[20];
	public:
	
	void setData() {
		cout << "Eneter rollno, name and Marks..:" << endl;
		cin >> rollno >> name >> marks;
	}

	void display() {
		cout << rollno << " " << name <<" " << marks << endl;
	}

    void sortData(Student *obj) {
        int temp;
        char temparory[20];
        for(int i=0;i<4;i++) {
            for(int j=i+1; j<5; j++) {
                if(obj[i].rollno > obj[j].rollno) {
                    temp = obj[i].rollno;
                    obj[i].rollno = obj[j].rollno;
                    obj[j].rollno = temp;

                    strcpy(temparory, obj[i].name);
                    strcpy(obj[i].name, obj[j].name);
                    strcpy(obj[j].name,temparory);
                    
                    temp = obj[i].marks;
                    obj[i].marks = obj[j].marks;
                    obj[j].marks = temp;

                }
            }
        }
    }
};


int main() {
    Student Object[5];
    for(int i=0;i<5;i++)
        Object[i].setData();

    cout << endl;
    
    for(int i=0;i<5;i++)
        Object[i].display();

    Object[0].sortData(Object);

    cout << endl << "Sorted Objects" << endl;

    for(int i=0;i<5;i++)
        Object[i].display();


}