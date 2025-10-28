char *__fastcall sub_30440(char *s, int a2)
{
  unsigned int v2; // r4
  char *v3; // r8
  char *v5; // r6
  char *v6; // r2
  unsigned int v7; // r3
  int v8; // r5
  unsigned int v9; // t1
  unsigned int v10; // t1
  size_t v12; // r5
  _BYTE *v13; // r0
  _BYTE *v14; // r3
  char *v15; // r2
  unsigned int v16; // t1
  char sa[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = (unsigned __int8)*s;
  v3 = s;
  if ( *s )
  {
    v5 = s;
    v6 = s;
    v7 = (unsigned __int8)*s;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 == 61 )
        goto LABEL_10;
      if ( v7 <= 0x3D )
      {
        if ( v7 == 34 )
        {
          if ( a2 )
            goto LABEL_11;
          goto LABEL_5;
        }
        if ( v7 != 44 )
          goto LABEL_5;
LABEL_10:
        if ( !a2 )
          goto LABEL_11;
LABEL_5:
        v9 = (unsigned __int8)*++v6;
        v7 = v9;
        if ( !v9 )
          goto LABEL_12;
      }
      else
      {
        if ( v7 != 92 )
        {
          if ( v7 != 124 )
            goto LABEL_5;
          goto LABEL_10;
        }
LABEL_11:
        v10 = (unsigned __int8)*++v6;
        v7 = v10;
        ++v8;
        if ( !v10 )
        {
LABEL_12:
          if ( !v8 )
            return v3;
          v12 = v8 + 1 + strlen(s);
          v13 = malloc(v12);
          if ( !v13 )
          {
            snprintf(sa, 0x800u, "Failed to malloc escape buf %d in %s %s():%d", v12, "api.c", "escape_string", 835);
            sub_38438(3, sa, 1);
            sub_16724(1);
          }
          v14 = v13;
          v15 = v3 + 1;
          while ( 2 )
          {
            if ( !v2 )
            {
              v3 = v13;
              *v14 = 0;
              return v3;
            }
            if ( v2 == 61 )
            {
LABEL_28:
              if ( a2 )
                goto LABEL_21;
            }
            else
            {
              if ( v2 > 0x3D )
              {
                if ( v2 == 92 )
                {
                  *v14 = 92;
                  v14[1] = *(v15 - 1);
                  v14 += 2;
                }
                else
                {
                  if ( v2 == 124 )
                    goto LABEL_28;
LABEL_21:
                  *v14++ = v2;
                }
                v16 = (unsigned __int8)*++v5;
                v2 = v16;
                ++v15;
                continue;
              }
              if ( v2 != 34 )
              {
                if ( v2 == 44 )
                  goto LABEL_28;
                goto LABEL_21;
              }
              if ( !a2 )
                goto LABEL_21;
            }
            break;
          }
          *v14++ = 92;
          LOBYTE(v2) = *(v15 - 1);
          goto LABEL_21;
        }
      }
    }
  }
  return v3;
}
