//
// Created by nogra on 03/06/2024.
//
#include "PriorityQueue.h"

// Constructor
template <typename T>
PriorityQueue<T>::PriorityQueue() : indexNextHigh(0) {}

// Check if the queue is empty
template <typename T>
bool PriorityQueue<T>::isEmpty() const {
    return values.empty();
}

// Get the size of the queue
template <typename T>
unsigned int PriorityQueue<T>::size() const {
    return values.size();
}

// Add an element to the queue with the specified priority
template <typename T>
void PriorityQueue<T>::add(const T& value, Priority priority) {
    if (priority == Priority::HIGH) {
        values.insert(values.begin() + indexNextHigh, value);
        indexNextHigh++;
    } else {
        values.push_back(value);
    }
}

// Pop the highest priority element from the queue
template <typename T>
T PriorityQueue<T>::pop() {
    if (isEmpty()) {
        throw out_of_range("Queue is empty");
    }
    T front = values.front();
    values.erase(values.begin());
    if (indexNextHigh > 0) {
        indexNextHigh--;
    }
    return front;
}

// Get the maximum element in the queue
template <typename T>
T PriorityQueue<T>::getMax() const {
    if (isEmpty()) {
        throw out_of_range("Queue is empty");
    }
    return *max_element(values.begin(), values.end());
}

// Specialization for Time class
template <>
Time PriorityQueue<Time>::getMax() const {
    if (isEmpty()) {
        throw out_of_range("Queue is empty");
    }
    return *max_element(values.begin(), values.end(), [](const Time& a, const Time& b) {
        return a.toSeconds() < b.toSeconds();
    });
}
