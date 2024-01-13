    class B_T_VTOL_01_infantry_F;

    class a3u_extender_vehicle_blackfish_blue : B_T_VTOL_01_infantry_F
    { // Since we inherit from the blackfish class, we have all of that classes values. So we specifically re-state the ones we want to change
        displayName = "Blackfish (Android)";
        hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",""};
    };

    class OPTRE_M875_SPH_CMA;

    class a3u_extender_vehicle_m875_black : OPTRE_M875_SPH_CMA
    {
        displayName = "M875 Self Propelled Howitzer (Android)";
        class AnimationSources
        {
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

    class OPTRE_M494_CMA;

    class a3u_extender_vehicle_m494_black : OPTRE_M494_CMA
    {
        displayName = "M494 Oryx IFV (Android)";
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_M503_30mm_Autocannon";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M670_ATGM_Launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class CargoDoorAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class HitERA_Front_src
			{
				source="Hit";
				hitpoint="HitERA_Front";
				raw=1;
			};
			class HitERA_Left_1_src
			{
				source="Hit";
				hitpoint="HitERA_Left_1";
				raw=1;
			};
			class HitERA_Right_1_src
			{
				source="Hit";
				hitpoint="HitERA_Right_1";
				raw=1;
			};
			class HitERA_Left_2_src
			{
				source="Hit";
				hitpoint="HitERA_Left_2";
				raw=1;
			};
			class HitERA_Right_2_src
			{
				source="Hit";
				hitpoint="HitERA_Right_2";
				raw=1;
			};
			class HitERA_Left_3_src
			{
				source="Hit";
				hitpoint="HitERA_Left_3";
				raw=1;
			};
			class HitERA_Right_3_src
			{
				source="Hit";
				hitpoint="HitERA_Right_3";
				raw=1;
			};
			class HitERA_Left_4_src
			{
				source="Hit";
				hitpoint="HitERA_Left_4";
				raw=1;
			};
			class HitERA_Right_4_src
			{
				source="Hit";
				hitpoint="HitERA_Right_4";
				raw=1;
			};
			class HitERA_Left_5_src
			{
				source="Hit";
				hitpoint="HitERA_Left_5";
				raw=1;
			};
			class HitERA_Right_5_src
			{
				source="Hit";
				hitpoint="HitERA_Right_5";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="Attach Hull Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags",
					1
				};
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="Attach Turret Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBagsTurret",
					1
				};
				mass=-50;
			};
			class showCamonetgun
			{
				displayName="Attach Gun Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showBags
			{
				displayName="Attach Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBagsTurret
			{
				displayName="Attach Turret Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showera
			{
				displayName="Attach Explosive Reactive Armor";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=600;
			};
		};
    };

    class OPTRE_M808B_CMA;

    class a3u_extender_vehicle_m808b_black : OPTRE_M808B_CMA
    {
        displayName = "M808B Scorpion MBT (Android)";
        class AnimationSources
        {
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "OPTRE_mortar_155mm";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "OPTRE_M247T_Coax";
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