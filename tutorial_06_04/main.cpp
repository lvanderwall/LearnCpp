#define quiz3

#ifdef quiz1
/*
    { 30, 60, 20, 50, 40, 10 }      // before selection sort
      **                  **        // swap(30, 10)
    { 10, 60, 20, 50, 40, 30 }
          **  **                    // swap(60, 20)
    { 10, 20, 60, 50, 40, 30 }
              **          **        // swap(60, 30)
    { 10, 20, 30, 50, 40, 60 }
                  **  **            // swap(50, 40)
    { 10, 20, 30, 40, 50, 60 }
                      **            // swap(50, 50) (self swap)
    { 10, 20, 30, 40, 50, 60 }
                          **        // swap(60, 60) (self swap)
    { 10, 20, 30, 40, 50, 60 }      // after selection sort
*/
#endif // quiz1
#ifdef quiz2
#include <utility> // for std::swap, use <algorithm> instead if older than C++11
#include <iostream>

int main()
{
    const int length = 5;
    int array[length] = { 30, 50, 20, 10, 40 };

    // Step through each element of the array
    // (except the last one, which will already be sorted by the time we get there)
    for (int startIndex = 0; startIndex < length - 1; ++startIndex) {
        // largestIndex is the index of the largest element we’ve encountered this iteration
        // Start by assuming the largest element is the first element of this iteration
        int largestIndex = startIndex;

        // Then look for a larger element in the rest of the array
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) {
            // If we've found an element that is larger than our previously found largest
            if (array[currentIndex] > array[largestIndex])
                // then keep track of it
                largestIndex = currentIndex;
        }

        // largestIndex is now the largest element in the remaining array
        // swap our start element with our largest element (this sorts it into the correct place)
        std::swap(array[startIndex], array[largestIndex]);
    }

    // Now that the whole array is sorted, print our sorted array as proof it works
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';

    return 0;
}
#endif // quiz2
#ifdef quiz3
#include <iostream>
#include <utility>      // for std::swap


int main()
{
    int array[] { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    const int length{ sizeof(array) / sizeof(array[0]) };

    // bubbleSort() (unoptimized)
    // sort (length-1) elements, the last element will be sorted automatically
    for(int i{0}; i < length - 1; ++i)      // C
        // compare (length-1) elements, the last has none to compare against
        for(int j{0}; j < length - 1; ++j)  // A, B
            if(array[j] > array[j + 1]) std::swap(array[j], array[j + 1]);

    // print array
    for(int i{0}; i < length; ++i)
        std::cout << array[i] << ' ';

    return 0;
}
#endif // quiz3
