#include <iostream>
#include <bitset>
#include <cstdint>

int main(){
	
    uint16_t IR1 = 0xAAAA;
	uint8_t Lead_Bit = IR1 >> 15;
	uint8_t INST = IR1 >> 10 & 0b100000 ;
	uint8_t RegD = IR1 >> 5;
    
    std::cout<< std::bitset<16>(Lead_Bit) << std::endl;
    std::cout << std::bitset<16>(INST) << "\n"
              << std::bitset<5> (RegD) << "\n";

	switch(INST){
        case 1:{
            std::cout << "we're good\n";
            break;
        }
        default:{
            std::cout << "We're not good\n";
            break;
        }
    }
	
}	
