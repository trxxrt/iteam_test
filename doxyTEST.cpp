//! Generate a stack overflow
/*! 
 * \brief General Recommendations : Do not use.
 */


#include <iostream>


//! Prototypes
void recursive_call();

//! Main function
int main(int argc, char* argv[])
{
	recursive_call();
	return 1;
}

//! Procedure for a recursive call
void recursive_call()
{
	char dummy_tab[1000];
	recursive_call();
}
