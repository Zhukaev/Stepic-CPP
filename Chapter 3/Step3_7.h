// 3.7.10

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте конструктор копирования */
    String(const String &other) : size(other.size),str(new char[size]){
        //char* str = new char[size];
        for (size_t i = 0; i < size; ++i)
            str[i] = other.str[i];
        str[size] = '\0';
    }
	void append(const String &other);

	size_t size;
	char *str;
};

// 3.7.11

#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

    /* Реализуйте оператор присваивания */
    String &operator=(const String &other){
        if (this != &other)
            String(other).swap(*this);
        return *this;
    }

    void swap (String &other){
        std::swap(size, other.size);
        std::swap(str, other.str);
    }
	void append(const String &other);

	size_t size;
	char *str;
};