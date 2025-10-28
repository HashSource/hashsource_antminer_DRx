void __fastcall sub_12020(int a1)
{
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( *(_BYTE *)(a1 + 329) || *(_DWORD *)(a1 + 296) || *(_BYTE *)(a1 + 328) )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(v3, "Discarded cloned or rolled work");
      sub_3F1C0(7, v3, 0);
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 316);
    if ( v2 )
    {
      ++*(_DWORD *)(v2 + 128);
      --*(_DWORD *)(*(_DWORD *)(a1 + 316) + 64);
      --*(_DWORD *)(*(_DWORD *)(a1 + 316) + 68);
    }
    ++*(_QWORD *)&dbl_79890;
  }
  sub_11D18((void **)a1);
}
