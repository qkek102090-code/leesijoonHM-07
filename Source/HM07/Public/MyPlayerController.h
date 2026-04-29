

#pragma once

#include "EnhancedInputComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
UCLASS()
class HM07_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AMyPlayerController();
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	UInputAction* LookAction;	
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	UInputAction* SprintAction;	
protected:
	virtual void BeginPlay() override;
};
