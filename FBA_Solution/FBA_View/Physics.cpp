#include "Physics.h"

FBAView::Physics::Physics(){

}

FBAView::Physics::Physics(FBAModel::Game_obj::TypeElement type, int index, FBAModel::Game_obj::Band band) {
	this->type = type;
	this->index = index;
	this->band = band;
}
