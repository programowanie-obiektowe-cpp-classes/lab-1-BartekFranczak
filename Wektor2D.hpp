class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    Wektor2D(){x=0.;y=0.;}
    Wektor2D(double xx, double yy)
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

Wektor2D operator +(Wektor2D a, Wektor2D b)
{
    double xx = a.getX() + b.getX();
    double yy = a.getY() + b.getY();
    return Wektor2D {xx,yy};
}

double operator *(Wektor2D a, Wektor2D b)
{
    return a.getX()*b.getX()+a.getY()*b.getY(); 
}
