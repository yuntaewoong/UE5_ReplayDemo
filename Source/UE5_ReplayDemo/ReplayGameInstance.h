// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5_REPLAYDEMO_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UReplayGameInstance();

	UPROPERTY(EditDefaultsOnly, Category = "Replays")
	FString recordingName;

	UPROPERTY(EditDefaultsOnly, Category = "Replays")
	FString friendlyRecordingName;

	UFUNCTION(BlueprintCallable, Category = "Replays")
	void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
	void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
	void StartReplay();
};
