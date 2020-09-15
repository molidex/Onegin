#include "header.h"


int main()
{
	int number_of_lines = 0;
	Line* normal_lines = Read_lines("in.txt", &number_of_lines);

	Line* copy_lines = Copy_lines(normal_lines, number_of_lines);

	qsort(copy_lines, number_of_lines, sizeof(Line), comparator_normal);

	Write_lines("out.txt", copy_lines, number_of_lines, "w", "Watch sorted lines by first elements");
	
	qsort(copy_lines, number_of_lines, sizeof(Line), comparator_back);

	Write_lines("out.txt", copy_lines, number_of_lines, "a", "Watch sorted lines by last elements");

	Write_lines("out.txt", normal_lines, number_of_lines, "a", "Watch original text");
	
	Delete_lines(normal_lines, number_of_lines);
	Delete_lines(copy_lines, number_of_lines);

	return 0;
}


