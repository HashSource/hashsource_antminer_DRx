void __fastcall sub_12260(int a1)
{
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( *(_BYTE *)(a1 + 329) || *(_DWORD *)(a1 + 296) || *(_BYTE *)(a1 + 328) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(v3, "Discarded cloned or rolled work");
      sub_3F178(7, v3, 0);
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
    ++*(_QWORD *)&dbl_80970;
  }
  sub_11F58((void **)a1);
}
