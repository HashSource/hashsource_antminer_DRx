int __fastcall sub_4493C(_DWORD *a1, const void *a2, size_t a3, char *a4, int a5)
{
  int v6; // r8
  char *v9; // r0
  int v10; // r6
  void *v11; // r0
  const char *v12; // r12
  _BYTE *v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r8
  int v17; // r2
  char *v18; // r4
  int v19; // r8
  const char *v21; // r6
  const char *v22; // r7
  signed int v23; // r9
  const char *v24; // r1
  const char *v25; // r4
  int v26; // r0
  const char *v27; // r0
  int v28; // r2
  char v29; // r0
  const char *v30; // r6
  const char *v31; // r4
  const char *v32; // [sp+4h] [bp-20h]
  const char *v33; // [sp+4h] [bp-20h]
  int v34; // [sp+8h] [bp-1Ch]
  _BYTE *v36; // [sp+10h] [bp-14h]
  int v37; // [sp+14h] [bp-10h]
  char *endptr; // [sp+1Ch] [bp-8h] BYREF

  v6 = a5;
  v9 = (char *)sub_44484(a3 + 12 + a5);
  v10 = (int)v9;
  if ( v9 )
  {
    if ( a4 )
    {
      if ( !a5 )
        v9[8] = 0;
      *(_DWORD *)v9 = 1;
      if ( a5 )
      {
        v12 = "</%s>\n";
        v13 = v9 + 8;
        v14 = a5;
        v15 = a5;
        v16 = (int)v9;
        do
        {
          v18 = a4 + 1;
          v17 = (unsigned __int8)*a4;
          if ( !*a4 )
            break;
          if ( v17 == 38 )
          {
            endptr = a4 + 1;
            if ( v14 > 2 )
            {
              if ( a4[1] == 35 )
              {
                v27 = a4 + 2;
                endptr = a4 + 2;
                v34 = v15;
                v33 = v12;
                if ( a4[2] == 120 )
                {
                  v27 = a4 + 3;
                  endptr = a4 + 3;
                  v28 = 16;
                }
                else
                {
                  v28 = 10;
                }
                v29 = strtoul(v27, &endptr, v28);
                v15 = v34;
                v12 = v33;
                if ( *endptr == 59 && endptr - a4 <= v14 )
                {
                  v14 -= endptr - a4;
                  v18 = endptr + 1;
                  LOBYTE(v17) = v29;
                }
                else
                {
                  LOBYTE(v17) = 38;
                }
              }
              else
              {
                v21 = (const char *)&unk_69C88;
                v36 = v13;
                v22 = a4 + 1;
                v37 = v15;
                while ( 1 )
                {
                  v23 = *((_DWORD *)v21 - 3);
                  v24 = v21 - 8;
                  v25 = v21 - 16;
                  v21 += 16;
                  if ( v23 <= v14 )
                  {
                    v32 = v12;
                    v26 = strncmp(v22, v24, v23);
                    v12 = v32;
                    if ( !v26 )
                      break;
                  }
                  if ( v21 == v12 )
                  {
                    v18 = (char *)v22;
                    v15 = v37;
                    v13 = v36;
                    LOBYTE(v17) = 38;
                    goto LABEL_10;
                  }
                }
                v30 = v25;
                v15 = v37;
                v31 = v22;
                v14 -= v23;
                v13 = v36;
                v18 = (char *)&v31[v23];
                LOBYTE(v17) = *v30;
              }
            }
          }
LABEL_10:
          --v14;
          a4 = v18;
          *v13++ = v17;
        }
        while ( v14 > 0 );
        v10 = v16;
        v6 = v15;
        *v13 = 0;
      }
      v19 = v6 + 9;
      v11 = (void *)(v10 + v19);
      *(_DWORD *)(v10 + 4) = v10 + v19;
    }
    else
    {
      *(_DWORD *)v9 = 0;
      v11 = v9 + 8;
      *(_DWORD *)(v10 + 4) = v10 + 8;
    }
    memcpy(v11, a2, a3);
    *(_BYTE *)(*(_DWORD *)(v10 + 4) + a3) = 0;
    sub_444C0(a1, v10);
  }
  return v10;
}
