/*
	Programmer: Stephen van der Westhuizen
	Github: https://github.com/WeebNetsu
	Language: C++
	Project Idea Source: http://www.cppforschool.com/project/banking-system-project.html
	Build Machine: Linux, Mint
	Multi-Platform Support: Yes
	Built With: make
	Execution File: if Linux: ./run.sh
	Main Editor: Visual Studio Code
	Total Time Worked On Project: 15 hours
	Comment: This is a show of my skills after 1.5 months of learning C++. I did not follow the project exactly like they wanted (as you may have noticed), but I used the idea for myself, created something close to what they wanted, but added my own features.

	Extra: 
		YouTube Channel 1: https://www.YouTube.com/stevesteacher
		YouTube Channel 2: https://www.youtube.com/channel/UCZkCdex94Hp-3Aa-42kPhHg
*/

#include <iostream>

#include "Bank.h"

int main(int argc, char const *argv[])
{
	//myBank(your_bank_name, interest_on_withdraw)
	Bank myBank("Bank of America", 7.14);

	return 0;
}