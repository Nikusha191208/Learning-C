#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	if (*argv[1] == 'h'){
		char *home = getenv("HOME");

		if (home == NULL){
			printf("Can't find home directory.\n'");
			return EXIT_FAILURE;
		}

		printf("Home dir: %s\n", home);

	} else {

		if (argc == 2){
			printf("Please enter more than 1 number.\n");
			return EXIT_FAILURE;
		}

		float sum;

		for (int i = 1; i < argc; i++){

			char *log;

			int num = strtof(argv[i], &log);

			if (log[0] != '\0'){
				printf("ERROR -> cant convert '%s' to float.\n", log);
				return EXIT_FAILURE;
			}

			sum += num;
		}

		printf("Sum: %.1f\n", sum);

	}

	return EXIT_SUCCESS;
}
