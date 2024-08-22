#include "pch.h"


using namespace CG;
using namespace CG::BasicTypes;
using namespace CG::CoreUObject;
using namespace CG::Engine;
class cheat_manager {
private:
	UWorld** UWorld::GWorld;
	UWorld* gWorld;
	APlayerController* PlayerController;
	ULocalPlayer* LocalPlayer;
	UGameInstance* OwningGameInstance;
	UGameViewportClient* GameViewportClient;
	AGameStateBase* GameState;
	AActor* obj;
	UGameplayStatics* UGStatics;
	UKismetSystemLibrary* KismetSystemLib;
	APawn* MyPlayer;
	M1::AM1Player* BaseClass; //change a class for each game
	UKismetMathLibrary* MathLib;
	int x, y = 0;
public:
	void cheat_thread();
	void dump_bones();
};