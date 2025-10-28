unsigned __int8 **__fastcall sub_3B3F8(int a1, int a2, int a3, int a4)
{
  int v6; // r5
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  unsigned __int8 **v11; // r0
  unsigned __int8 **result; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  unsigned __int8 **v17; // r0

  sub_39590(a1, 22, 0, 0, a4);
  if ( a4 )
  {
    v6 = sub_36864(a1, ",\"VERSION\":[");
    v7 = sub_39350(0, "CGMiner", a49, 0);
    v8 = sub_39374(v7, "API", "3.1", 0);
    v9 = sub_39350(v8, "Miner", (const char *)&dword_75994, 0);
    v10 = sub_39350(v9, "CompileTime", dest, 0);
    v11 = (unsigned __int8 **)sub_39350(v10, "Type", byte_75658, 0);
    result = sub_38838(a1, v11, 1, 0);
    if ( v6 )
      return (unsigned __int8 **)sub_36528(a1);
  }
  else
  {
    sub_36864(a1, "VERSION,");
    v13 = sub_39350(0, "CGMiner", a49, 0);
    v14 = sub_39374(v13, "API", "3.1", 0);
    v15 = sub_39350(v14, "Miner", (const char *)&dword_75994, 0);
    v16 = sub_39350(v15, "CompileTime", dest, 0);
    v17 = (unsigned __int8 **)sub_39350(v16, "Type", byte_75658, 0);
    return sub_38838(a1, v17, 0, 0);
  }
  return result;
}
