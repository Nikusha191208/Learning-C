#include <stdio.h>

struct Math {
    int perWeek;
    char *type;
};

struct Physics {
    int perWeek;
};

struct Student {
    int class;

    union {
	struct Math math;
	struct Physics physics;
    } subject;
};

void printSubject(struct Student *student){
    if (student->class == 1){
	printf("Per Week: %d\nType: %s\n", student->subject.math.perWeek, student->subject.math.type);
    } 
    else if (student->class == 2){
	printf("Per Week: %d\n", student->subject.physics.perWeek);
    }
};

int main(void){
    struct Student nikoloz = {.class = 1, .subject.math.perWeek = 5, .subject.math.type = "algebar"};
    printSubject(&nikoloz);
}
