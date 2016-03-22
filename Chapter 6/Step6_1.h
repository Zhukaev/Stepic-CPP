// 6.1.6

#include <cstddef>
 
template <typename T>
class Array
{
    public:
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    explicit Array(size_t size = 0, const T& value = T()){
            size_ = size;
            data_ = new T[size_];
            for(size_t k = 0; k < size_; k++)
                data_[k] = value;
            }
    //   деструктор, если он вам необходим.    
    ~Array() {delete [] data_;}
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    Array(Array &other): size_(other.size_),data_(new T[other.size_]){
        for (size_t i = 0; i < size_; i++)
            data_[i] = other.data_[i];
    }
    //   оператор присваивания.    
    Array& operator=(Array &other){
        if (this != &other){
            delete [] data_;
            size_ = other.size_;
            data_ = new T[size_];
            for (size_t j = 0; j < size_; j++)
                data_[j] = other.data_[j];
            }
        return *this;
    }
    //   возвращает размер массива (количество элементов).
    size_t size() const{return size_;}
    //   две версии оператора доступа по индексу.    
    T& operator[](size_t n){return data_[n];}
    const T& operator[](size_t n) const{return data_[n];}
   
        private:
        T * data_;
        size_t size_;
};