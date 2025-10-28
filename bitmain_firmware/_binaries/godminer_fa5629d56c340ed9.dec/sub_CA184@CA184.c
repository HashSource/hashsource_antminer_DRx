int __fastcall sub_CA184(void *a1, unsigned __int8 a2)
{
  int v3; // [sp+8h] [bp-14h] BYREF
  __int16 v4; // [sp+Ch] [bp-10h]
  char v5; // [sp+Eh] [bp-Eh]
  char v6; // [sp+Fh] [bp-Dh]
  int v7; // [sp+10h] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-8h]

  v5 = a2 - 121;
  v4 = a2;
  v7 = 0;
  v6 = 0;
  v8 = 0;
  v3 = -2130269611;
  if ( sub_C9CF0(a1, (unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v7, 8u) )
    return sub_CA0E8();
  else
    return (unsigned __int16)v8;
}
