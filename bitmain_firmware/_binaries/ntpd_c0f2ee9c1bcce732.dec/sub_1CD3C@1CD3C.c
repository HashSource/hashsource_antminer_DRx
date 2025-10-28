int *__fastcall sub_1CD3C(int *result, unsigned __int8 *a2, size_t a3, __int16 a4)
{
  bool v4; // zf
  int v8; // r4
  unsigned __int8 *v9; // r7
  int v10; // r6
  int v11; // r3
  unsigned __int8 *v12; // r12
  unsigned __int8 *v13; // r4
  int v14; // lr
  int v15; // t1
  unsigned __int8 *v16; // r5
  void *v17; // r4
  __int16 v18; // r3
  void *v19; // r5
  void *v20; // r0

  v4 = a2 == 0;
  if ( a2 )
    v4 = a3 == 0;
  if ( !v4 )
  {
    v8 = *result;
    if ( !*result || (*(_WORD *)(v8 + 2) & 0x80) != 0 )
    {
LABEL_19:
      v20 = (void *)sub_1CC3C(result, a3, a4);
      return (int *)memmove(v20, a2, a3);
    }
    else
    {
      v9 = *(unsigned __int8 **)(v8 + 4);
      if ( v9 )
      {
        v10 = *result;
        do
        {
          v11 = *v9;
          if ( v11 == 61 )
          {
            v16 = a2;
          }
          else
          {
            if ( *a2 != v11 )
              goto LABEL_15;
            v12 = a2 + 1;
            v13 = v9;
            while ( 1 )
            {
              v15 = *++v13;
              v14 = v15;
              v16 = v12++;
              if ( v15 == 61 )
                break;
              if ( *v16 != v14 )
                goto LABEL_15;
            }
          }
          if ( *v16 == 61 )
          {
            free(v9);
            v17 = (void *)sub_4F524(a3);
            result = (int *)memmove(v17, a2, a3);
            *(_DWORD *)(v10 + 4) = v17;
            *(_WORD *)(v10 + 2) = a4;
            return result;
          }
LABEL_15:
          v18 = *(_WORD *)(v10 + 10);
          v10 += 8;
          v8 = v10;
          if ( (v18 & 0x80) != 0 )
            goto LABEL_19;
          v9 = *(unsigned __int8 **)(v10 + 4);
        }
        while ( v9 );
      }
      v19 = (void *)sub_4F524(a3);
      result = (int *)memmove(v19, a2, a3);
      *(_DWORD *)(v8 + 4) = v19;
      *(_WORD *)(v8 + 2) = a4;
    }
  }
  return result;
}
