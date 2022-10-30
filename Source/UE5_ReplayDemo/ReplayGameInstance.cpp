// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplayGameInstance.h"

UReplayGameInstance::UReplayGameInstance()
{
	recordingName = "MyReplay";
	friendlyRecordingName = "My Replay";
}

void UReplayGameInstance::StartRecording()
{
	StartRecordingReplay(recordingName, friendlyRecordingName);
}

void UReplayGameInstance::StopRecording()
{
	StopRecordingReplay();
}

void UReplayGameInstance::StartReplay()
{
	PlayReplay(recordingName, nullptr);
}
