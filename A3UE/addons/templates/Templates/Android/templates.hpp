    class Android_Base
    {
        requiredAddons[] = {"SSV_Android", "OPTRE_Core"};
        basepath = QPATHTOFOLDER(Templates\Android);
        logo = QPATHTOFOLDER(Pictures\antistasi_ultimate_extension_ca.paa);
        flagTexture = "a3\ui_f\data\logos\arma3_white_ca.paa";
        priority = 90;
        climate[] = {"temperate","tropical","arid","arctic"};
    };

    class Android_Army : Android_Base
    {
        side = "Occ";
        name = "Android";
        file = "Android_AI_Army";
        description = "Androids are designed with one simple function: Serve the Higher Society.";
    };

    class Corrupted_Civ_Zombie : Android_Base
    {
        requiredAddons[] = {"WBK_ZombieCreatures", "SSV_Android_Zombies", "SSV_Vanguard"};
        priority = 0;
        side = "Civ";
        name = "Corrupted";
        file = "Corrupted_Civ_Zombie";
        description = "All android life was wiped out, being replaced by Corrupted. Corrupted are android shells, stripped down to their onboard programming.";
    };
    class Xerthans_Civ_Zombie : Corrupted_Civ_Zombie
    {
        name = "Xerthans";
        file = "Xerthans_Civ_Zombie";
        description = "All android life was wiped out, being replaced by Xerthans. Xerthans belong to a species known as Yashers, who resurrect once death occurs.";
    };