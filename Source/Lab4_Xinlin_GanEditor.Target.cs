// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Lab4_Xinlin_GanEditorTarget : TargetRules
{
	public Lab4_Xinlin_GanEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Lab4_Xinlin_Gan");
	}
}
