int __fastcall sub_B46C(const char *a1)
{
  FILE *v2; // r6
  int v3; // r5
  size_t v4; // r0
  size_t v5; // r10
  const unsigned __int16 **v6; // r0
  char *v7; // r3
  char *v8; // r11
  int v9; // r12
  int v10; // t1
  char *v11; // r11
  int *v12; // r0
  char *v13; // r0
  int v15; // r10
  char *v16; // [sp+0h] [bp-314h] BYREF
  char *v17; // [sp+4h] [bp-310h] BYREF
  char *src; // [sp+8h] [bp-30Ch] BYREF
  char s[776]; // [sp+Ch] [bp-308h] BYREF

  v2 = fopen(a1, "r");
  if ( v2 )
  {
    v3 = 0;
LABEL_3:
    while ( fgets(s, 770, v2) )
    {
      ++v3;
      v4 = strlen(s);
      v5 = v4;
      if ( v4 > 0x300 )
      {
        printf("line too long, conf line skipped %s, line %d\n", a1, v3);
      }
      else if ( v4 )
      {
        v6 = _ctype_b_loc();
        v7 = s;
        while ( 1 )
        {
          v8 = v7;
          v10 = (unsigned __int8)*v7++;
          v9 = v10;
          if ( ((*v6)[v10] & 0x2000) == 0 )
            break;
          if ( !--v5 )
            goto LABEL_3;
        }
        if ( v9 != 35 && strncmp(v8, "config", 6u) )
        {
          memcpy(s, v8, v5);
          v16 = s;
          s[v5] = 0;
          if ( sub_B340((unsigned __int8 **)&v16, &v17, (const char **)&src) )
          {
            printf("error parsing %s, line %d:%d\n", a1, v3, v16 - s);
          }
          else if ( dword_1B3A0 > 39 )
          {
            printf("too many vars in  %s, line %d:%d\n", a1, v3, v16 - s);
          }
          else if ( strlen(v17) > 0x80 )
          {
            printf("var name to long %s, line %d:%d\n", a1, v3, v16 - s);
          }
          else
          {
            v11 = src;
            if ( strlen(src) <= 0x200 )
            {
              strncpy(&byte_24490[129 * dword_1B3A0], v17, 0x81u);
              sub_B208(v11, 47);
              v15 = dword_1B3A0 + 1;
              strncpy(&byte_1F468[513 * dword_1B3A0], src, 0x201u);
              dword_1B3A0 = v15;
            }
            else
            {
              printf("value to long %s, line %d:%d\n", a1, v3, v16 - s);
            }
          }
        }
      }
    }
  }
  else
  {
    v12 = _errno_location();
    v13 = strerror(*v12);
    printf("can't open '%s' as config file: %s\n", a1, v13);
  }
  fclose(v2);
  return dword_1B3A0;
}
