#include<iostream>
#include<cstring>
using namespace std;

char * my_strstr(char *,char *);

int main() {
    char my_string[100];
    cout << "Enter your main string" << endl;
    cin.getline(my_string,100);

    cout << "Enter the substring" << endl;
    char sub_string[100];
    cin >> sub_string;

    char * result = my_strstr(my_string,sub_string);
    if(result==NULL)
        cout << "Its NULL" << endl;
    else
        cout << result << endl;
    
}


char * my_strstr(char *my_string, char *sub_string) {
    if(*my_string == '\0')
        return NULL;
    if((*my_string)==(*sub_string)) {
        int i;
        for(i=0;i<strlen(sub_string);i++)
            if((*(my_string+i))!=(*(sub_string+i)))
                break;
        
        if(*(sub_string+i)=='\0')
            return my_string;
        else 
            return my_strstr(my_string+1,sub_string);        
    }
    else {
        return my_strstr(my_string+1,sub_string);
    }
}

