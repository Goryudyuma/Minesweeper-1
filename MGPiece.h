#ifndef ___MGPIECE___
#define ___MGPIECE___
#include "common.h"

class MGPiece
{
private:
	unsigned long group; // �O���[�v
	int num; // ���͂̔��e�� SENTINEL�ł��̃}�X�͔��e
	bool flag; // �t���O

public:
	MGPiece() :group(0), num(0), flag(false) {}
	~MGPiece();
};

#endif