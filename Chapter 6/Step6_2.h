// 6.2.5

#include <cstddef>

// Параметры функции copy_n идут в следующем
// порядке:
//   1. целевой массив
//   2. массив источник
//   3. количество элементов, которые нужно
//      скопировать
//
// Вам нужно реализовать только функцию copy_n,
// чтобы ее можно было вызвать так, как показано
// в примере.

template <typename U,typename T>
T copy_n(T t, U u, int n){
    for (int i = 0; i < n; i++){
        t[i] = u[i];
    }
    return t;
}

// 6.2.8

#include <cstddef>

template <typename T>
class Array
{
public:
	explicit Array(size_t size = 0, const T& value = T());
	Array(const Array& other);
	~Array();
	Array& operator=(Array other);
	void swap(Array &other);
	size_t size() const;
	T& operator[](size_t idx);
	const T& operator[](size_t idx) const;

private:
	size_t size_;
	T *data_;
};
template<typename T, class Comp>
T minimum(Array <T> arrs, Comp compare){
    T a = arrs[0];
    for (size_t i = 0; i < arrs.size(); i++){
        if (compare(a,arrs[i+1]) == false) a = arrs[i+1];
    }
    return a;
}