#ifndef ___MGBOARD___
#define ___MGBOARD___
#include <iostream>
#include "common.h"
#include "MGPiece.h"
using namespace std;

class MGBoard
{
private:
	// �Ֆʃf�[�^
	MGPiece** board;

public:
	MGBoard();
	~MGBoard();
};

#endif