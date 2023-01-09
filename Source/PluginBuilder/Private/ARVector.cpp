// Fill out your copyright notice in the Description page of Project Settings.


#include "ARVector.h"

class PLUGINBUILDER_API AARVector : public AARActor
{
private:
	float x, y, z;
	
public:
	AARVector(float x, float y, float z);
	bool is_cords_same(FVector* OtherVector, *this)
	{
		if (OtherVector ->Equals(*this)) return true;
	}
};