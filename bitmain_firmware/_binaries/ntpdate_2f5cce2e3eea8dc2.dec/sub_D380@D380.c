int __fastcall sub_D380(const char *a1)
{
  FILE *v2; // r7
  const char *v3; // r0
  const char *v4; // r4
  unsigned int v5; // r0
  int v6; // r6
  _BYTE *v7; // r0
  const char *v8; // r0
  unsigned __int8 *v9; // r10
  signed int v10; // r0
  int v11; // r8
  int v12; // r4
  const __int32_t **v13; // r9
  char *v14; // r0
  char *v15; // r3
  char v16; // r2
  bool v17; // zf
  int v18; // r0
  char *v20; // [sp+4h] [bp-22Ch] BYREF
  char v21[20]; // [sp+8h] [bp-228h] BYREF
  unsigned __int8 src[20]; // [sp+1Ch] [bp-214h] BYREF
  char s[544]; // [sp+30h] [bp-200h] BYREF

  v2 = fopen(a1, "r");
  if ( v2 )
  {
    sub_D018();
    while ( 1 )
    {
      v20 = fgets(s, 512, v2);
      if ( !v20 )
        break;
      v3 = (const char *)sub_D2BC((unsigned __int8 **)&v20);
      v4 = v3;
      if ( v3 )
      {
        v5 = strtol(v3, 0, 10);
        v6 = v5;
        if ( v5 )
        {
          if ( v5 <= 0xFFFF )
          {
            v7 = (_BYTE *)sub_D2BC((unsigned __int8 **)&v20);
            if ( v7 )
            {
              if ( (*v7 & 0xDF) == 0x4D )
              {
                v8 = (const char *)sub_D2BC((unsigned __int8 **)&v20);
                v9 = (unsigned __int8 *)v8;
                if ( v8 )
                {
                  v10 = strlen(v8);
                  if ( v10 <= 20 )
                  {
                    sub_CE40(v6, 4, v9, v10);
                  }
                  else
                  {
                    if ( (unsigned int)v10 >= 0x28 )
                      v11 = 40;
                    else
                      v11 = v10;
                    strcpy(v21, "0123456789abcdef");
                    v12 = 0;
                    v13 = _ctype_tolower_loc();
                    do
                    {
                      v14 = strchr(v21, (*v13)[v9[v12]]);
                      v15 = &s[(v12 >> 1) + 512];
                      v16 = (char)v15;
                      v17 = v14 == 0;
                      v18 = v14 - v21;
                      if ( v17 )
                      {
                        sub_E15C(3, "authreadkeys: invalid hex digit for key %d", v6);
                      }
                      else
                      {
                        if ( (v12 & 1) != 0 )
                        {
                          v16 = *(v15 - 532);
                        }
                        else
                        {
                          LOBYTE(v18) = 16 * v18;
                          *(v15 - 532) = v18;
                        }
                        if ( (v12 & 1) != 0 )
                          *(v15 - 532) = v18 | v16;
                      }
                      ++v12;
                    }
                    while ( v11 != v12 );
                    sub_CE40(v6, 4, src, v11 / 2);
                  }
                }
                else
                {
                  sub_E15C(3, "authreadkeys: no key for key %d", v6);
                }
              }
              else
              {
                sub_E15C(3, "authreadkeys: invalid type for key %d", v6);
              }
            }
            else
            {
              sub_E15C(3, "authreadkeys: no key type for key %d", v6);
            }
          }
          else
          {
            sub_E15C(3, "authreadkeys: key %s > %d reserved for Autokey", v4, 0xFFFF);
          }
        }
        else
        {
          sub_E15C(3, "authreadkeys: cannot change key %s", v4);
        }
      }
    }
    fclose(v2);
    return 1;
  }
  else
  {
    sub_E15C(3, "authreadkeys: file %s: %m", a1);
    return 0;
  }
}
