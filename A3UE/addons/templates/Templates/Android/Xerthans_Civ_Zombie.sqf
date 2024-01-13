//////////////////////////////
//   Civilian Information   //
//////////////////////////////

["attributeCivNonHuman", true] call _fnc_saveToTemplate; // This is the main part that allows this template to act as "non-humans", e.g no civ rep loss

//////////////////////////
//       Vehicles       //
//////////////////////////

private _civCarsWithWeights = [
    "SSV_Vehicle_Android_Ifrit", 1.0,
    "SSV_Vehicle_Android_Strider_Ruined", 0.2,
    "OPTRE_M12_CIV_IND", 0.5,
    "OPTRE_Genet_IND", 0.8
];

["vehiclesCivCar", _civCarsWithWeights] call _fnc_saveToTemplate;

["vehiclesCivIndustrial", [
    "SSV_Vehicle_Vanguard_Ifrit", 1.0,
    "OPTRE_forklift_IND", 0.5
]] call _fnc_saveToTemplate;

["vehiclesCivBoat", [
    "optre_catfish_cma_unarmed_f", 0.1
]] call _fnc_saveToTemplate;

["vehiclesCivRepair", [
    "OPTRE_M914_RV_CMA", 0.3
]] call _fnc_saveToTemplate;

["vehiclesCivMedical", ["SSV_Vehicle_Android_Strider_Ruined", 0.1]] call _fnc_saveToTemplate;

["vehiclesCivFuel", [
    "OPTRE_m1015_mule_fuel_cma", 0.2
]] call _fnc_saveToTemplate;

["vehiclesCivHeli", ["SSV_Vehicle_Vanguard_VTOL_Infantry", "OPTRE_CMA_falcon_unarmed"]] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////

private _civUniforms = [
    "SSV_Uniform_Android_Pilot",
    "SSV_Uniform_Android_Military"
];

["uniforms", _civUniforms] call _fnc_saveToTemplate;

["headgear", []] call _fnc_saveToTemplate;

private _loadoutData = call _fnc_createLoadoutData;

_loadoutData set ["uniforms", _civUniforms];
_loadoutData set ["pressUniforms", ["SSV_Uniform_Android_Worker"]];
_loadoutData set ["pressVests", ["SSV_Vest_Vanguard_QRF_Marksman", "SSV_Vest_Vanguard_Marksman"]];
_loadoutData set ["pressHelmets", ["SSV_Helmet_Vanguard_Drone"]];

_loadoutData set ["workerUniforms", ["SSV_Uniform_Vanguard_Worker", "SSV_Uniform_Vanguard_J13"]];
_loadoutData set ["workerHelmets", ["SSV_Helmet_Vanguard_Miner", "SSV_Helmet_Vanguard_Worker"]];

_loadoutData set ["helmets", []];

_loadoutData set ["maps", ["ItemMap"]];
_loadoutData set ["watches", ["ItemWatch"]];
_loadoutData set ["compasses", ["ItemCompass"]];

private _manTemplate = {
    ["uniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};
private _workerTemplate = {
    ["workerHelmets"] call _fnc_setHelmet;
    ["workerUniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};
private _pressTemplate = {
    ["pressHelmets"] call _fnc_setHelmet;
    ["pressVests"] call _fnc_setVest;
    ["pressUniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};

// This array (and the weights one below it), defines units and stuff that get used in towns
private _specialUnits = [
    "SSV_Unit_Vanguard_Xerthan",
    "SSV_Unit_Vanguard_Xerthan_Melee"
];

private _specialUnitsWeights = [
    1.0,
    0.5
];

private _prefix = "militia";
private _unitTypes = [
    ["Press", _pressTemplate], // to-do: allow press to spawn but make them special infected
    ["Worker", _workerTemplate], // needed to be normal for resources, factories, etc
    ["Man", _manTemplate],
    ["Special", _manTemplate, [["baseClass", [_specialUnits, _specialUnitsWeights], true]]] // if you change the true to false, it will attempt to run the loadout script on your special units. You may or may not want this, so test first!
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;