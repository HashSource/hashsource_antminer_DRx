int __fastcall hashtable_del(hashtable_t *a1, char *a2)
{
  unsigned int v5; // [sp+Ch] [bp+Ch]

  v5 = hash_str(a2);
  return hashtable_do_del(a1, a2, v5);
}
