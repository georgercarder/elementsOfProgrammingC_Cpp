template<typename F>
int distance(int x, int y, F f) {

  int dist = 0;
  int _x = x;
  int _y = y;

  while ( _x != _y) {
    dist ++;
    _x = f(_x);
  }

  return dist;
}
