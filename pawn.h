#ifndef ___PAWN___
#define ___PAWN___

#include <string>
#include "piece.h"

class Pawn: public Piece {
	bool firstMove;
public: 
	Pawn(int pos, bool isWhite);
	bool validMove(const std::string &start,const std::string &end, Piece ** b) const override;
	bool isBlank() const override;
	char PT() const override;
	void moved() override;
	bool first() const override;
};

#endif
