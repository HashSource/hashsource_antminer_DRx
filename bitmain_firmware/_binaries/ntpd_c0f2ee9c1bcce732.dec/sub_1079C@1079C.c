int __fastcall sub_1079C(const char **a1, int a2)
{
  __int64 v2; // d0
  int v5; // r4
  void *v6; // r5
  int v7; // r0
  FILE *v8; // r6
  const char *v9; // r0
  int v11; // r12
  struct addrinfo *pai; // [sp+Ch] [bp-24h] BYREF
  char v13[12]; // [sp+10h] [bp-20h] BYREF
  char s[20]; // [sp+1Ch] [bp-14h] BYREF

  v5 = sub_10D64(24);
  *(_QWORD *)v5 = v2;
  strcpy(v13, "192.168.0.");
  v6 = (void *)sub_4F524(28);
  if ( a1[1] == (const char *)387 )
  {
    v11 = dword_794EC++;
    snprintf(s, 0x11u, "%s%d", v13, v11);
    printf("Selecting ip address %s for hostname %s\n", s, *a1);
    v7 = getaddrinfo(s, "ntp", 0, &pai);
  }
  else
  {
    v7 = getaddrinfo(*a1, "ntp", 0, &pai);
  }
  if ( v7 )
  {
    fwrite("ERROR!! Could not get a new address\n", 1u, 0x24u, (FILE *)stderr);
    exit(1);
  }
  memcpy(v6, pai->ai_addr, pai->ai_addrlen);
  v8 = (FILE *)stderr;
  v9 = (const char *)sub_50CD0(v6);
  fprintf(v8, "Successful in setting ip address of simulated server to: %s\n", v9);
  freeaddrinfo(pai);
  *(_DWORD *)(v5 + 8) = v6;
  *(_DWORD *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 16) = sub_10E58(a2);
  return v5;
}
