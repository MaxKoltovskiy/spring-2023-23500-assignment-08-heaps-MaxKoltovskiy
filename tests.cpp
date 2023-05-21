#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "heap.h"

TEST_CASE("heapsort") {
    std::vector<int> data = {5,3,6,1,4,8,9,10,2,7};
    data = heapsort(data);

    for(int i = 0; i< 10; i++) {
        CHECK(data[i] == i+1);
    }
}