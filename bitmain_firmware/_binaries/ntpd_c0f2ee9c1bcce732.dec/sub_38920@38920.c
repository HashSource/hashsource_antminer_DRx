FILE *__fastcall sub_38920(int a1, int a2, const char *a3)
{
  int v5; // r4
  int v6; // r3
  bool v7; // cc
  int v8; // r3
  bool v9; // cc
  __int16 *v10; // r3
  __int16 *v11; // r1
  int v12; // r3
  bool v13; // cc
  int v14; // r3
  bool v15; // cc
  __int16 *v16; // r3
  __int16 *v17; // r1
  FILE *result; // r0
  int v19; // r3
  __int16 *v20; // r2

  while ( 2 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
    if ( a2 != 8 && (dword_7BE6C & 0x400) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 16);
      v7 = v6 <= 4;
      if ( v6 <= 4 )
        a3 = (const char *)*(&off_7ABA4 + v6);
      v8 = *(_DWORD *)(v5 + 12);
      if ( !v7 )
        a3 = (const char *)&word_672F4;
      v9 = v8 <= 9;
      if ( v8 > 9 )
        v10 = &word_672F4;
      else
        v10 = (__int16 *)(&off_7ABA4 + v8);
      if ( v9 )
        v10 = (__int16 *)*((_DWORD *)v10 + 5);
      if ( a2 > 8 )
        v11 = &word_672F4;
      else
        v11 = (__int16 *)(&off_7ABA4 + a2);
      if ( a2 <= 8 )
        v11 = (__int16 *)*((_DWORD *)v11 + 15);
      sub_4FE78(6, "TRUE: clock %s, state %s, event %s", a3, (const char *)v10, (const char *)v11);
    }
    v12 = *(_DWORD *)(v5 + 16);
    v13 = v12 <= 4;
    if ( v12 <= 4 )
      a3 = (const char *)*(&off_7ABA4 + v12);
    v14 = *(_DWORD *)(v5 + 12);
    if ( !v13 )
      a3 = (const char *)&word_672F4;
    v15 = v14 <= 9;
    if ( v14 > 9 )
      v16 = &word_672F4;
    else
      v16 = (__int16 *)(&off_7ABA4 + v14);
    if ( v15 )
      v16 = (__int16 *)*((_DWORD *)v16 + 5);
    if ( a2 > 8 )
      v17 = &word_672F4;
    else
      v17 = (__int16 *)(&off_7ABA4 + a2);
    if ( a2 <= 8 )
      v17 = (__int16 *)*((_DWORD *)v17 + 15);
    result = sub_387C8(a1, (int)"clock %s, state %s, event %s\n", a3, (const char *)v16, (const char *)v17);
    switch ( *(_DWORD *)(v5 + 16) )
    {
      case 0:
        v19 = *(_DWORD *)(v5 + 12);
        switch ( v19 )
        {
          case 0:
            if ( a2 )
              goto LABEL_40;
            result = (FILE *)sub_388AC(a1, "P\r");
            *(_DWORD *)(v5 + 12) = 4;
            return result;
          case 1:
            if ( (unsigned int)a2 > 1 )
            {
              if ( a2 != 2 )
                goto LABEL_40;
              *(_DWORD *)(v5 + 16) = 2;
LABEL_71:
              a2 = 0;
              continue;
            }
            result = (FILE *)sub_388AC(a1, "PO\r");
            *(_DWORD *)(v5 + 12) = 2;
            return result;
          case 2:
            if ( (unsigned int)a2 <= 1 )
            {
              *(_DWORD *)(v5 + 12) = 0;
              return (FILE *)sleep(1u);
            }
            if ( a2 != 7 )
              goto LABEL_40;
            *(_DWORD *)(v5 + 16) = 3;
            goto LABEL_71;
          case 3:
            if ( (unsigned int)a2 > 1 )
            {
              if ( a2 != 8 )
LABEL_40:
                abort();
              *(_DWORD *)(v5 + 16) = 4;
              *(_DWORD *)(v5 + 12) = 9;
            }
            else
            {
              *(_DWORD *)(v5 + 12) = 1;
              return (FILE *)sub_388AC(a1, "F18\r");
            }
            return result;
          case 4:
            switch ( a2 )
            {
              case 0:
              case 1:
              case 8:
                *(_DWORD *)(v5 + 12) = 3;
                return (FILE *)sub_388AC(a1, "C\r");
              case 5:
                *(_DWORD *)(v5 + 16) = 1;
                goto LABEL_71;
              default:
                goto LABEL_40;
            }
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
            if ( v19 == 10 )
              v20 = &word_672F4;
            else
              v20 = (__int16 *)&off_7ABA4;
            if ( v19 != 10 )
              v20 = *(__int16 **)&v20[2 * v19 + 10];
            return (FILE *)sub_4FE78(6, "TRUE: state %s is unexpected!", v20);
          default:
            return result;
        }
      case 1:
        switch ( a2 )
        {
          case 5:
            goto LABEL_36;
          case 6:
            return (FILE *)sub_388AC(a1, "P");
          case 0:
LABEL_36:
            result = (FILE *)sub_388AC(a1, (char *)"C");
            *(_DWORD *)(v5 + 12) = 8;
            break;
        }
LABEL_37:
        if ( a2 )
        {
LABEL_41:
          if ( a2 == 8 )
          {
LABEL_42:
            if ( (unsigned int)(*(_DWORD *)(v5 + 12) - 8) <= 1 )
              *(_DWORD *)(v5 + 12) = 9;
            else
              return (FILE *)sub_388AC(a1, (char *)&byte_68650);
          }
        }
        else
        {
          result = (FILE *)sub_388AC(a1, (char *)"C");
          *(_DWORD *)(v5 + 12) = 8;
        }
        return result;
      case 2:
        switch ( a2 )
        {
          case 0:
            result = (FILE *)sub_388AC(a1, "F18\r");
            *(_DWORD *)(v5 + 12) = 5;
            break;
          case 2:
            result = (FILE *)sub_388AC(a1, "F50\r");
            *(_DWORD *)(v5 + 12) = 6;
            break;
          case 3:
            result = (FILE *)sub_388AC(a1, "F51\r");
            *(_DWORD *)(v5 + 12) = 7;
            break;
          case 4:
            result = (FILE *)sub_388AC(a1, "F08\r");
            *(_DWORD *)(v5 + 12) = 8;
            break;
          case 8:
            goto LABEL_42;
          default:
            return result;
        }
        return result;
      case 3:
        if ( a2 )
          goto LABEL_41;
        sub_388AC(a1, "MD3\r");
        sub_388AC(a1, "TSU\r");
        result = (FILE *)sub_388AC(a1, "AU\r");
        *(_DWORD *)(v5 + 12) = 8;
        return result;
      case 4:
        goto LABEL_37;
      default:
        goto LABEL_40;
    }
  }
}
