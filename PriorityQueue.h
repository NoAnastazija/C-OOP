//
// Created by nogra on 03/06/2024.
//

#ifndef NALOGA0801_PRIORITYQUEUE_H
#define NALOGA0801_PRIORITYQUEUE_H

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <vector>
#include <stdexcept>
#include <algorithm>
#include "Priority.h"
#include "Time.h"

using namespace std;

template <typename T>
class PriorityQueue {
private:
    vector<T> values;
    int indexNextHigh;

public:
    PriorityQueue();

    bool isEmpty() const;

    unsigned int size() const;

    void add(const T& value, Priority priority);

    T pop();

    T getMax() const;
};

// Specialization for Time class
template <>
Time PriorityQueue<Time>::getMax() const;

#include "PriorityQueue.cpp"

#endif // PRIORITYQUEUE_H

#endif //NALOGA0801_PRIORITYQUEUE_H
