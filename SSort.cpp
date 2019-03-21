#include <iostream>
int main()
{
    int size{5};
    int array[size];
    int temp{0};

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
        int lowest = i;
        for (int j = i; j < size; ++j)
        {
            if (array[lowest] > array[j])
            {
                lowest = j;
            }
        }
        temp = array[i];
        array[i] = array[lowest];
        array[lowest] = temp;
    }
    std::cout << "After" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}