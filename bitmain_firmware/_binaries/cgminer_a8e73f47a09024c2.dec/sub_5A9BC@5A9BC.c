int __fastcall sub_5A9BC(_DWORD *a1, int a2, int a3)
{
  int v6; // r3
  int v7; // r3
  int v8; // r10
  int v9; // r0
  int v10; // r6
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r0
  int v20; // r6
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r7
  int v29; // r3
  int v30; // r3
  double v32; // [sp+0h] [bp-Ch] BYREF

  v6 = a1[13];
  if ( v6 == 257 )
  {
    if ( (a2 & 8) != 0 )
    {
      if ( sub_5B534(a1 + 10, &v32) )
      {
        sub_59BD0(a3, a1, "real number overflow");
        return 0;
      }
      else
      {
        return sub_5C208();
      }
    }
    else
    {
      return sub_5C168(a1[14], a1[15]);
    }
  }
  else
  {
    if ( v6 > 257 )
    {
      if ( v6 == 259 )
        return sub_5C370();
      if ( v6 < 259 )
        return sub_5C208();
      if ( v6 == 260 )
        return sub_5C37C();
      if ( v6 == 261 )
        return sub_5C388();
      goto LABEL_74;
    }
    if ( v6 == 91 )
    {
      v28 = sub_5BE20();
      if ( v28 )
      {
        sub_5A0CC(a1, a3);
        v18 = a1[13];
        if ( v18 != 93 )
        {
          if ( v18 )
          {
            while ( 1 )
            {
              v19 = sub_5A9BC(a1, a2, a3);
              v20 = v19;
              if ( !v19 )
                break;
              v21 = *(_DWORD *)(v19 + 4);
              if ( v21 != -1 )
                *(_DWORD *)(v19 + 4) = v21 + 1;
              if ( sub_5CBF4(v28, v19) )
              {
                v22 = *(_DWORD *)(v20 + 4);
                if ( v22 != -1 )
                {
                  v23 = v22 - 1;
                  *(_DWORD *)(v20 + 4) = v23;
                  if ( !v23 )
                    sub_5C394(v20);
                }
                break;
              }
              v24 = *(_DWORD *)(v20 + 4);
              if ( v24 != -1 )
              {
                v25 = v24 - 1;
                *(_DWORD *)(v20 + 4) = v25;
                if ( !v25 )
                  sub_5C394(v20);
              }
              sub_5A0CC(a1, a3);
              v26 = a1[13];
              if ( v26 != 44 )
              {
                if ( v26 == 93 )
                  return v28;
                goto LABEL_70;
              }
              sub_5A0CC(a1, a3);
              if ( !a1[13] )
                goto LABEL_70;
            }
          }
          else
          {
LABEL_70:
            sub_59BD0(a3, a1, "']' expected");
          }
          v30 = *(_DWORD *)(v28 + 4);
          if ( v30 == -1 )
          {
            return 0;
          }
          else
          {
            v27 = v30 - 1;
            *(_DWORD *)(v28 + 4) = v27;
            if ( !v27 )
              sub_5C394(v28);
            return 0;
          }
        }
      }
    }
    else
    {
      if ( v6 <= 91 )
      {
        if ( v6 == -1 )
        {
          sub_59BD0(a3, a1, "invalid token");
          return 0;
        }
LABEL_74:
        sub_59BD0(a3, a1, "unexpected token");
        return 0;
      }
      if ( v6 != 123 )
      {
        if ( v6 == 256 )
          return sub_5BFE0(a1[14]);
        goto LABEL_74;
      }
      v28 = sub_5BBA8();
      if ( v28 )
      {
        sub_5A0CC(a1, a3);
        v7 = a1[13];
        if ( v7 != 125 )
        {
          if ( v7 == 256 )
          {
            while ( 1 )
            {
              v8 = a1[14];
              a1[14] = 0;
              if ( !v8 )
                return 0;
              if ( (a2 & 1) != 0 && sub_5BC34(v28, v8) )
              {
                sub_5B2D0(v8);
                sub_59BD0(a3, a1, "duplicate object key");
                goto LABEL_77;
              }
              sub_5A0CC(a1, a3);
              if ( a1[13] != 58 )
              {
                sub_5B2D0(v8);
                sub_59BD0(a3, a1, "':' expected");
                goto LABEL_77;
              }
              sub_5A0CC(a1, a3);
              v9 = sub_5A9BC(a1, a2, a3);
              v10 = v9;
              if ( !v9 )
              {
                sub_5B2D0(v8);
                goto LABEL_77;
              }
              v11 = *(_DWORD *)(v9 + 4);
              if ( v11 != -1 )
                *(_DWORD *)(v9 + 4) = v11 + 1;
              if ( sub_5C59C(v28, v8, v9) )
              {
                sub_5B2D0(v8);
                v12 = *(_DWORD *)(v10 + 4);
                if ( v12 != -1 )
                {
                  v13 = v12 - 1;
                  *(_DWORD *)(v10 + 4) = v13;
                  if ( !v13 )
                    sub_5C394(v10);
                }
                goto LABEL_77;
              }
              v14 = *(_DWORD *)(v10 + 4);
              if ( v14 != -1 )
              {
                v15 = v14 - 1;
                *(_DWORD *)(v10 + 4) = v15;
                if ( !v15 )
                  sub_5C394(v10);
              }
              sub_5B2D0(v8);
              sub_5A0CC(a1, a3);
              v16 = a1[13];
              if ( v16 != 44 )
                break;
              sub_5A0CC(a1, a3);
              if ( a1[13] != 256 )
                goto LABEL_26;
            }
            if ( v16 == 125 )
              return v28;
            sub_59BD0(a3, a1, "'}' expected");
          }
          else
          {
LABEL_26:
            sub_59BD0(a3, a1, "string or '}' expected");
          }
LABEL_77:
          v29 = *(_DWORD *)(v28 + 4);
          if ( v29 == -1 )
          {
            return 0;
          }
          else
          {
            v17 = v29 - 1;
            *(_DWORD *)(v28 + 4) = v17;
            if ( !v17 )
              sub_5C394(v28);
            return 0;
          }
        }
      }
    }
  }
  return v28;
}
