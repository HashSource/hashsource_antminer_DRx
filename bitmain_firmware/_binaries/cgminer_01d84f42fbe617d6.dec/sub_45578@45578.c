int __fastcall sub_45578(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  int v7; // r7
  int v9; // r3
  int v10; // r10
  int v11; // r0
  int v12; // r6
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r3
  double v26; // [sp+0h] [bp-Ch] BYREF

  v4 = a1[13];
  if ( v4 != 257 )
  {
    if ( v4 > 257 )
    {
      if ( v4 == 259 )
        return sub_46C38();
      if ( v4 < 259 )
        return sub_46B14();
      if ( v4 == 260 )
        return sub_46C44();
      if ( v4 == 261 )
        return sub_46C50();
LABEL_7:
      v7 = 0;
      sub_448AC(a3, a1, "unexpected token");
      return v7;
    }
    if ( v4 == 91 )
    {
      v7 = sub_467F8();
      if ( v7 )
      {
        sub_44DA4(a1, a3);
        v17 = a1[13];
        if ( v17 == 93 )
          return v7;
        if ( v17 )
        {
          while ( 1 )
          {
            v20 = sub_45578(a1, a2, a3);
            v12 = v20;
            if ( !v20 )
              break;
            if ( *(_DWORD *)(v20 + 4) != -1 )
              ++*(_DWORD *)(v20 + 4);
            if ( sub_46F60(v7, v20) )
            {
              v24 = *(_DWORD *)(v12 + 4);
              if ( v24 != -1 )
              {
LABEL_60:
                v25 = v24 - 1;
                *(_DWORD *)(v12 + 4) = v25;
                if ( !v25 )
                  sub_46C5C(v12);
              }
              goto LABEL_49;
            }
            v18 = *(_DWORD *)(v12 + 4);
            if ( v18 != -1 )
            {
              *(_DWORD *)(v12 + 4) = v18 - 1;
              if ( v18 == 1 )
                sub_46C5C(v12);
            }
            sub_44DA4(a1, a3);
            v19 = a1[13];
            if ( v19 != 44 )
            {
              if ( v19 == 93 )
                return v7;
              goto LABEL_63;
            }
            sub_44DA4(a1, a3);
            if ( !a1[13] )
              goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          sub_448AC(a3, a1, "']' expected");
        }
        goto LABEL_49;
      }
    }
    else
    {
      if ( v4 <= 91 )
      {
        if ( v4 == -1 )
        {
          v7 = 0;
          sub_448AC(a3, a1, "invalid token");
          return v7;
        }
        goto LABEL_7;
      }
      if ( v4 != 123 )
      {
        if ( v4 == 256 )
          return sub_46964(a1[14]);
        goto LABEL_7;
      }
      v7 = sub_46620();
      if ( v7 )
      {
        sub_44DA4(a1, a3);
        v9 = a1[13];
        if ( v9 == 125 )
          return v7;
        if ( v9 != 256 )
        {
LABEL_64:
          sub_448AC(a3, a1, "string or '}' expected");
          goto LABEL_49;
        }
        v10 = a1[14];
        a1[14] = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) != 0 && sub_46698(v7, v10) )
            {
              sub_45E0C(v10);
              sub_448AC(a3, a1, "duplicate object key");
              goto LABEL_49;
            }
            sub_44DA4(a1, a3);
            if ( a1[13] != 58 )
            {
              sub_45E0C(v10);
              sub_448AC(a3, a1, "':' expected");
              goto LABEL_49;
            }
            sub_44DA4(a1, a3);
            v11 = sub_45578(a1, a2, a3);
            v12 = v11;
            if ( !v11 )
            {
              sub_45E0C(v10);
              goto LABEL_49;
            }
            v13 = *(_DWORD *)(v11 + 4);
            if ( v13 != -1 )
              *(_DWORD *)(v11 + 4) = v13 + 1;
            if ( sub_47098(v7, v10, v11) )
            {
              sub_45E0C(v10);
              v24 = *(_DWORD *)(v12 + 4);
              if ( v24 != -1 )
                goto LABEL_60;
              goto LABEL_49;
            }
            v14 = *(_DWORD *)(v12 + 4);
            if ( v14 != -1 )
            {
              v15 = v14 - 1;
              *(_DWORD *)(v12 + 4) = v15;
              if ( !v15 )
                sub_46C5C(v12);
            }
            sub_45E0C(v10);
            sub_44DA4(a1, a3);
            v16 = a1[13];
            if ( v16 != 44 )
              break;
            sub_44DA4(a1, a3);
            if ( a1[13] != 256 )
              goto LABEL_64;
            v10 = a1[14];
            a1[14] = 0;
            if ( !v10 )
              return 0;
          }
          if ( v16 == 125 )
            return v7;
          sub_448AC(a3, a1, "'}' expected");
LABEL_49:
          v21 = *(_DWORD *)(v7 + 4);
          if ( v21 != -1 )
          {
            v22 = v21 - 1;
            *(_DWORD *)(v7 + 4) = v22;
            if ( !v22 )
            {
              v23 = v7;
              v7 = 0;
              sub_46C5C(v23);
              return v7;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( (a2 & 8) == 0 )
    return sub_46A94(a1[14], a1[15]);
  if ( !sub_46060(a1 + 10, &v26) )
    return sub_46B14();
  v7 = 0;
  sub_448AC(a3, a1, "real number overflow");
  return v7;
}
