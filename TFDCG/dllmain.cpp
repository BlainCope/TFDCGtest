#include "pch.h"
// using namespace CG::BasicTypes;
// using namespace CG::CoreUObject;
// using namespace CG::Engine;

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	if (!CG::BasicTypes::InitSdk())
	{
		return FALSE;
	}

	// TODO: Fill your code here
	CG::Engine::UWorld* gWorld = *CG::Engine::UWorld::GWorld;
	auto MyController = gWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;

	//create an instance of m1
	CG::M1 m1 = CG::M1:FindObject();
	//Access member variable

	return TRUE;
}
