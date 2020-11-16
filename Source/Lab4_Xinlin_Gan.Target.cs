// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Lab4_Xinlin_GanTarget : TargetRules
{
	public Lab4_Xinlin_GanTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Lab4_Xinlin_Gan");
	}
}
