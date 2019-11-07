#include "types.h"
#include "user.h"


int main()
{
	int pid = fork();
	for (int i=0; i<50; i++) {
		if (pid == 0) {
			printf(1, "+");
			yield();
		}
		else {
			printf(1, "-");
			yield();
		}
	}
	if (pid > 0) 
		wait();

	exit();
	return 0;
}
