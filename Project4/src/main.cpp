#include "ising.h"

int main(int argc, char *argv[]) {
	
	int dim = atoi(argv[1]);
    int temp = atoi(argv[2]);
    int cycles = atoi(arc[3]);
	Ising myClass = Ising(dim);
	myClass.initialise_system(temp);

	return 0;
}
