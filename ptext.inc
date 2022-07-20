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
	print(" Using P-Text Include by AideedGameZ!!");
	print("----------------------------------\n");
}

#endif

stock pInt( integer ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%d", integer);
	return ptext_input;
}

stock pFloat( Float:float){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%f", float);
	return ptext_input;
}

stock pText( string[] ){
	return string;
}

stock pText_2( string1[], string2[] ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%s", string1, string2);
	return ptext_input;
}

stock pText_Text( string1[], string2[] ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%s", string1, string2);
	return ptext_input;
}

stock pText_Int( string1[], integer ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%d", string1, integer);
	return ptext_input;
}

stock pText_Float( string1[], Float:float ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%f", string1, float);
	return ptext_input;
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

stock pText_2_Dimension(text[], dimension[]){
	new ptext_input[512];
	format(ptext_input, sizeof(ptext_input), "%s[%s]", text,dimension);
	return ptext_input;
}

stock pI( integer ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%d", integer);
	return ptext_input;
}

stock pF( Float:float){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%f", float);
	return ptext_input;
}

stock pT( string[] ){
	return string;
}

stock pTT( string1[], string2[] ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%s", string1, string2);
	return ptext_input;
}

stock pTI( string1[], integer ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%d", string1, integer);
	return ptext_input;
}

stock pTF( string1[], Float:float ){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s%f", string1, float);
	return ptext_input;
}

stock pN(playerid){
	new name[MAX_PLAYER_NAME+1];
	GetPlayerName(playerid,name,sizeof(name));
	return name;
}

stock pTD(text[], dimension){
	new ptext_input[512];
	format(ptext_input,sizeof(ptext_input), "%s[%d]", text,dimension);
	return ptext_input;
}
