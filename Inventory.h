//
// Created by Edoardo Canti on 03/05/17.
//
//

#ifndef DANDD_170405_2_INVENTORY_H
#define DANDD_170405_2_INVENTORY_H

template<typename T>
class Inventory {

public:
    explicit Inventory(int size);
    ~Inventory() {
        delete[] elements;
    }
    bool setElement(int pos, const T& element);
    // T& getElement(int pos) const; //TODO
    bool getElement(int pos, T& element) const;

protected:
    int numElements;
    T* elements;
};

template <typename T>
Inventory<T>::Inventory(int size) : numElements(size) {
    elements = new T[numElements]; //classe specializzata su obj che hanno costruttori di defualt
}

template <typename T>
bool Inventory<T>::setElement(int pos, const T &element) {

    if((pos>=0) && (pos<numElements))
    {
        elements[pos] = element;
        return true;
    }
    return false;
}

template <typename T>
bool Inventory<T>::getElement(int pos, T &element) const {
    if(pos>=0 && pos<numElements)
    {
        element = elements[pos];
        return true;
    }
    return false;
}

#endif //DANDD_170405_2_INVENTORY_H
