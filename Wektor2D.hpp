class Wektor2D
{
    public:
    
    
    
    Wektor2D(double xx, double yy)
    {
        setX(xx);
        setY(yy);
    }
    Wektor2D(){x=0.;y=0.;}
    
    ~Wektor2D(){}
    void    setX(double a){x=a;}
    double  getX() {return x;}
    
    void    setY(double a){y=a;}
    double  getY() {return y;}
  
    Wektor2D operator +(Wektor2D b)
    {
        double xx = x + b.getX();
        double yy = y + b.getY();
        return Wektor2D {xx,yy};
    }

    double operator *(Wektor2D b)
    {
        return x*b.getX() + y*b.getY(); 
    }      
    private:
        double x;
        double y;
};


