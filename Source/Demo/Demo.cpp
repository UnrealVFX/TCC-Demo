// Fill out your copyright notice in the Description page of Project Settings.

#include "Demo.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, Demo, "Demo" );

void FPostProcessingTestModule::StartupModule()
{
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders")); // add this!
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

void FPostProcessingTestModule::ShutdownModule(){}

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ShaderBits, "ShaderBits" );
IMPLEMENT_PRIMARY_GAME_MODULE(FPostProcessingTestModule, Demo, "Demo"); // edit this!