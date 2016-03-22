// 5.2.3

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);
    Rational & operator+=(Rational a){this->add(a);return *this;}
    Rational & operator-=(Rational a){this->sub(a);return *this;}
    Rational & operator*=(Rational a){this->mul(a);return *this;}
    Rational & operator/=(Rational a){this->div(a);return *this;}
    Rational & operator+=(int b){Rational bb = Rational(b);this->add(bb);return *this;}
    Rational & operator-=(int b){Rational bb = Rational(b);this->sub(bb);return *this;}
    Rational & operator*=(int b){Rational bb = Rational(b);this->mul(bb);return *this;}
    Rational & operator/=(int b){Rational bb = Rational(b);this->div(bb);return *this;}
    Rational  operator-() const {Rational a = Rational(this->numerator_,this->denominator_);a.neg();return a;}
    Rational  operator+() const {Rational a = Rational(this->numerator_,this->denominator_);return a;}
    void neg();
    void inv();
    double to_double() const;

private:
    int numerator_;
    unsigned denominator_;
};

// 5.2.4

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    unsigned denominator_;
};
Rational& operator-(Rational a,Rational  b) {return a-=b;}
Rational& operator+(Rational a,Rational  b) {return a+=b;}
Rational& operator/(Rational a,Rational  b) {return a/=b;}
Rational& operator*(Rational a,Rational  b) {return a*=b;}

//5.2.6

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

    bool positive(){return(this->numerator_ > 0);}
    bool negative(){return(this->numerator_ < 0);}
    bool zero(){return(this->numerator_ == 0);}
private:
    int numerator_;
    unsigned denominator_;
};

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

    bool operator<(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return a.negative();
    }
    bool operator>(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return a.positive();
    }
    bool operator==(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return a.zero();
    }

    bool operator<=(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return !a.positive();
    }
    bool operator>=(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return !a.negative();
    }
    bool operator!=(Rational lhs, Rational rhs){
        Rational a = lhs - rhs;
        return !a.zero();
    }
	
// 5.2.8

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    operator double() const {return this->to_double();} 
private:
    int numerator_;
    unsigned denominator_;
};