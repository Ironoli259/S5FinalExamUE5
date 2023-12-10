// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;

  UFUNCTION(BlueprintCallable)
  void SaveTimeToSubsystem(const float time);

  UFUNCTION(BlueprintCallable)
  void SaveIsPickedUpToSubsystem(const bool pickedUp);

  UFUNCTION(BlueprintCallable)
  void SaveIsDeliveredToSubsystem(const bool delivered);

  UFUNCTION(BlueprintCallable, BlueprintPure)
  float GetLocalTimeLeft() const;

  UFUNCTION(BlueprintCallable, BlueprintPure)
  bool GetLocalPickedUpPackage() const;

  UFUNCTION(BlueprintCallable, BlueprintPure)
  bool GetLocalDeliveredPackage() const;

private:
  int timeLeft;
  bool pickedUpPackage;
  bool deliveredPackage;

};
