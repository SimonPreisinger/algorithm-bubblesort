//
// Created by simon on 25.06.18.
//

#include "bubblesort.h"

void sort(int *a, int n) {
    bool swappedSomething;
    do {

        swappedSomething = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                swappedSomething = true;
            }

        }
    } while (swappedSomething);
}
