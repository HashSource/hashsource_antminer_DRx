void __fastcall sub_1A328(int a1)
{
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( *(_BYTE *)(a1 + 329) || *(_DWORD *)(a1 + 296) || *(_BYTE *)(a1 + 328) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(v3, "Discarded cloned or rolled work");
      sub_343C4(7, v3, 0);
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
    ++*(_QWORD *)&dword_72DA0;
  }
  sub_19F2C((void **)a1);
  j_free((void *)a1);
}
