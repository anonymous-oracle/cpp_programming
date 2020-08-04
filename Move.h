#define PRINT(sent)\
 std::cout << sent << std::endl
class Move {
   private:
int *data;
public:
Move(int d);
inline void set_data_value(int d) const { *this->data = d;}
inline int get_data_value() const {return  *this->data;}
Move(const Move &source);
Move(Move &&source);
~Move();
};