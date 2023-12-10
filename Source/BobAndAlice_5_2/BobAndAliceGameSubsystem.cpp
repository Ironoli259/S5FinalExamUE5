#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SaveTimeToSubsystem(const float time)
{
	this->timeLeft = time;
}

void UBobAndAliceGameSubsystem::SaveIsPickedUpToSubsystem(const bool pickedUp)
{
	this->pickedUpPackage = pickedUp;
}

void UBobAndAliceGameSubsystem::SaveIsDeliveredToSubsystem(const bool delivered)
{
	this->deliveredPackage = delivered;
}

float UBobAndAliceGameSubsystem::GetLocalTimeLeft() const
{
	return this->timeLeft;
}

bool UBobAndAliceGameSubsystem::GetLocalPickedUpPackage() const
{
	return this->pickedUpPackage;
}

bool UBobAndAliceGameSubsystem::GetLocalDeliveredPackage() const
{
	return this->deliveredPackage;
}
