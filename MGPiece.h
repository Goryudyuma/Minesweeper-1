#ifndef ___MGPIECE___
#define ___MGPIECE___
#include "common.h"

class MGPiece
{
private:
	unsigned long group; // O[v
	int num; // όΝΜe SENTINELΕ»Μ}XΝe
	bool flag; // tO

public:
	MGPiece() :group(0), num(0), flag(false) {}
	~MGPiece();
};

#endif