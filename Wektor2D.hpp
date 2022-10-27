class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    {   

    Wektor2D(double xx=0, double yy=0)
    {
        setX(xx);
        setY(yy);
    }

    ~Wektor2D()
    {   
    } 
    public:
        void    setX(double a){x=a;}
        double  getX() {return x;}
        void    setY(double a){y=a;}
        double  getY() {return y;}
        
    private:
        double x;
        double y;
};
};
