const char *__fastcall sub_46690(const char *a1, _DWORD *a2, _DWORD *a3)
{
  const char *v4; // r11
  unsigned int v5; // r1
  const char *v7; // r3
  const char *v8; // r5
  unsigned int v9; // r4
  int v10; // r2
  int v11; // r1
  unsigned int v12; // t1
  const char *v14; // r3
  unsigned int v15; // t1
  const char *v16; // r3
  unsigned int v17; // t1
  const char *v18; // r1
  unsigned int v19; // r3
  unsigned int v20; // t1
  bool v21; // zf
  unsigned __int8 *v22; // r4
  unsigned __int8 *v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // t1
  unsigned int v26; // r3
  unsigned __int8 *v27; // r11
  int v28; // r1
  unsigned int v29; // r3
  int v30; // r3

  v4 = a1;
  v5 = *(unsigned __int8 *)a1;
  while ( 2 )
  {
    if ( v5 <= 0x7F && (dword_69A0C[v5] & 0x500) != 0 )
    {
      v7 = v4 + 1;
      do
      {
        v8 = v7++;
        v9 = *(unsigned __int8 *)v8;
        if ( v9 > 0x7F )
        {
          v4 = v8;
          v11 = 0;
          goto LABEL_10;
        }
        v10 = dword_69A0C[v9];
        v11 = v10 & 0x500;
      }
      while ( (v10 & 0x500) != 0 );
      if ( (v10 & 1) != 0 )
      {
        do
        {
          v4 = v7;
          v12 = *(unsigned __int8 *)v7++;
          v9 = v12;
          ++v11;
        }
        while ( v12 <= 0x7F && (dword_69A0C[v9] & 1) != 0 );
      }
      else
      {
        v11 = 0;
        v4 = v8;
      }
LABEL_10:
      switch ( sub_46610(v8, v11) )
      {
        case 1:
          v21 = v9 == 61;
          v22 = (unsigned __int8 *)(v4 + 1);
          if ( !v21 )
            goto LABEL_45;
          v26 = *((unsigned __int8 *)v4 + 1);
          if ( v26 > 0x7F || (dword_69A0C[v26] & 0x6F) == 0 )
            goto LABEL_45;
          v27 = (unsigned __int8 *)(v4 + 2);
          v28 = 0;
          do
          {
            v29 = *v27;
            v22 = v27;
            ++v28;
            ++v27;
            if ( v29 > 0x7F )
              goto LABEL_45;
            v30 = dword_69A0C[v29];
          }
          while ( (v30 & 0x6F) != 0 );
          if ( v28 && (v30 & 0x1500) != 0 )
          {
            switch ( sub_4658C((const char *)&v22[-v28], v28) )
            {
              case 1:
                v4 = (const char *)v22;
                *a3 = 1;
                goto LABEL_48;
              case 2:
                v4 = (const char *)v22;
                *a3 = 5;
                goto LABEL_48;
              case 3:
              case 4:
                v4 = (const char *)v22;
                *a3 = 3;
                goto LABEL_48;
              case 5:
                v4 = (const char *)v22;
                *a3 = 2;
                goto LABEL_48;
              case 6:
              case 7:
                v4 = (const char *)v22;
                *a3 = 4;
                goto LABEL_48;
              case 8:
              case 9:
                v4 = (const char *)v22;
                *a3 = 6;
                goto LABEL_48;
              default:
                break;
            }
          }
LABEL_45:
          v23 = v22;
          *a3 = 0;
          while ( 1 )
          {
            v4 = (const char *)v23;
            v25 = *v23++;
            v24 = v25;
            if ( v25 <= 0x7F && (dword_69A0C[v24] & 0x1500) != 0 )
              break;
            if ( !v24 )
              return 0;
          }
LABEL_48:
          if ( !v4 )
            return 0;
          v5 = *(unsigned __int8 *)v4;
          continue;
        case 2:
          v16 = v4;
          while ( 1 )
          {
            v4 = v16;
            v17 = *(unsigned __int8 *)v16++;
            v5 = v17;
            if ( v17 <= 0x7F && (dword_69A0C[v5] & 0x1500) != 0 )
              break;
            if ( !v5 )
              return 0;
          }
          continue;
        case 3:
          v14 = v4;
          while ( 1 )
          {
            v4 = v14;
            v15 = *(unsigned __int8 *)v14++;
            v5 = v15;
            if ( v15 <= 0x7F && (dword_69A0C[v5] & 0x1500) != 0 )
              break;
            if ( !v5 )
              return 0;
          }
          continue;
        case 4:
          if ( v9 > 0x7F || (dword_69A0C[v9] & 0x1500) == 0 )
            goto LABEL_39;
          *a2 = 0;
          v5 = *(unsigned __int8 *)v4;
          continue;
        case 5:
          if ( v9 > 0x7F || (dword_69A0C[v9] & 0x1500) == 0 )
            goto LABEL_39;
          *a2 = 1;
          v5 = *(unsigned __int8 *)v4;
          continue;
        case 6:
          if ( v9 > 0x7F || (dword_69A0C[v9] & 0x1500) == 0 )
            goto LABEL_39;
          *a2 = 2;
          v5 = *(unsigned __int8 *)v4;
          continue;
        default:
          v4 = v8;
LABEL_39:
          v18 = v4;
          *a3 = 0;
          break;
      }
      while ( 1 )
      {
        v4 = v18;
        v20 = *(unsigned __int8 *)v18++;
        v19 = v20;
        if ( v20 <= 0x7F && (dword_69A0C[v19] & 0x1500) != 0 )
          break;
        if ( !v19 )
          return 0;
      }
    }
    else if ( v5 == 47 )
    {
      *a3 = 0;
    }
    else if ( v5 != 62 )
    {
      return 0;
    }
    return v4;
  }
}
