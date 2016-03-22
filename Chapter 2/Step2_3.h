// 2.3.9

void rotate(int a[], unsigned size, int shift)
{
    for (int i = 0; i < shift; i++){
        int b = a[0];
        for (int j = 0; j < size; j++)
            a[j]=a[j+1];
            a[size-1]=b;
    }
}