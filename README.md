# SnakeGame

## Descrierea Proiectului
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul este să mănânci "mere" și să crești lungimea șarpelui fără a te ciocni de pereți sau de propriul corp.

## Regulile Jocului
1. Jucătorul controlează un șarpe care se mișcă pe tabla de joc.
2. Obiectivul este să mănânci merele care apar aleator pe tablă.
3. Fiecare măr mâncat crește lungimea șarpelui.
4. Jocul se termină dacă șarpele:
   - Se ciocnește de un perete.
   - Se ciocnește de propriul corp.

## Arhitectura Proiectului

### Funcția fișierelor din proiect

- **point.cpp și point.hpp**  
  **Rol**: Gestionează coordonatele (punctele) folosite pentru poziționarea șarpelui și a altor elemente pe tablă.  
  **Schimbări**: Codul este compilat într-o bibliotecă statică (`libpoint.a`).

- **board.cpp și board.hpp**  
  **Rol**: Definește dimensiunile tablei de joc și oferă un cadru pentru poziționarea elementelor.  
  **Schimbări**: Este compilat într-o bibliotecă statică (`libboard.a`).

- **snake.cpp și snake.hpp**  
  **Rol**: Controlează logica șarpelui, inclusiv mișcarea, creșterea și detectarea coliziunilor.  
  **Schimbări**: Codul este compilat într-o bibliotecă statică (`libsnake.a`).

- **painter.cpp și painter.hpp**  
  **Rol**: Desenează elementele grafice și afișează textul pe tablă.  
  **Schimbări**: Utilizează STL (std::vector<std::string>) pentru imagini și text și este compilat în biblioteca statică (`libpainter.a`).

- **abstract_painter.hpp**  
  **Rol**: Definește o interfață abstractă pentru desenarea graficii și textului. Este implementată de `Painter`.  
  **Schimbări**: Conversie către utilizarea STL (std::vector și std::string) pentru compatibilitate și manipulare sigură a datelor.

- **.gitignore**  
  **Rol**: Evită includerea fișierelor temporare generate în timpul procesului de construire, precum:  
    - Fișiere obiect (*.o)  
    - Biblioteci statice/dinamice (*.a, *.so)  
    - Executabile (*.exe, *.out)  

- **Makefile**  
  **Rol**: Controlează procesul de construire al proiectului.  
  **Schimbări**:  
    - Modulele (Point, Board, Painter, Snake) sunt compilate separat în biblioteci statice.  
    - Adăugarea regulilor pentru compilare, curățare și integrarea modulelor.

- **main.cpp**  
  **Rol**: Punctul de intrare al aplicației, integrând toate modulele și implementând logica jocului.

## Specifikații și Dependențe

### Mediul de Dezvoltare
- **Compilator**: `g++` (compatibil cu standardul C++17)
- **Sisteme de Operare**: Linux, Windows, macOS

### Biblioteci utilizate
- **STL**: `<vector>`, `<string>` pentru stocarea și manipularea datelor.
- **iostream** pentru input/output.

### Dependențe externe
- Nu sunt necesare biblioteci terțe suplimentare.

## Construirea și Rularea Aplicației

### Clonarea proiectului
1. Clonăm proiectul:
    ```bash
    git clone <repository_url>
    ```
2. Navigăm în directorul proiectului:
    ```bash
    cd SnakeGame
    ```

3. Construim proiectul folosind `make`:
    ```bash
    make
    ```

4. După construirea cu succes, rulăm aplicația:
    ```bash
    ./SnakeGame
    ```

## Teste
Testele unitare sunt incluse în directorul `tests` și sunt folosite pentru a verifica corectitudinea funcționalității claselor de date din proiect.

