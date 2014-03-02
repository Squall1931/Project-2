#include util.h
#include <stdio.h>
#include <unistd.h>



//Create a file pointer for out
FILE* out_file(char* filename) 
{
	//This will create a file pointer to the log.txt file
	//If it does not exist, it will create it 
	//and start from the last point of insertion
	FILE* fp = fopen(filename, "w");
	return fp;
}

//Create a file pointer for log
FILE* log_file(char* filename) 
{
	//This will create a file pointer to the log.txt file
	//If it does not exist, it will create it 
	//and start from the last point of insertion
	FILE* fp = fopen(filename, "w");
	return fp;
}

char* current_directory(char* filename) 
{

}

char* output_stream(char* filename) 
{

}
