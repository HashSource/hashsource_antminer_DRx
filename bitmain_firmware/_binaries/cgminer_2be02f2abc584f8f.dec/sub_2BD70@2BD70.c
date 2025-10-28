int __fastcall sub_2BD70(const char *a1, const char *a2, const char *a3, int a4)
{
  signed int v9; // r3
  int v10; // r5
  const char *v11; // r0
  int v12; // r12
  int v13; // t1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 )
  {
    v9 = strlen(a1);
    if ( v9 <= 0 )
    {
      return 1;
    }
    else
    {
      v10 = *(unsigned __int8 *)a1;
      if ( dword_62A98[v10] < 0 )
      {
LABEL_12:
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "Invalid char 0x%x passed to valid_hex from in %s %s():%d", v10, a2, a3, a4);
          sub_3F1C0(3, s, 0);
          return 0;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        v11 = a1;
        v12 = 0;
        while ( v9 != ++v12 )
        {
          v13 = *(unsigned __int8 *)++v11;
          v10 = v13;
          if ( dword_62A98[v13] < 0 )
            goto LABEL_12;
        }
        return 1;
      }
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(s, 0x800u, "Null string passed to valid_hex from in %s %s():%d", a2, a3, a4);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
