#include <iostream>
#include <bitset>
#include <cstdint>

int main(){
	
    uint16_t IR1 = 0xAAAA;
	uint8_t Lead_Bit = IR1 >> 15;
	uint8_t INST = (IR1 >> 10) & 0x1f; // bit shift and mask all but
	uint8_t RegD = (IR1 >> 5) & 0x1f;  // but the first five bits
	uint8_t RegR = IR1 & 0x1f;		   // for our decode
    
    std::cout<< std::bitset<16>(Lead_Bit) << std::endl;
    std::cout << std::bitset<8>(INST) << "\n"
              << std::bitset<8>(RegD) << "\n"
			  << std::bitset<8>(RegR) << "\n";

	switch(INST)
	{
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
