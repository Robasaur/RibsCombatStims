class CfgMods
{
    class HS_CS_Mod
    {
        name = "HS: Combat Stims";
        author = "Rib/Roach";
        hideName = "false";
        hidePicture = "false";
    };
};

class CfgPatches 
{
    class Helix_Studios_Combat_Stims 
    {
        name = COMPONENT_NAME;
        author = "Rib/Roach";
        units[] = {};
        weapons[] = {"StimRelief", "StimAdrenal", "StimLatheniol","CyanoBacta","StimUeed"};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_medical_engine", 
            "ace_medical_status", 
            "ace_medical_treatment",
            "A3_Data_F"
        };
    };
};

class CfgFncs 
{
    class HS 
    {
        class HSP 
        {
            class PainReduction
            {
                file = "\fncs\fn_PainReduceGlobal.sqf";
            };
            class PainReductionLocal 
            {
                file = "\fncs\fn_PainReduceLocal.sqf";
            };
        };
        class Adrenal
        {
            file = "\fncs\fn_adrenal.sqf";
        };
        class UeedInc
        {
            file = "\fncs\fn_speed.sqf";
        };
    };
};


class CfgWeapons 
{
    class ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

    class StimRelief: ACE_ItemCore 
    {
        author = "Rib/Roach";
        category = "medication";
        scope = 2; 
        displayName = "[CS] Relief Stim";
        picture = "\RibsCombatStims\data\stimpain.paa";
        logo = "\RibsCombatStims\data\stimpain.paa";
        model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d"; //JLTS
        descriptionShort = "Inject into arm, for pain relief";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.1;
        };

        hiddenSelections[] = 
        {
            "camo1"
        };
		hiddenSelectionsTextures[] = 
        {
            "\RibsCombatStims\data\clonebasestimulant.paa"
        };
    };

    class StimAdrenal: StimRelief
    {
        displayName = "[CS] Adrenal Stim";
        picture = "\RibsCombatStims\data\stimadre.paa";
        logo = "\RibsCombatStims\data\stimadre.paa";
        descriptionShort = "Inject into arm, for adrenal";

        hiddenSelections[] = 
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "\RibsCombatStims\data\cloneadrenstimulant.paa"
        };
    };

    class StimLatheniol: StimRelief
    {
        displayName = "[CS] Latheniol Stim";
        descriptionShort = "Inject into others to immediately kill";
        picture = "\RibsCombatStims\data\stimlath.paa";
        logo = "\RibsCombatStims\data\stimlath.paa";
        hiddenSelections[] = 
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "\RibsCombatStims\data\clonelathstimulant.paa";
        };
    };

    class CyanoBacta: StimRelief
    {
        displayName = "[CS] Cyano-Silicate Bacta";
        descriptionShort = "Spray to cauterise immediately";
        picture = "\RibsCombatStims\data\bactaspray.paa";
        logo = "\RibsCombatStims\data\bactaspray.paa";
        model = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.5;
        };
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class StimUeed: StimRelief
    {
        displayName = "[CS] Simu'eed Stim";
        descriptionShort = "Inject to increase metabolism";
        picture = "\RibsCombatStims\data\stimu'eed.paa";
        logo = "\RibsCombatStims\data\stimu'eed.paa";
        hiddenSelections[] = 
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "\RibsCombatStims\data\cloneueedstimulant.paa";
        };
    };

};


class ACE_Medical_Treatment {
    
    class Morphine; /*extern*/

    class Bandaging {
        class ElasticBandage; /*extern*/

        class HS_CSS: ElasticBandage 
        {
			class Abrasion {
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 900;
				reopeningMaxDelay = 1600;
			};

			class AbrasionMinor: Abrasion {
			};

			class AbrasionMedium: Abrasion {
				effectiveness = 4;
				reopeningChance = 0;
			};

			class AbrasionLarge: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
			};

			class Avulsions: Abrasion {
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 900;
				reopeningMaxDelay = 1600;
			};

			class AvulsionsMinor: Avulsions {
				effectiveness = 3;
			};

			class AvulsionsMedium: Avulsions {
				effectiveness = 2;
			};

			class AvulsionsLarge: Avulsions {
				effectiveness = 2;
				reopeningChance = 0;
			};

			class Contusion: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};

			class ContusionMinor: Contusion {
			};

			class ContusionMedium: Contusion {
			};

			class ContusionLarge: Contusion {
			};

			class Crush: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 700;
				reopeningMaxDelay = 1100;
			};

			class CrushMinor: Crush {
				reopeningChance = 0;
			};

			class CrushMedium: Crush {
				effectiveness = 2;
			};

			class CrushLarge: Crush {
				effectiveness = 1.750000;
				reopeningChance = 0;
			};

			class Cut: Abrasion {
				effectiveness = 6;
				reopeningChance = 0;
				reopeningMinDelay = 800;
				reopeningMaxDelay = 1100;
			};

			class CutMinor: Cut {
			};

			class CutMedium: Cut {
				effectiveness = 4;
				reopeningChance = 0;
			};

			class CutLarge: Cut {
				effectiveness = 3;
				reopeningChance = 0;
			};

			class Laceration: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 600;
				reopeningMaxDelay = 2000;
			};

			class LacerationMinor: Laceration {
			};

			class LacerationMedium: Laceration {
				effectiveness = 2;
			};

			class LacerationLarge: Laceration {
				effectiveness = 1.500000;
				reopeningChance = 0;
			};

			class velocityWound: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 900;
				reopeningMaxDelay = 2000;
			};

			class velocityWoundMinor: velocityWound {
			};

			class velocityWoundMedium: velocityWound {
				effectiveness = 2;
			};

			class velocityWoundLarge: velocityWound {
				effectiveness = 1.750000;
			};

			class punctureWound: Abrasion {
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 1000;
				reopeningMaxDelay = 3000;
			};

			class punctureWoundMinor: punctureWound {
			};

			class punctureWoundMedium: punctureWound {
				effectiveness = 2.500000;
			};

			class punctureWoundLarge: punctureWound {
				effectiveness = 2;
			};
		};
    };

    class Medication 
    {
        class HSP_CRS: Morphine 
        {
            author = "Rib/Roach";
            hrIncreaseLow[] = {0};
            hrIncreaseNormal[] = {0};
            hrIncreaseHigh[] = {0};
            painReduce = 0.5;
            timeInSystem = 420;
            timeTillMaxEffect = 75;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 5;
        };
        class HSA_CAS: HSP_CRS
        {
            hrIncreaseLow[] = {25};
            hrIncreaseNormal[] = {15};
            hrIncreaseHigh[] = {10};
            painReduce = 0.1;
            timeInSystem = 150;
            timeTillMaxEffect = 15;
            maxDose = 4;
            incompatibleMedication[] = {"ACE_epinephrine"};
            viscosityChange = -10;
        };
        class HS_CLS: HSP_CRS
        {
            hrIncreaseLow[] = {-90};
            hrIncreaseNormal[] = {-60};
            hrIncreaseHigh[] = {200};
            painReduce = 1;
            timeInSystem = 120;
            timeTillMaxEffect = 80;
            maxDose = 2;
            viscosityChange = 60;
            incompatibleMedication[] = {"StimAdrenal","StimRelief","ACE_morphine","ACE_epinephrine"};
        };
        class HSU_CSU: HSA_CAS
        {
            hrIncreaseLow[] = {60};
            hrIncreaseNormal[] = {40};
            hrIncreaseHigh[] = {60};
            painReduce = 0;
            timeInSystem = 240;
            timeTillMaxEffect = 60;
            maxDose = 2;
            incompatibleMedication[] = {"StimAdrenal"};
            viscosityChange = -20;
        };

    };
};


class ACE_Medical_Treatment_Actions 
{
    class Morphine; /*ace*/
    class BasicBandage; /*ace*/

    class HSP_CRS: Morphine
    {
        displayName = "Inject Pain Relief";
        displayNameProgress = "Injecting Combat Stim... ... ...";
        allowedSelections[] = {"LeftArm","RightArm","LeftLeg","RightLeg"};
        items[] = {"StimRelief"};
        callbackSuccess = "HS_fnc_PainReduction";
        treatmentTime = 3;
        category = "medication";
    };
    class HSA_CAS: HSP_CRS
    {
        displayName = "Inject Adrenal";
        displayNameProgress = "Injecting Adrenal Stim... ... ...";
        items[] = {"StimAdrenal"};
        callbackSuccess = "HS_fnc_Adrenal";
    };
    class HS_CLS: HSP_CRS
    {
        displayName = "Inject Latheniol";
        displayNameProgress = "Euthanising the Patient, please wait up to 80 seconds before effect....";
        items[] = {"StimLatheniol"};
        callbackSuccess = "HS_fnc_PainReduction";
        allowedSelections[] = {"Torso"};
        treatmentTime = 6;
    };
    class HS_CSS: BasicBandage
    {
        displayName = "Spray Cyano Silicate Bacta";
        displayNameProgress = "Cauterising wounds, disinfecting affected areas ";
        items[] = {"CyanoBacta"};
        callbackSuccess = "HS_fnc_PainReduction";
        treatmentTime = 10;
        //Look at "Uses"?
    };
    class HSU_CSU: HSA_CAS
    {
        displayName = "Inject StimUeed";
        displayNameProgress = "Injecting StimUeed Stim, wait up to a minute for full affect... ... ...";
        items[] = {"StimUeed"};
        callbackSuccess = "HS_fnc_UeedInc";
    };

};
//420 :)

