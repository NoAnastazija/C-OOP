#include <iostream>
#include "PriorityQueue.h"
#include "Priority.h"
#include "Time.h"
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <memory>


int main() {
    // PriorityQueue with int
    PriorityQueue<int> intQueue;
    intQueue.add(5, Priority::LOW);
    intQueue.add(1, Priority::HIGH);
    intQueue.add(3, Priority::LOW);
    cout << "Max int: " << intQueue.getMax() << endl;
    cout << "Pop int: " << intQueue.pop() << endl;

    // PriorityQueue with string
    PriorityQueue<string> stringQueue;
    stringQueue.add("low", Priority::LOW);
    stringQueue.add("high", Priority::HIGH);
    cout << "Max string: " << stringQueue.getMax() << endl;
    cout << "Pop string: " << stringQueue.pop() << endl;

    // PriorityQueue with Time
    PriorityQueue<Time> timeQueue;
    timeQueue.add(Time(1, 30, 0), Priority::LOW);
    timeQueue.add(Time(2, 15, 0), Priority::HIGH);
    cout << "Max time: " << timeQueue.getMax().toString() << endl;
    cout << "Pop time: " << timeQueue.pop().toString() << endl;

    // PriorityQueue with shared_ptr<Time>
    PriorityQueue<shared_ptr<Time>> sharedPtrQueue;
    sharedPtrQueue.add(make_shared<Time>(1, 30, 0), Priority::LOW);
    sharedPtrQueue.add(make_shared<Time>(2, 15, 0), Priority::HIGH);
    cout << "Max shared_ptr<Time>: " << sharedPtrQueue.getMax()->toString() << endl;
    cout << "Pop shared_ptr<Time>: " << sharedPtrQueue.pop()->toString() << endl;

    return 0;
}
