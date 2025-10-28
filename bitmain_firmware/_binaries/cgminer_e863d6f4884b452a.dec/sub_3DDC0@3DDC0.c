void __fastcall sub_3DDC0(int a1)
{
  unsigned __int8 *v2; // r5
  int i; // r4
  int v4; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%s ticket_mask = 0x%08x", "set_ticket_mask", a1);
    sub_343C4(5, s, 0);
  }
  v2 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v4 = *v2++;
    if ( v4 == 1 )
    {
      sub_3C790(i, 1, 0, 20, a1);
      sub_2A7F4();
    }
  }
}
