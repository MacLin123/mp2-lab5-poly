#pragma once
#include "DatList.h"
#include "DatLink.h"
#include "DatValue.h"
class THeadRing : public TDatList
{
protected:
  PTDatLink pHead; // заголовок, pFirst - звено за pHead
public:
  THeadRing();
  ~THeadRing();
  // вставка звеньев
  virtual void InsFirst(PTDatValue pVal = NULL); // после заголовка
  // удаление звеньев
  virtual void DelFirst(void); // удалить первое звено
};