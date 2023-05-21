#include <iostream>
#include "heap.h"

std::vector<int> siftup(std::vector<int> data, int index) {
    if(index == 0) {
        return data;
    }

    if(data[index] >= data[index/2]) {
        return data;
    }

    int temp = data[index];
    data[index] = data[index/2];
    data[index/2] = temp;
    
    return siftup(data, index/2);
}

std::vector<int> remove_min(std::vector<int> data) {
    std::vector<int> d;

    //the min in a heap is the root/first element
    for(int i = 1; i< data.size(); i++) {
        d.push_back(data[i]);
    }
    return d;
}

std::vector<int> heapsort(std::vector<int> data) {
    std::vector<int> sorted;
    while(data.size() != 0) {
        for(int i = 0; i< (data.size()); i++) {
            data = siftup(data, i);
        }

        sorted.push_back(data[0]);
        data = remove_min(data);
    }
    
    return sorted;
}