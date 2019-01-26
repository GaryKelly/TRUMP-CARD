#pragma once
const int level1[10][10]{ 1,1,1,1,1,1,1,1,1,1,   // row 1
				  		  0,0,1,0,0,1,0,0,0,1,   // row 2
						  1,0,1,1,0,1,1,1,0,1,   // row 3
						  1,0,0,0,0,0,1,0,0,1,   // row 4
						  1,1,1,0,1,1,1,0,1,1,   // row 5
						  1,0,1,0,0,1,0,0,0,1,   // row 6
						  1,0,0,1,0,1,0,1,0,1,   // row 7
						  1,1,0,0,0,1,0,1,0,1,   // row 8
						  1,1,1,1,0,0,0,1,0,0,   // row 9
						  1,1,1,1,1,1,1,1,1,1 }; // row 10

const int level2[10][10]{ 1,1,1,1,1,1,1,1,1,1,   // row 1
						  1,0,0,0,0,1,1,1,1,1,   // row 2
						  1,1,1,0,1,0,0,0,0,1,   // row 3
						  1,1,1,0,1,0,1,1,0,1,   // row 4
						  1,1,0,0,0,0,1,1,0,1,   // row 5
						  1,1,0,1,0,1,1,1,0,1,   // row 6
						  1,1,0,1,0,1,0,0,0,1,   // row 7
						  1,1,0,1,1,1,0,1,0,1,   // row 8
						  0,0,0,1,0,0,0,1,0,1,   // row 9
						  1,1,1,1,0,1,1,1,1,1 }; // row 10

const int level3[10][10]{ 1,1,1,1,0,1,1,1,1,1,   // row 1
						  1,0,0,0,0,1,0,1,0,1,   // row 2
						  1,1,1,1,0,1,0,0,0,1,   // row 3
						  1,0,0,1,0,1,0,1,0,1,   // row 4
						  1,0,1,1,0,0,0,1,0,1,   // row 5
						  0,0,1,1,1,1,1,1,0,1,   // row 6
						  1,0,1,0,0,0,0,1,0,1,   // row 7
					  	  1,0,0,0,1,0,1,1,0,1,   // row 8
						  1,0,1,1,1,0,0,0,0,1,   // row 9
						  1,1,1,1,1,1,1,1,1,1 }; // row 10

const int level4[10][10]{ 1,1,1,1,1,1,1,1,1,1,   // row 1
						  1,0,0,1,0,0,0,0,0,1,   // row 2
						  1,1,0,0,0,1,1,0,1,1,   // row 3
						  1,0,0,1,1,0,0,0,1,1,   // row 4
						  1,1,0,0,1,0,1,1,1,1,   // row 5
						  1,0,1,0,1,0,1,1,0,0,   // row 6
						  1,0,0,0,1,0,0,0,0,1,   // row 7
						  1,1,0,1,1,1,1,1,1,1,   // row 8
						  1,0,0,0,0,0,0,0,0,1,   // row 9
						  1,1,1,1,1,1,1,1,1,1 }; // row 10 


enum class Level
{
	LEVEL1,
	LEVEL2,
	LEVEL3,
	LEVEL4
};


const int BLOCK_H_AND_W{ 42 };