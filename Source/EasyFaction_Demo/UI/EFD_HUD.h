// EasyFaction demo project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EFD_HUD.generated.h"

/**
 * 
 */
UCLASS()
class EASYFACTION_DEMO_API AEFD_HUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "UI", meta = (BindWidget))
	TSubclassOf<class UUserWidget> HUDClass;

private:
	TWeakObjectPtr<UUserWidget> HUDHandle;
	
};
