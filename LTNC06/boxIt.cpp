class Box {
private:
   int length;
   int breadth;
   int height;

public:
   // Default constructor
   Box() {
       length = 0;
       breadth = 0;
       height = 0;
   }

   // Parameterized constructor
   Box(int l, int b, int h) {
       length = l;
       breadth = b;
       height = h;
   }

   // Copy constructor
   Box(const Box& B) {
       length = B.length;
       breadth = B.breadth;
       height = B.height;
   }

   int getLength() {
       return length;
   }

   int getBreadth() {
       return breadth;
   }

   int getHeight() {
       return height;
   }

   long long CalculateVolume() {
       return (long long)length * breadth * height;
   }

   // Overloading < operator
   bool operator<(const Box& B) {
       if (length < B.length) {
           return true;
       } else if (breadth < B.breadth && length == B.length) {
           return true;
       } else if (height < B.height && breadth == B.breadth && length == B.length) {
           return true;
       }
       return false;
   }

   // Overloading << operator
   friend ostream& operator<<(ostream& out, const Box& B) {
       out << B.length << " " << B.breadth << " " << B.height;
       return out;
   }
};

int main() {
   Box b1;    // Should set b1.length = b1.breadth = b1.height = 0;
   Box b2(2, 3, 4);    // Should set b1.length = 2, b1.breadth = 3, b1.height = 4;
   cout << b2.getLength() << endl;     // Should return 2
   cout << b2.getBreadth() << endl;    // Should return 3
   cout << b2.getHeight() << endl;     // Should return 4
   cout << b2.CalculateVolume() << endl;   // Should return 24
   bool x = (b1 < b2);    // Should return true based on the conditions given
   cout << b2 << endl;     // Should print 2 3 4 in order.
   return 0;
}
