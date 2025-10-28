int __fastcall sub_47228(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  int v7; // r6
  int v9; // r3
  int v10; // r8
  int v11; // r0
  int v12; // r7
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r3
  bool v21; // zf
  int v22; // r3
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int v26; // r3
  int v27; // r0
  int v28; // r3
  double v29; // [sp+0h] [bp-Ch] BYREF

  v4 = a1[13];
  if ( v4 == 257 )
  {
    if ( (a2 & 8) == 0 )
      return sub_481B4(a1[14], a1[15]);
    if ( !sub_479D0(a1 + 10, &v29) )
      return sub_481FC();
    sub_469A4(a3, (int)a1, "real number overflow");
    return 0;
  }
  if ( v4 < 258 )
  {
    if ( v4 == 91 )
    {
      v7 = sub_47FFC();
      if ( v7 )
      {
        sub_46CD4(a1, a3);
        v17 = a1[13];
        if ( v17 == 93 )
          return v7;
        if ( v17 )
        {
          while ( 1 )
          {
            v24 = sub_47228(a1, a2, a3);
            v12 = v24;
            if ( !v24 )
              break;
            v18 = *(_DWORD *)(v24 + 4) + 1;
            if ( *(_DWORD *)(v24 + 4) != -1 )
              ++*(_DWORD *)(v24 + 4);
            v19 = sub_4879C(v7, v24, v18);
            v20 = *(_DWORD *)(v12 + 4);
            if ( v19 )
            {
              if ( v20 != -1 )
              {
LABEL_62:
                v28 = v20 - 1;
                *(_DWORD *)(v12 + 4) = v28;
                if ( !v28 )
                  sub_482FC(v12);
              }
              goto LABEL_51;
            }
            v21 = v20 == -1;
            v22 = v20 - 1;
            if ( !v21 )
            {
              *(_DWORD *)(v12 + 4) = v22;
              if ( !v22 )
                sub_482FC(v12);
            }
            sub_46CD4(a1, a3);
            v23 = a1[13];
            if ( v23 != 44 )
            {
              if ( v23 == 93 )
                return v7;
              goto LABEL_60;
            }
            sub_46CD4(a1, a3);
            if ( !a1[13] )
              goto LABEL_60;
          }
        }
        else
        {
LABEL_60:
          sub_469A4(a3, (int)a1, "']' expected");
        }
        goto LABEL_51;
      }
    }
    else if ( v4 <= 91 )
    {
      if ( v4 != -1 )
        goto LABEL_37;
      sub_469A4(a3, (int)a1, "invalid token");
    }
    else
    {
      if ( v4 != 123 )
      {
        if ( v4 == 256 )
          return sub_480E0(a1[14]);
        goto LABEL_37;
      }
      v7 = sub_47EE4();
      if ( v7 )
      {
        sub_46CD4(a1, a3);
        v9 = a1[13];
        if ( v9 == 125 )
          return v7;
        if ( v9 != 256 )
        {
LABEL_64:
          sub_469A4(a3, (int)a1, "string or '}' expected");
          goto LABEL_51;
        }
        v10 = a1[14];
        a1[14] = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) != 0 && sub_47F24(v7, v10) )
            {
              sub_47860(v10);
              sub_469A4(a3, (int)a1, "duplicate object key");
              goto LABEL_51;
            }
            sub_46CD4(a1, a3);
            if ( a1[13] != 58 )
            {
              sub_47860(v10);
              sub_469A4(a3, (int)a1, "':' expected");
              goto LABEL_51;
            }
            sub_46CD4(a1, a3);
            v11 = sub_47228(a1, a2, a3);
            v12 = v11;
            if ( !v11 )
            {
              sub_47860(v10);
              goto LABEL_51;
            }
            v13 = *(_DWORD *)(v11 + 4);
            if ( v13 != -1 )
              *(_DWORD *)(v11 + 4) = v13 + 1;
            if ( sub_48494(v7, v10, v11) )
            {
              sub_47860(v10);
              v20 = *(_DWORD *)(v12 + 4);
              if ( v20 != -1 )
                goto LABEL_62;
              goto LABEL_51;
            }
            v14 = *(_DWORD *)(v12 + 4);
            if ( v14 != -1 )
            {
              v15 = v14 - 1;
              *(_DWORD *)(v12 + 4) = v15;
              if ( !v15 )
                sub_482FC(v12);
            }
            sub_47860(v10);
            sub_46CD4(a1, a3);
            v16 = a1[13];
            if ( v16 != 44 )
              break;
            sub_46CD4(a1, a3);
            if ( a1[13] != 256 )
              goto LABEL_64;
            v10 = a1[14];
            a1[14] = 0;
            if ( !v10 )
              return 0;
          }
          if ( v16 == 125 )
            return v7;
          sub_469A4(a3, (int)a1, "'}' expected");
LABEL_51:
          v25 = *(_DWORD *)(v7 + 4);
          if ( v25 != -1 )
          {
            v26 = v25 - 1;
            *(_DWORD *)(v7 + 4) = v26;
            if ( !v26 )
            {
              v27 = v7;
              v7 = 0;
              sub_482FC(v27);
              return v7;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( v4 == 259 )
    return sub_482E0();
  if ( v4 <= 258 )
    return sub_481FC();
  if ( v4 == 260 )
    return sub_482EC();
  if ( v4 == 261 )
    return sub_482F4();
LABEL_37:
  sub_469A4(a3, (int)a1, "unexpected token");
  return 0;
}
