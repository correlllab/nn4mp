#include <iostream>
#include "Parser.h"


int main(){
    
    HDF5Parser P("../../data/weights.best.hdf5");
    P.parse();

    return 0;
}
