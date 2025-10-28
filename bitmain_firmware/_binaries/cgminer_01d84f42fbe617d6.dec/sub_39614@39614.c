const char *__fastcall sub_39614(const char **a1, int *a2, const char *a3, const char *a4, int a5)
{
  const char *v7; // r1
  const char *result; // r0
  int v9; // r1
  int v10; // r3
  const char *v11; // r2
  const char *v12; // r2
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v7 = *a1;
  result = (const char *)*a2;
  if ( v7 != (const char *)*a2 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      v7,
      "_k_list_transfer_to_head",
      (const char *)*a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      338);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v9 = *((unsigned __int8 *)a1 + 44);
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_list_transfer_to_head",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      343);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  if ( a1[3] )
  {
    v10 = a2[3];
    v11 = a1[4];
    if ( v10 )
    {
      *(_DWORD *)(v10 + 4) = v11;
    }
    else
    {
      v9 = 0;
      a2[4] = (int)v11;
    }
    if ( v10 )
      v9 = a2[3];
    *((_DWORD *)a1[4] + 2) = v9;
    a2[3] = (int)a1[3];
    a1[4] = 0;
    v12 = a1[7];
    a1[3] = 0;
    a2[7] += (int)v12;
    a1[7] = 0;
    a2[8] += (int)a1[8];
    a1[8] = 0;
  }
  return result;
}
