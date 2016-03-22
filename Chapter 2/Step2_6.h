// 2.6.9

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * newstr = new char[new_size];
    if (new_size < size){
    for (int i = 0; i < new_size; i++){
        newstr[i] = str[i];
        
        }
        delete[] str;
    }
    if (new_size > size){
        for (int i = 0; i < new_size; i++){
            newstr[i] = str[i];
            
        }
        delete[] str;
    }
    
    return newstr;
}