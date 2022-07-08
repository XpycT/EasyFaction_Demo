// EasyFaction demo project


#include "EFD_HUD.h"
#include "Blueprint/UserWidget.h"

void AEFD_HUD::BeginPlay()
{
	if (ensureMsgf(IsValid(GetOwningPlayerController()), TEXT("%s have a invalid Controller"), *GetName()))
	{
		if(HUDClass) {
			HUDHandle = CreateWidget(GetOwningPlayerController(), HUDClass, FName("Main HUD"));
			HUDHandle->AddToViewport();
		}
	}
	
	Super::BeginPlay();
}
