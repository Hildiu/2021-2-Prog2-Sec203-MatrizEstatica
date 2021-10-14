#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int mat[4][7];
/*
//------- se leen datos desde el teclado hacia la matriz
  for(int f=0; f<4; f++)
    for(int c=0; c<7; c++)
    {
      cout << "mat[" << f << "][" << c << "]= ";
      cin >> mat[f][c];
    }
 */

//--- si se desea genera valores al azar

 srand(time(nullptr)) ;
  for(int f=0; f<4; f++)
    for(int c=0; c<7; c++)
      mat[f][c] = rand() % 100;

  // --- imprimimos la matriz
  for(int f=0; f<4; f++)
  {
    for (int c = 0; c < 7; c++)
      cout << setw(5) << mat[f][c];
    cout << "\n";
  }
  return 0;
}
