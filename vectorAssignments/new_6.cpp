#include<iostream>
#include<string.h>
using namespace std;
class Student {

	int rollno, marks;
	char name[20];
	public:	
	void set_data() {
		cout << "Eneter rollno, name and Marks..:" << endl;
		cin >> rollno >> name >> marks;
	}
	void display() {
		cout << rollno << " " << name <<" " << marks << endl;
	}
	void sort_data(Student *B) {
		Student * temp= new Student;
		if(rollno > B->rollno) {
			temp->rollno = rollno;
			rollno = B->rollno;
			B->rollno = temp->rollno;
		
			strcpy(temp->name,name);
			strcpy(name,B->name);
			strcpy(B->name,temp->name);

			temp->marks = marks;
			marks = B->marks;
			B->marks = temp->marks;
		}
	}
};

int main() {
	Student a[5];
	int i,j;

	for(i=0;i<5;i++)
		a[i].set_data();
	cout<<endl;
	
	for(i=0;i<5;i++)
		a[i].display();
	
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			a[i].sort_data(&a[j]);
	cout<<endl;

	for(i=0;i<5;i++)
		a[i].display();

}













