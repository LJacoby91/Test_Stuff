#include <iostream>
#include <bitset>
#include <cstdint>

int main(){
	uint16_t IR1 = 0xAAAA;
	uint8_t LeadBit = IR1 >> 15;
	uint8_t OP = IR1 >> 10;
	uint8_t DR = IR1 >> 5;
	
	std::bitset<1>LB_decode(LeadBit);
	std::bitset<5>OP_decode(OP);
	std::bitset<5>DR_decode(DR);
	std::bitset<5>SR_decode(IR1);

	std::cout << std::bitset<16>(IR1) << "\n";
	std::cout << LB_decode << " " << OP_decode << " " << DR_decode << " " << SR_decode << std::endl;
}
