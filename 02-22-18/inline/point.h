class point
{
 public:
	 point(double init_x=0, double init_y=0)
	{
		x = init_x;
		y = init_y;
	} 
                                                     //default if no values provided
         void shift(double dx, double dy)
	{
		x = x + dx; 
		y =y + dy;
	}       //shift a point by dx and dy values
         double get_x() const{return x;}                           //return the value of x
         double get_y() const{return y;}                           //return the value of y
private:
         double x;
         double y;
};

