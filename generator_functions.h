#ifndef GENERATOR_FUNCTIONS
#define GENERATOR_FUNCTIONS


#include <stdlib.h>
#include <sys/time.h>
#include <vector>
#include "functions.h"
#include "analyzer_functions.h"

//The main function to generate a random frame
std::vector <bool> generate_frame();

//Stuff the frame
unsigned int stuff_frame(std::vector <bool>& frame, bool can);

//Fixed Stuffed CRC Field
std::vector <bool> stuff_crc(std::vector <bool> const& stuff_count, std::vector <bool> const& crc,
                             const bool first_bit);


#endif // GENERATOR_FUNCTIONS