unsigned __int64 __fastcall sub_8754(__int64 *a1)
{
  unsigned __int64 v2; // [sp+8h] [bp-14h]
  __int64 v3; // [sp+10h] [bp-Ch]
  unsigned __int64 v4; // [sp+10h] [bp-Ch]

  v3 = *a1;
  v2 = a1[1];
  *a1 = v2;
  v4 = v3 ^ vshld_n_s64(v3, 0x17u);
  a1[1] = (v2 >> 5) ^ v4 ^ v2 ^ (v4 >> 18);
  return v2 + a1[1];
}
