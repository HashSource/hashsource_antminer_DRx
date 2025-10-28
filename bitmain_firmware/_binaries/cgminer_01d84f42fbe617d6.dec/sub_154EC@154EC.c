void __fastcall sub_154EC(int a1)
{
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( *(_BYTE *)(a1 + 273) || *(_DWORD *)(a1 + 240) || *(_BYTE *)(a1 + 272) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy(v3, "Discarded cloned or rolled work");
      sub_38438(7, v3, 0);
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 260);
    if ( v2 )
    {
      ++*(_DWORD *)(v2 + 124);
      --*(_DWORD *)(*(_DWORD *)(a1 + 260) + 64);
      --*(_DWORD *)(*(_DWORD *)(a1 + 260) + 68);
    }
    ++*(_QWORD *)&dword_63D68;
  }
  sub_152B8((void **)a1);
}
