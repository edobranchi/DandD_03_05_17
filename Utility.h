//
// Created by Edoardo Canti on 03/05/17.
//

#ifndef DANDD_170405_2_UTILITY_H
#define DANDD_170405_2_UTILITY_H


template<typename T>
const T& maxElement(const T& first, const T& second) {
    if(first>second)
        return first;
    else
        return second;
}


#endif //DANDD_170405_2_UTILITY_H
