#pragma once
class Vector3 {
public:
	float x;
	float y;
	float z;
};

class Player
{
public:
	float N0000004F; //0x0000
	float N00000050; //0x0004
	float N00000051; //0x0008
	char pad_000C[16]; //0x000C
	Vector3 pos; //0x001C
	float N00000057; //0x0028
	char pad_002C[20]; //0x002C
	Vector3 N0000005B; //0x0040
	Vector3 yaw; //0x004C
	Vector3 N0000005D; //0x0058
	Vector3 N0000005E; //0x0064
	float N0000005F; //0x0070
	char pad_0074[8]; //0x0074
	Vector3 N00000063; //0x0088
	char pad_0094[236]; //0x0094
}; //Size: 0x0180 0x0160