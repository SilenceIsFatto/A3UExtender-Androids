class B_T_VTOL_01_infantry_F;

class a3u_extender_vehicle_blackfish_blue : B_T_VTOL_01_infantry_F
{ // Since we inherit from the blackfish class, we have all of that classes values. So we specifically re-state the ones we want to change
    displayName = "Blackfish (Android)";
    hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",""};
};

class OPTRE_M875_SPH_CMA
{
    class AnimationSources;
};

class a3u_extender_vehicle_m875_black : OPTRE_M875_SPH_CMA
{
    displayName = "M875 Self Propelled Howitzer (Android)";
    class AnimationSources : AnimationSources
    { // tbh, I don't know how to inherit the animSources... so copy paste baby! (this is not advice)
        class muzzle_rot_cannon
        {
            source = "ammorandom";
            weapon = "OPTRE_mortar_155mm";
        };
        class recoil_source
        {
            source = "reload";
            weapon = "OPTRE_mortar_155mm";
        };
        class showCamonetGun
        {
            animPeriod = 0.001;
            author = "Article 2 Studios";
            displayName = "Attach Gun Camo Net";
            initPhase = 1;
            mass = -50;
            source = "user";
        };
        class showCamonetHull
        {
            animPeriod = 0.001;
            author = "Article 2 Studios";
            displayName = "Attach Hull Camo Net";
            initPhase = 1;
            mass = -50;
            source = "user";
        };
        class showCamonetTurret
        {
            animPeriod = 0.001;
            author = "Article 2 Studios";
            displayName = "Attach Turret Camo Net";
            initPhase = 1;
            mass = -50;
            source = "user";
        };
        class showGear
        {
            animPeriod = 0.001;
            author = "Article 2 Studios";
            displayName = "Attach Gear";
            initPhase = 1;
            mass = -50;
            source = "user";
        };
        class showTurretGear
        {
            animPeriod = 0.001;
            author = "Article 2 Studios";
            displayName = "Attach Turret Gear";
            initPhase = 1;
            mass = -50;
            source = "user";
        };
    };
};