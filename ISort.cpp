#include <iostream>
int main()
{
    int size{5};
    int array[size];
    int temp{0};
    int key{0};
    int j{0};

    for (int i = 0, j = size; i < size; ++i, --j)
    {
        array[i] = j;
    }
    std::cout << "Before" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 1; i < size; ++i)
    {
        key = array[i];
        for (j = i; j > 0; --j)
        {
            if (array[j - 1] < key)
                break;
            array[j] = array[j - 1];
        }
        array[j] = key;
    }
    std::cout << "After" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}