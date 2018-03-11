class point
{
 public:
	 point(double init_x=0, double init_y=0);    //values from user program
                                                     //default if no values provided
         void shift(double dx, double dy);       //shift a point by dx and dy values
         double get_x() const;                           //return the value of x
         double get_y() const;                           //return the value of y
private:
         double x;
         double y;
};

