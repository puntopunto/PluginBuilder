// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ARActor.h"
#include "ARVector.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINBUILDER_API AARVector : public AARActor
{
	GENERATED_BODY()
private:
	FVector Evect;
	float x, y, z;
public:
	bool is_cords_same(Fvector* Evect, float x, float y, float z);
};
