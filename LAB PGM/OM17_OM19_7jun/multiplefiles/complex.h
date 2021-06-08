namespace NComplex
{
    class Complex
    {
        private: // data member or field
            int real;
            int imag;
        public:
            Complex();
            Complex(const Complex& other);

            Complex(int real, int imag);
            void Accept();
            void Print();
            
            //setter method mutator
            void SetReal(int real);
            void SetImag(int imag);
            // inspectors getter method
            int GetReal();
            int GetImag();
            
            ~Complex();
        
            
    };// end of class Complex
}