#include <iostream>
#include <cstdlib>
#include <time.h>
#include "heap.h"

int main() {
    int vec_size = 10;
    std::vector<int> vec(vec_size);
    
    srand(time(nullptr));
    for(int i = 0; i < vec_size; i++) {
        vec[i] = (rand()%20 + 1);
    }


    std::vector<int> svec = heapsort(vec);

    std::cout<< "Unsorted Data: \n";
    for(int i = 0; i< vec.size(); i++) {
        std::cout<< vec[i] << ", ";
    }

    std::cout<< "\n\nSorted Data: \n";
    for(int i = 0; i< svec.size(); i++) {
        std::cout<< svec[i] << ", ";
    }

    std::cout<< "\n";

    return 0;
}