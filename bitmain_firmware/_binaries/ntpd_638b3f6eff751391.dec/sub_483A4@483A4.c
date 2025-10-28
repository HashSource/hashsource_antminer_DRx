const char *__fastcall sub_483A4(unsigned int a1, _DWORD *a2, const char **a3, unsigned int a4)
{
  const char *v6; // r5
  unsigned int v8; // r3
  bool v9; // cc
  unsigned int v10; // r1
  int v11; // r3

  switch ( a1 )
  {
    case 2u:
      v10 = a2[6];
      v6 = 0;
      if ( a4 > v10 )
        fputs(a3[v10], (FILE *)stdout);
      else
        printf("INVALID-%d", v10);
      break;
    case 3u:
      v8 = a2[6];
      v9 = a4 > v8;
      if ( a4 <= v8 )
      {
        v6 = "*INVALID*";
      }
      else
      {
        v8 = (unsigned int)a3[v8];
        v6 = 0;
      }
      if ( v9 )
        a2[6] = v8;
      break;
    case 1u:
      sub_426A4(1u, a2, a3, a4);
      return 0;
    default:
      v6 = (const char *)sub_43F28((const char *)a2[6], a1, a2, a3, a4);
      if ( (a2[4] & 0x40) != 0 )
      {
        free((void *)a2[6]);
        v11 = a2[4];
        a2[6] = 0;
        a2[4] = v11 & 0xFFFFFFBF;
      }
      break;
  }
  return v6;
}
