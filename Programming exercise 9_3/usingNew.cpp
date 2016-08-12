#include <iostream>
#include <new>

struct chaff{

    char dross[20];
    int slang;

};
const int arrSize = 2;
char memory [sizeof(chaff[arrSize])];


int main (void){
  using std::cout;
  using std::cin;
  using std::endl;

  chaff *pChaff = new (memory) chaff[2];

  for (int i = 0; i < arrSize; i++) {
    cout << "Enter dross[" << i << "]: ";
    cin.getline(pChaff[i].dross, 20);
    cout << "Enter slang[" << i << "]: ";
    cin >> pChaff[i].slang;
    cin.get();
  }
  for (int i = 0; i < arrSize; i++) {
    cout << "Dross: " << pChaff[i].dross << " \tSlang: " << pChaff[i].slang << "\n";
  }

  return 0;
}
