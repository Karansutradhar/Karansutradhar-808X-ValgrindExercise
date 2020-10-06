/** Copyright 2020 Karan Sutradhar
 * @file AnalogSensor.hpp
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
 *  This is hpp file for AnalogSensor this file has the defintions of the Analong Sensor 
 *  Class attributes and Methods
 */


#pragma once

#include <iostream>

/**
 * @brief it is the declaration of AnalogSensor Class
 */

class AnalogSensor {
 public:
	/**
     * @brief It is the constructor of the class AnalogSensor 
     * @param samples unsigned int which stores number of samples to be read.
     * @return None
    */

    explicit AnalogSensor(unsigned int samples);

    /**
     * @brief It is the destructor of the class AnalogSensor 
     * @param None
     * @return None
    */

    ~AnalogSensor();

    /**
     * @brief It is the Read method of the AnalogSensor class
     * @param None
     * @return int value
    */

    int Read();

 private:
    unsigned int mSamples;
};
