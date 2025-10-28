char *__fastcall sub_45090(void ***a1, char *name, int a3, int a4)
{
  char *result; // r0
  unsigned __int8 *v8; // r5
  unsigned int v9; // r3
  int v10; // r12
  int v11; // t1
  int v12; // t1
  int v13; // r2
  void **v14; // r1
  void **v15; // r1
  char *v16; // r0
  int v17; // r3

  result = getenv(name);
  a1[1] = (void **)result;
  if ( result )
  {
    v8 = (unsigned __int8 *)(*a1)[15];
    v9 = (unsigned int)(*a1)[4];
    a1[3] = 0;
    a1[2] = (void **)(v9 | 0x42);
    if ( v8 )
    {
      while ( 1 )
      {
        v11 = (unsigned __int8)*result++;
        v10 = v11;
        v12 = *v8++;
        if ( *((unsigned __int8 *)&unk_7B7B0 + v10 + 704) != *((unsigned __int8 *)&unk_7B7B0 + v12 + 704) )
          break;
        if ( !v10 )
        {
          a1[1] = 0;
          a1[2] = (void **)(v9 | 0x62);
          break;
        }
      }
    }
    if ( a4 != 1 )
    {
      if ( a4 == 2 )
      {
        v14 = a1[2];
        if ( ((unsigned int)v14 & 0x20020) != 0
          && ((unsigned int)v14 & 0x40020) != 0x20
          && ((unsigned int)v14 & 0x400020) != 0x400000
          && ((unsigned int)v14 & 0x800020) != 0x800020 )
        {
          return result;
        }
      }
LABEL_8:
      v13 = (unsigned __int16)v9 >> 12;
      if ( (unsigned __int16)v9 >> 12 )
      {
        result = (char *)a1[1];
        v13 = (unsigned __int8)*result;
        if ( *result )
        {
          v16 = sub_44D28(result);
          v17 = (unsigned int)a1[2] | 0x40;
          a1[1] = (void **)v16;
          a1[2] = (void **)v17;
          return (char *)sub_429C8(a3, a1);
        }
        if ( (v9 & 0x10000) == 0 )
          return result;
      }
      a1[1] = (void **)v13;
      return (char *)sub_429C8(a3, a1);
    }
    v15 = a1[2];
    if ( ((unsigned int)v15 & 0x20020) == 0x20000 || ((unsigned int)v15 & 0x40020) == 0x40020 )
      goto LABEL_8;
  }
  return result;
}
