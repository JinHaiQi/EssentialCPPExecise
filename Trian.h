#ifdef TRIAN_H
#define TRIAN_H

class Trian{
  public:
    Trian();
    Trian(int);
    Trian(int, int);

  private:
    int _length;
    int _beg_pos;
    int _next;
};

#endif

