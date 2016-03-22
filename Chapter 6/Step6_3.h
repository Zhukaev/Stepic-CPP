// 6.3.7

// Определите шаблон SameType с двумя типовыми
// параметрами. В шаблоне должна быть определена
// одна статическая константа типа bool с именем
// value
template<typename One, typename Two>
    struct SameType {
        static const bool value = false;
    };
template <typename One> struct
    SameType <One, One>{
        static const bool value = true;
    };