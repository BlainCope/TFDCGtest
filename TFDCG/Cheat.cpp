#include "pch.h"
#include "SDK/Headers/Engine_UKismetMathLibrary.h"
#include "Cheat.hpp"
#include "SDK/Headers/Engine_UGameplayStatics.h"
#include "SDK/Headers/M1_AM1Character.h"
#include "SDK/Headers/M1_AM1Player.h"

using namespace CG;

void cheat_manager::cheat_thread()
{

	gWorld = Engine::UWorld::GWorld[0];
	if (!gWorld) return;

	OwningGameInstance = gWorld->OwningGameInstance;
	if (!OwningGameInstance) return;

	LocalPlayer = OwningGameInstance->LocalPlayers[0];
	if (!LocalPlayer) return;

	GameViewportClient = LocalPlayer->ViewportClient;
	if (!GameViewportClient) return;

	PlayerController = LocalPlayer->PlayerController;
	if (!PlayerController) return;

	PlayerController->GetViewportSize(&x, &y);

	MyPlayer = PlayerController->K2_GetPawn();
	if (!MyPlayer) return;

	TArray<AActor*> Player;

	auto UGStatics = (CG::Engine::UGameplayStatics*)CG::Engine::UGameplayStatics::StaticClass();
	if (!UGStatics) return;

	//some games GetAllActorOfClass is STATIC_GetAllActorsOfClass

	//class to math operations
	MathLib = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
	if (!MathLib) return;
	/*
	for (int i = 0; i < Player.Count(); i++)
	{
		if (!Player.IsValidIndex(i)) continue;

		obj = Player[i];
		if (!obj) continue;
		BaseClass = Cast<AMyShootCharacter>(obj);
		if (!BaseClass) continue;

		FVector Location = BaseClass->K2_GetActorLocation();

		if (PlayerController)
			PlayerController->FOV(cfg->fov_changer ? cfg->fov_value : 90); //Simple fov changer

		auto PlayerName = BaseClass->PlayerState->PlayerNamePrivate;
		bool IsVisible = PlayerController->LineOfSightTo(obj, { 0,0,0 }, false); //visible check
		*/
		/*
		//Draw bones
		FVector2D BoneScreen, PrevBoneScreen;
		for (const std::pair<int, int>& Connection : skeleton::Connections)
		{
			const auto Bone1 = Connection.first;
			const auto Bone2 = Connection.second;
			const auto BoneLoc1 = BaseClass->Mesh->GetSocketLocation(BaseClass->Mesh->GetBoneName(Bone1));
			const auto BoneLoc2 = BaseClass->Mesh->GetSocketLocation(BaseClass->Mesh->GetBoneName(Bone2));
			if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false) && PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
			{
				if (cfg->skeleton)
					ImGui::GetOverlayDrawList()->AddLine(ImVec2(BoneScreen.X, BoneScreen.Y), ImVec2(PrevBoneScreen.X, PrevBoneScreen.Y), IsVisible ? ImColor(0, 255, 0) : ImColor(255, 0, 0), 1.0f);
			}
		}
		*/
		//FVector HeadLoc = BaseClass->Mesh->GetSocketLocation(BaseClass->Mesh->GetBoneName(ERigBoneType::head));
		//FVector RootLoc = BaseClass->Mesh->GetSocketLocation(BaseClass->Mesh->GetBoneName(EBone_Man_Base_Rig::Root));
/*
		FVector2D head, Bottom;
		if (PlayerController->ProjectWorldLocationToScreen(RootLoc, &Bottom, false) && PlayerController->ProjectWorldLocationToScreen(HeadLoc, &head, false))
		{
			if (cfg->names)
				ImGui::GetOverlayDrawList()->AddText(ImVec2(head.X, head.Y), IsVisible ? ImColor(0, 255, 0) : ImColor(255, 0, 0), PlayerName.IsValid() ? PlayerName.ToString().c_str() : " ");

			float CornerHeight = abs(head.Y - Bottom.Y);
			float CornerWidth = CornerHeight * 0.6f;

			if (cfg->box)
				draw->DrawBox(head.X - (CornerWidth / 2), head.Y, CornerWidth, CornerHeight, IsVisible ? ImColor(0, 255, 0) : ImColor(255, 0, 0), 1.0f);
		}
		*/
	}
}