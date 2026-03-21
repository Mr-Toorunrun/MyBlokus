#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
#include "Block.h"


    void Block::provisionalParts(std::string nowSelected, int vert, int hori) {
        board.clearBoard();
        if (nowSelected == "1") {
            board.setProvisionalChanges(vert - 1, hori);
            board.setProvisionalChanges(vert, hori - 1);
            board.setProvisionalChanges(vert - 1, hori - 1);
        }

        if (nowSelected == "2") {
            board.setProvisionalChanges(vert, hori);
            board.setProvisionalChanges(vert, hori - 1);
            board.setProvisionalChanges(vert, hori - 2);
            board.setProvisionalChanges(vert - 1, hori - 1);
        }

        if (nowSelected == "3") {
            board.setProvisionalChanges(vert, hori);
            board.setProvisionalChanges(vert - 1, hori);
        }

        if (nowSelected == "4") {
            board.setProvisionalChanges(vert, hori);
            board.setProvisionalChanges(vert, hori - 1);
            board.setProvisionalChanges(vert, hori - 2);
        }

        if (nowSelected == "5") {
            board.setProvisionalChanges(vert, hori);
        }

        if (nowSelected == "6") {
            board.setProvisionalChanges(vert, hori - 1);
            board.setProvisionalChanges(vert - 1, hori);
            board.setProvisionalChanges(vert, hori - 1);
            board.setProvisionalChanges(vert - 1, hori - 1);
        }

    }