// 2.7.9

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **Mt = new int * [cols];
    for (int i = 0; i!= cols; ++i)
        Mt[i] = new int[rows]; 
    for (int i = 0; i!= rows; ++i)
        for (int j = 0; j!= cols; ++j)
        Mt[j][i] = m[i][j];
    return Mt;
}

// 2.7.10

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = 0;            // номер строки с минимальным элементом
    int minimum = 100500;  // минимальный элемент
    
    for (int i = 0; i!= rows; ++i)
        for (int j = 0; j!= cols; ++j){
            if (m[i][j] < minimum){
                min = i;
                minimum = m[i][j];
            }
        }
    int *M = new int [cols];  
        for (int i = 0; i!= cols; ++i){
            M[i] = m[min][i];
            m[min][i] = m[0][i];
            m[0][i] = M[i];
    }
}