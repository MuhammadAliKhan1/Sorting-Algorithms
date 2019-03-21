#include <iostream>
int main()
{
    int size{5};
    int array[size];

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

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < (size - i - 1); ++j)
        {
            if (array[j] > array[j + 1])
            {
                int temp{0};
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    std::cout << "After" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}