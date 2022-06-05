#include<iostream>
using namespace std;
class Student{
    int rollno;
    float marks;
    char name[20];
    friend istream & operator >> (istream & , Student &);
    friend ostream & operator << (ostream & , Student &);
};
istream & operator >> (istream & in , Student & obj) {
    std::cout << "Enter rollno name marks" << std::endl;
    in >> obj.rollno >> obj.name >> obj.marks;
    return in;
}

ostream & operator << (ostream & out , Student & obj) {
    out << obj.rollno << " " << obj.name  << " " << obj.marks << std::endl;
    return out;
}

int main() {
    Student s1,s2;
    cin >> s1 >> s2;
    cout << endl;
    cout << s1 << s2 << endl;
}
