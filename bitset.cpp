#include <iostream>
#include <bitset>
#include <cstdint>

int main(){
	uint16_t IR1 = 0xAAAA;
	uint8_t LeadBit = IR1 >> 15;
	uint8_t OP = IR1 >> 10;
	uint8_t DR = IR1 >> 5;
	
	//initialize bitset objects from IR1, LeadBit, OP, and DR 
	std::bitset<1>LB_decode(LeadBit);
	std::bitset<5>OP_decode(OP);
	std::bitset<5>DR_decode(DR);
	std::bitset<5>SR_decode(IR1);

	std::cout << std::bitset<16>(IR1) << "\n";
	std::cout << LB_decode << " " << OP_decode << " " << DR_decode 				    << " " << SR_decode << std::endl << std::endl;

	uint16_t OPCODE = 0x1111;
	std::cout << std::bitset<16>(OPCODE) << std::endl;
	
	
	for(int i = 0; i < 4; ++i){

	//checks which iteration of i we are at to deterimine
	//what to decode. Do note our bitset variables here only
	//exsist in the scope of the for loop so we wont be able
	//to use them later, same with the dummy variable d
		
		switch(i){
			case 0:
				{
				LeadBit = OPCODE >> 15;
				std::bitset<1>LB2_decode(LeadBit);
				std::cout << LB2_decode << " ";
				}
				break;
				
			case 1:
				{
				OP = OPCODE >> 10;
				std::bitset<5>OP2_decode(OP);
				std::cout << OP2_decode << " ";
				}
				break;
			case 2:
				{
				DR = OPCODE >> 5;
				std::bitset<5>DR2_decode(DR);
				std::cout << DR2_decode << " ";
				}
				break;
			case 3:
				{
				std::bitset<5>SR2_decode(OPCODE);
				std::cout << SR2_decode << std::endl;
				int d = 0;
					
					switch(d){
						case 1:
							std::cout << "duh" << std::endl;
							break;
						default:
							std::cout << "d isn't 1 right now" 
									  << std::endl;
							break;
					}
				}
				break;	
		}
	}

}
