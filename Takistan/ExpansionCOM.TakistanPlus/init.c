#include "$CurrentDir:\\Missions\\ExpansionCOM.TakistanPlus\\core\\BaseModuleInclude.c"
#ifdef EXPANSIONMOD
#include "$CurrentDir:\\Missions\\ExpansionCOM.TakistanPlus\\expansion\\missions\\MissionConstructor.c"
#endif

Mission CreateCustomMission(string path)
{
	return new CommunityOfflineClient();
}

void main()
{
	bool loadTraderObjects = true;
	bool loadTraderNPCs = true;

	string MissionWorldName = "empty";
	GetGame().GetWorldName(MissionWorldName);
	
	if (MissionWorldName != "empty")
	{
		//! Spawn mission objects and traders
		ExpansionObjectSpawnTools.FindMissionFiles("$CurrentDir:\\Missions\\ExpansionCOM." + MissionWorldName, loadTraderObjects, loadTraderNPCs);
	}
	
	//! Init server central economy
	// Hive ce = CreateHive();
	// if ( ce )
	// 	ce.InitOffline();
}