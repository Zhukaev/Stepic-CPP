// 1

#include <cmath>
// Воспользуйтесь константой для пи - M_PI

// базовый класс для фигур
struct Shape
{
    virtual double area() const = 0;    // метод area вычисляющий площадь фигуры
    virtual ~Shape(){};
};

// класс для круга
struct Circle : Shape
{
    // конструктор от радиуса
    Circle(double R){
        this->R = R;
    }
    // реализация метода area
    double area() const{
        return (M_PI*this->R*this->R);
    }
    public:
    double R;
};

// класс прямоугольника
struct Rectangle : Shape
{
    // конструктор от ширины и высоты
    Rectangle(double A,double B){
        this->A = A;
        this->B = B;
    }
    // реализация метода area
    double area() const{
        return(this->A*this->B);
    }
    double A;
    double B;
};

// 2

// шаблонный класс Vector2D  

template <typename T>
struct Vector2D
{
     // конструктор по-умолчанию, инициализирует координаты нулями
     Vector2D() {
         x = 0;
         y = 0;
     }

     // конструктор от x и y
     Vector2D(T x, T y) {
         this->x = x;
         this->y = y;
     }
     template <typename U>         // конструктор от Vector2D с другим шаблонным параметром 
     Vector2D(Vector2D<U> const& v) {
         
         this->x=T(v.x);
         this->y=T(v.y);
     }

     // поля
    T x;
    T y;
};

// оператор +
template <typename T>
Vector2D<T> operator+(Vector2D<T> a, Vector2D<T> b) {
    return Vector2D<T>(a.x+b.x, a.y+b.y);
}

// оператор -
template <typename T>
Vector2D <T> operator-(Vector2D <T> a, Vector2D <T> b) {
    return Vector2D<T>(a.x-b.x, a.y-b.y);
}
// оператор умножения на число слева
template <typename T>
Vector2D<T> operator*(Vector2D<T> k, T a) {
    return Vector2D<T>(a*k.x, a*k.y);
}
// оператор умножения на число справа
template <typename T>
Vector2D<T> operator*(T a, Vector2D<T> k) {
    return Vector2D<T>(a*k.x, a*k.y);
}