#include "Grid.h"

Grid::Grid() {
}

Grid::~Grid() {
}

Grid::GridType Grid::getType() const {
    return type;
}

void Grid::setType(GridType type_) {
    type = type_;
}
