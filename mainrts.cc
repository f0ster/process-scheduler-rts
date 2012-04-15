#include "rts.h"

int main(int argc, char **argv){
	if(argc != 2) {
		cout << "Usage: rts <input_file>\n";
		return 0;
	}
		bool hardness = 0;
		cout << "Please choose environment:\n (1) Hard\n (0) Soft" << endl;
		cin >> hardness;
		rts sched(hardness);
		sched.loadinput(argv[1]);
		sched.run_sched();
		sched.stats();
		exit(0);
	return 0;
}
