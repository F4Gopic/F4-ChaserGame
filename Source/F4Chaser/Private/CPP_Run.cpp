// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Run.h"
#include <iostream>



using namespace std;

// Sets default values
ACPP_Run::ACPP_Run()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Run::BeginPlay()
{
	Super::BeginPlay();

	FVector ActorLocationChunked = GetActorLocation();

	ActorLocationChunked + 1000, 500, 0;

	


 


		


	
	
}

// Called every frame
void ACPP_Run::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



int Main_File_Chunk_A1(int FileSize, int FileData) {


	int MainFS = 2;
	int MainFD = 0;

	

	if (MainFS >= 0 || MainFS <= 2)


		MainFD = 123423;

	cout << MainFS << endl;
	cout << MainFD << endl;

	return MainFD;



}

