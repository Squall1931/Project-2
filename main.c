#include util.h
#include <stdio.h>
#include <unistd.h>

FILE* directory_data = malloc(sizeof(FILE*));
FILE* out = malloc(sizeof(FILE*));

int main()
{
	//Add a buffer the size of a max line would be
	char* output_line = malloc(sizeof(char));
	char* directory_line = malloc(sizeof(char));

	//Add a buffer for the directories to keep track of
	FILE* current_directory = malloc(sizeof(FILE*));	

	//Need open file pointer for log.txt
	directory_data = log_file("log.txt");

	//Need open file pointer for out.txt
	out = out_file("out.txt");

	//Write the data to out.txt
	fputs(output_line, out);

	//Write directory that has the string
	//to log.txt
	fputs(current_directory,  directory_data);





	


	return 0;
}
