#include "stdio.h"

#define SIZE 10
#define SUCCESS 1
#define FAILURE 0

typedef void update(const int board[SIZE][SIZE], int result[SIZE][SIZE], int maxSize);

void iterate(const int board[SIZE][SIZE], int result[SIZE][SIZE], int maxSize){
	return;
}

int test_gol_step(update fn, const int board[SIZE][SIZE], int expected[SIZE][SIZE]){
	int result[SIZE][SIZE];
	fn(board,result, SIZE);
	for (int rowIndex = 0; rowIndex < SIZE; rowIndex++){
    for(int columnIndex = 0; columnIndex < SIZE; columnIndex++){
      if( result[rowIndex][columnIndex] != expected[rowIndex][columnIndex]){
        return FAILURE;
      }
    }
	}

	return SUCCESS;
}

int main(int argc, char* argv[]){
  
	printf("Fish...\n");

	const int board[SIZE][SIZE] = {
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

	};
	int expected[SIZE][SIZE] = {
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	};

	if(test_gol_step(&iterate, board, expected) == SUCCESS){
    printf("Passed\n");
  }else{
    printf("Failed\n");
  }

#ifdef WIN32  
	getchar();
#endif

  return 0;
}



