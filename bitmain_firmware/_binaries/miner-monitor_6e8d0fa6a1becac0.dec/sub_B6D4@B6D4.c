int __fastcall sub_B6D4(const char *a1)
{
  FILE *v2; // r6
  int v3; // r5
  size_t v4; // r0
  size_t v5; // r10
  const unsigned __int16 **v6; // r0
  char *v7; // r3
  const unsigned __int16 *v8; // r0
  char *v9; // r1
  int v10; // r2
  int v11; // t1
  char *v12; // r11
  int *v13; // r0
  char *v14; // r0
  int v16; // r10
  char *v17; // [sp+0h] [bp-314h] BYREF
  char *v18; // [sp+4h] [bp-310h] BYREF
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
        v8 = *v6;
        while ( 1 )
        {
          v9 = v7;
          v11 = (unsigned __int8)*v7++;
          v10 = v11;
          if ( (v8[v11] & 0x2000) == 0 )
            break;
          if ( !--v5 )
            goto LABEL_3;
        }
        if ( v10 != 35 )
        {
          memcpy(s, v9, v5);
          v17 = s;
          s[v5] = 0;
          if ( sub_B250((unsigned __int8 **)&v17, &v18, &src) )
          {
            printf("error parsing %s, line %d:%d\n", a1, v3, v17 - s);
          }
          else if ( dword_1B3A0 > 39 )
          {
            printf("too many vars in  %s, line %d:%d\n", a1, v3, v17 - s);
          }
          else if ( strlen(v18) > 0x80 )
          {
            printf("var name to long %s, line %d:%d\n", a1, v3, v17 - s);
          }
          else
          {
            v12 = src;
            if ( strlen(src) <= 0x200 )
            {
              strncpy(&byte_24490[129 * dword_1B3A0], v18, 0x81u);
              sub_B208(v12, 47);
              v16 = dword_1B3A0 + 1;
              strncpy(&byte_1F468[513 * dword_1B3A0], src, 0x201u);
              dword_1B3A0 = v16;
            }
            else
            {
              printf("value to long %s, line %d:%d\n", a1, v3, v17 - s);
            }
          }
        }
      }
    }
  }
  else
  {
    v13 = _errno_location();
    v14 = strerror(*v13);
    printf("can't open '%s' as config file: %s\n", a1, v14);
  }
  fclose(v2);
  return dword_1B3A0;
}
