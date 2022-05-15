#include<iostream>
#include<cstring>
using namespace std;

class deep
{
private:
    char *s;
public:
    deep() {
    }
    deep(const char * temp) {
        s = new char[strlen(temp) +1];
        strcpy(s,temp);
    }
    deep(deep & temp) {
        s = new char[strlen(temp.s) +1];
        strcpy(s,temp.s);
    }
    void modify() {
        s[0] = 'A';
    }
    void get_data() {
        cout << s << endl;
    }
};





int main(int argc, char const *argv[])
{
    deep obj("Kishan"),obj_2(obj);
    obj.get_data();
    obj_2.get_data();
    obj.modify();
    obj.get_data();
    obj_2.get_data();
    return 0;
}
