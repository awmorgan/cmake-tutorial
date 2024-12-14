#include <stdio.h>
#include <assert.h>
#include "mathutils.h"

void test_addition() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    printf("Addition tests passed!\n");
}

void test_subtraction() {
    assert(subtract(5, 3) == 2);
    assert(subtract(1, 1) == 0);
    assert(subtract(0, 5) == -5);
    printf("Subtraction tests passed!\n");
}

int main() {
    printf("Running mathlib tests...\n");
    
    test_addition();
    test_subtraction();
    
    printf("All tests passed!\n");
    return 0;
}
