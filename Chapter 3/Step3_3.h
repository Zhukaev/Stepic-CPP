// 3.3.10

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
    String(const char *str = ""){
        this -> size = strlen(str);
        char* nw = new char[this->size+1];
        strcpy(nw, str);
        this -> str = nw;
    }
    size_t size;
    char *str;
};

// 3.3.11

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    String(size_t n, char c){
        char* str = new char[n + 1];
        for (size_t i = 0; i < n; ++i)
            str[i] = c;
        str[n]='\0';
        this->str = str;
        size = n;
    }
    ~String(){delete [] str;}
    
	size_t size;
	char *str;
};

// 3.3.12 

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


 void append(String &other) {
        char * temp = new char[size+other.size+1];
        strcat(strcpy(temp, str),other.str);
        delete [] str;
        this->str = temp+'\0';
        this->size = strlen(temp);
       // delete [] temp;
 }
	size_t size;
	char *str;
};