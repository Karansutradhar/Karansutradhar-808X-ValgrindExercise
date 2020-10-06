/** Copyright 2020 Karan Sutradhar
 * @file AnalogSensor.cpp
 * @editor
 *
 * Karan Sutradhar (117037272)
 *
 *
 * @date 10/05/2020
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * @section DESCRIPTION
 *
 *  This is cpp file for AnalogSensor this file implements the Analong Sensor 
 *  Class attributes and Methods
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

/** 
 * @brief It is the constructor for the class AnalogSensor
 * @param samples is an unsigned integer.
 * @return None
*/

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

/** 
 * @brief It is the destructor for for the class AnalogSensor
 * @param None
 * @return None
*/

AnalogSensor::~AnalogSensor() {
}

/** 
 * @brief It is a Read method for the class AnalogSensor
 * @param None
 * @return result - int value of the result being returned.
*/
int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(),
    readings->end(), 0.0)/readings->size();
    delete (readings);     // delete added my editor
    return result;
}


