int __fastcall sub_30EA4(int a1, int a2, _BYTE *a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int v9; // r6
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  char **v16; // r0
  int result; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  char **v24; // r1
  int v25; // r3
  int v26; // r3

  if ( a3 )
  {
    v7 = LOBYTE((*_ctype_tolower_loc())[(unsigned __int8)*a3]);
    *a3 = v7;
    switch ( v7 )
    {
      case 'd':
        v8 = (unsigned __int8)byte_6FA71 ^ 1;
        byte_6FA71 = v8;
        byte_6FA70 = v8;
        if ( v8 )
          goto LABEL_4;
        break;
      case 'n':
        byte_6FA70 = 0;
        byte_6FA71 = 0;
        byte_72D98 = 0;
        byte_72E38 = 0;
        byte_72E28 = 0;
        byte_732C0 = 0;
        break;
      case 'p':
        byte_72E28 ^= 1u;
        byte_6FA70 = byte_72E28;
        break;
      case 'q':
        byte_72D98 ^= 1u;
        break;
      case 'r':
        v25 = (unsigned __int8)byte_72E38 ^ 1;
        byte_72E38 ^= 1u;
        if ( v25 )
          goto LABEL_4;
        break;
      case 's':
        byte_735C4 = 1;
        break;
      case 'v':
        v26 = (unsigned __int8)byte_6FA70 ^ 1;
        byte_6FA70 ^= 1u;
        if ( v26 )
LABEL_4:
          byte_72D98 = 0;
        break;
      case 'w':
        byte_732C0 ^= 1u;
        break;
      default:
        break;
    }
  }
  sub_30214((unsigned int *)a1, 79, 0, 0, a4);
  if ( a4 )
  {
    v9 = sub_2E530((unsigned int *)a1, ",\"DEBUG\":[");
    v10 = sub_2E418(0, "Silent", 14, &byte_735C4, 0);
    v11 = sub_2E418(v10, "Quiet", 14, &byte_72D98, 0);
    v12 = sub_2E418(v11, "Verbose", 14, &byte_6FA70, 0);
    v13 = sub_2E418(v12, "Debug", 14, &byte_6FA71, 0);
    v14 = sub_2E418(v13, "RPCProto", 14, &byte_72E38, 0);
    v15 = sub_2E418(v14, "PerDevice", 14, &byte_72E28, 0);
    v16 = (char **)sub_2E418(v15, "WorkTime", 14, &byte_732C0, 0);
    result = sub_2F9C4((unsigned int *)a1, v16, 1, 0);
    if ( v9 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_2E530((unsigned int *)a1, "DEBUG,");
    v18 = sub_2E418(0, "Silent", 14, &byte_735C4, 0);
    v19 = sub_2E418(v18, "Quiet", 14, &byte_72D98, 0);
    v20 = sub_2E418(v19, "Verbose", 14, &byte_6FA70, 0);
    v21 = sub_2E418(v20, "Debug", 14, &byte_6FA71, 0);
    v22 = sub_2E418(v21, "RPCProto", 14, &byte_72E38, 0);
    v23 = sub_2E418(v22, "PerDevice", 14, &byte_72E28, 0);
    v24 = (char **)sub_2E418(v23, "WorkTime", 14, &byte_732C0, 0);
    return sub_2F9C4((unsigned int *)a1, v24, 0, 0);
  }
  return result;
}
