// 4.1.7

#include <string> // std::string

struct Character
{
    std::string const & name() const;
    unsigned health() const;
};

struct LongRange : Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;
};

struct SwordsMan : Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned strength() const;    
};

struct Wizard : LongRange //: Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned mana() const;
};

struct Archer : LongRange// : Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned accuracy() const;
};

//4.1.9

/* Этот код просто напоминание как выглядит класс Foo и функция foo_says.
 * Не нужно его расскоментировать и/или менять.
 *
 * #include <iostream>
 *        
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 * 
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// Вам нужно определить функцию get_foo, как описано в задании,
// чтобы компилировался и работал как ожидается следующий код:
//
// foo_says(get_foo("Hello!"));

Foo get_foo(const char *msg) {
struct Foo1 : Foo {      
  public:
      Foo1(const char *msg) : Foo(msg) { }
  };
    Foo1 a(msg);
    return a;
}