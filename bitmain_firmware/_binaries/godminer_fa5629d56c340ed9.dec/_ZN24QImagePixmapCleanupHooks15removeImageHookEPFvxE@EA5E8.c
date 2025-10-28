int __fastcall QImagePixmapCleanupHooks::removeImageHook(
        QImagePixmapCleanupHooks *this,
        void (__fastcall *a2)(__int64))
{
  void (__fastcall *v3)(__int64); // [sp+4h] [bp-8h] BYREF

  v3 = a2;
  return hs_header_write((int)this, (int *)&v3);
}
