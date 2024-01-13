class CfgMarkers 
{
	class a3u_flag_optre_unsc; // inherited from the main ultimate mod

	class a3u_extender_flag_ascension_android : a3u_flag_optre_unsc
	{
		name = "Android";
		icon = QPATHTOFOLDER(Pictures\Markers\android_ca.paa);
		texture = QPATHTOFOLDER(Pictures\Markers\android_ca.paa);
	};
	class a3u_extender_flag_ascension_vanguard : a3u_extender_flag_ascension_android
	{
		name = "Vanguard";
		icon = QPATHTOFOLDER(Pictures\Markers\vanguard_ca.paa);
		texture = QPATHTOFOLDER(Pictures\Markers\vanguard_ca.paa);
	};
};