#include<iostream>
#include<cstring>
using namespace std;

void my_strrev(char *);

int main() {
    char my_string[100];
    cout << "Enter your string..\t" ;
    cin.getline(my_string,100);
    cout << my_string << endl;
    my_strrev(my_string);
    cout << my_string << endl;
}
//Using String Librarcy Function
/*
void my_strrev(char * my_string) {
    static int i;
    int len = strlen(my_string)-1;
    if(i<(len-i)) {
        char temp;
        temp = my_string[len-i];
        my_string[len-i] = my_string[i];
        my_string[i] = temp;
        i++;
        my_strrev(my_string);
    }
} */

//Without using string library function
void my_strrev(char * my_string) {
    static int i;
    static int j;
    if(my_string[i]=='\0'){
        return;
    }
    else {
        i++;
        my_strrev(my_string);
        if(i>j){
            i--;  //Have to do i-- before because above if is successing at '\0' so have to i will be at '\0'
                //Thats why taking i-- first to take a step back from '\0' 
            char temp;
            temp = my_string[i];
            my_string[i] = my_string[j];
            my_string[j] = temp;
            j++;
        }
    
    }

}