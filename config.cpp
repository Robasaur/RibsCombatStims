class CfgMods
{
    class HS_CS_Mod
    {
        name = "HS: Star Wars Combat Stims";
        author = "Rib/Roach";
        picture = "\HSSW_CombatStims\data\logo.paa";
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
        weapons[] = {"StimRelief", "StimAdrenal"};
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
        displayName = "Clone Combat Relief Stim";
        picture = "\HSSW_CombatStims\data\clonebasestimulant.paa";
        model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d"; //JLTS
        descriptionShort = "Inject into arm, for minimal pain relief";
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
            "\HSSW_CombatStims\data\clonebasestimulant.paa"
        };
    };

    class StimAdrenal: StimRelief
    {
        displayName = "Clone Combat Adrenal Stim";
        model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d"; //JLTS
        picture = "\HSSW_CombatStims\data\cloneadrenstimulant.paa";
        descriptionShort = "Inject into arm, for some aim assist";

        hiddenSelections[] = 
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "\HSSW_CombatStims\data\cloneadrenstimulant.paa"
        };
    };


};


class ACE_Medical_Treatment {
    
    class Morphine;

    class Medication 
    {
        class ribpain_CRS: Morphine 
        {
            author = "Rib/Roach";
            hrIncreaseLow[] = {0};
            hrIncreaseNormal[] = {0};
            hrIncreaseHigh[] = {0};
            painReduce = 0.4;
            timeInSystem = 420;
            timeTillMaxEffect = 75;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 2;
        };
        class ribAdren_CAS: Morphine
        {
            author = "Rib - fuck you";
            hrIncreaseLow[] = {25};
            hrIncreaseNormal[] = {15};
            hrIncreaseHigh[] = {10};
            painReduce = 0.1;
            timeInSystem = 150;
            timeTillMaxEffect = 15;
            maxDose = 4;
            incompatibleMedication[] = {"ACE_epinephrine"};
            viscosityChange = 5;
        };
    };
};


class ACE_Medical_Treatment_Actions 
{
    class Morphine; /*Arma*/
    class Epinephrine; /*Arma*/

    class ribpain_CRS: Morphine
    {
        displayName = "Shoot a stim to relieve yourself";
        displayNameProgress = "Injecting Combat Stim... ... ...";
        allowedSelections[] = {"LeftArm","RightArm","LeftLeg","RightLeg"};
        items[] = {"StimRelief"};
        treatmentTime = 3;
        category = "medication";
    };

    class ribAdren_CAS: ribpain_CRS
    {
        displayName = "Time to Stimmy up";
        displayNameProgress = "Injecting Adrenal Stim... ... ...";
        allowedSelections[] = {"LeftArm","RightArm","LeftLeg","RightLeg"};
        items[] = {"StimAdrenal"};
        treatmentTime = 3;
        category = "medication";
    };

};


class CfgFncs 
{
    class meds 
    {
        class ribpain 
        {
            class fn_PainReduceGlobal 
            {
                file = "\HSSW_CombatStims\fncs\fn_PainReduceGlobal.sqf";
            };
            class fn_PainReduceLocal 
            {
                file = "\HSSW_CombatStims\fncs\fn_PainReduceLocal.sqf";
            };
        };
        class ribAdren 
        {
            file = "fncs\fn_adrenal";
        };
    };
};


