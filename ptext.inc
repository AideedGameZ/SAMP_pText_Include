/*
	pText include

	Author: AideedGameZ
	Date: 16/6/2021

	Version: 0.0.1
*/
#include <a_samp>

#if defined _mytext_included

main()
{
	print("\n----------------------------------");
	print(" Using P-Text Include!!");
	print("----------------------------------\n");
}

#endif

stock pInt( integer ){
	new ptext_input[512];
	format(ptext_string,sizeof(ptext_string), "%d", integer);
	return ptext_string;
}

stock pFloat( Float:float){
	new ptext_input[512];
	format(ptext_string,sizeof(ptext_string), "%f", float);
	return ptext_string;
}

stock pText( string[] ){
	return string;
}

stock pText_2( string1[], string2[] ){
	new ptext_input[512];
	format(ptext_string,sizeof(ptext_string), "%s%s", string1[], string2[]);
	return ptext_string;
}

stock pText_Text( string1[], string2[] ){
	new ptext_input[512];
	format(ptext_string,sizeof(ptext_string), "%s%s", string1[], string2[]);
	return ptext_string;
}

stock pText_Int( string1[], integer ){
	new ptext_input[512];
	format(ptext_string,sizeof(mytext_string), "%s%d", string1[], integer);
	return ptext_string;
}

stock pText_Float( string1[], Float:float ){
	new ptext_input[512];
	format(ptext_string,sizeof(mytext_string), "%s%f", string1[], float);
	return ptext_string;
}

stock pName(playerid){
	new name[MAX_PLAYER_NAME+1];
	GetPlayerName(playerid,name,sizeof(name));
	return name;
}

stock pText_Dimension(text[], dimension){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s[%d]", text,dimension);
	return ptext_input;
}
