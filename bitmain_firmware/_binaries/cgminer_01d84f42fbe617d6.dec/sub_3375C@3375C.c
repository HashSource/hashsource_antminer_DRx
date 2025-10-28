int __fastcall sub_3375C(int a1, int a2, _BYTE *a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int result; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r1
  char *v25; // r2
  int v26; // r3

  if ( a3 )
  {
    v7 = LOBYTE((*_ctype_tolower_loc())[(unsigned __int8)*a3]);
    *a3 = v7;
    switch ( v7 )
    {
      case 'd':
        v8 = (unsigned __int8)byte_630C1 ^ 1;
        byte_630C1 ^= 1u;
        byte_630C0 = v8;
        if ( v8 )
          goto LABEL_4;
        break;
      case 'n':
        byte_630C0 = 0;
        byte_630C1 = 0;
        byte_64218 = 0;
        byte_63928 = 0;
        byte_63DF8 = 0;
        byte_63DFA = 0;
        break;
      case 'p':
        byte_63DF8 ^= 1u;
        byte_630C0 = byte_63DF8;
        break;
      case 'q':
        byte_64218 ^= 1u;
        break;
      case 'r':
        v25 = &byte_63928;
        goto LABEL_15;
      case 's':
        byte_640B8 = 1;
        break;
      case 'v':
        v25 = &byte_630C0;
LABEL_15:
        v26 = (unsigned __int8)*v25 ^ 1;
        *v25 = v26;
        if ( v26 )
LABEL_4:
          byte_64218 = 0;
        break;
      case 'w':
        byte_63DFA ^= 1u;
        break;
      default:
        break;
    }
  }
  sub_32F3C((unsigned int *)a1, 79, 0, 0, a4);
  if ( a4 )
  {
    v9 = sub_30708((unsigned int *)a1, ",\"DEBUG\":[");
    v10 = sub_32ED0(0, "Silent", &byte_640B8, 0);
    v11 = sub_32ED0(v10, "Quiet", &byte_64218, 0);
    v12 = sub_32ED0(v11, "Verbose", &byte_630C0, 0);
    v13 = sub_32ED0(v12, "Debug", &byte_630C1, 0);
    v14 = sub_32ED0(v13, "RPCProto", &byte_63928, 0);
    v15 = sub_32ED0(v14, "PerDevice", &byte_63DF8, 0);
    v16 = sub_32ED0(v15, "WorkTime", &byte_63DFA, 0);
    result = sub_32418((unsigned int *)a1, (int)v16, 1, 0);
    if ( v9 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_30708((unsigned int *)a1, "DEBUG,");
    v18 = sub_32ED0(0, "Silent", &byte_640B8, 0);
    v19 = sub_32ED0(v18, "Quiet", &byte_64218, 0);
    v20 = sub_32ED0(v19, "Verbose", &byte_630C0, 0);
    v21 = sub_32ED0(v20, "Debug", &byte_630C1, 0);
    v22 = sub_32ED0(v21, "RPCProto", &byte_63928, 0);
    v23 = sub_32ED0(v22, "PerDevice", &byte_63DF8, 0);
    v24 = sub_32ED0(v23, "WorkTime", &byte_63DFA, 0);
    return sub_32418((unsigned int *)a1, (int)v24, 0, 0);
  }
  return result;
}
