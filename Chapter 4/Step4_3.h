// 4.3.8

struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression() {}
};

struct Number : Expression
{
    
    Number(double value)
        : value(value)
    {}
    virtual double evaluate() const {
        return this->value;
    } 

private:
    double value;
};

struct BinaryOperation : Expression
{
    
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    ~BinaryOperation(){
        delete this->left;
        delete this->right;
    }
    virtual double evaluate() const {
         double a = (this->left)->evaluate();
         double b = (this->right)->evaluate();
         if (op == '+') return (a + b);
         if (op == '-') return (a - b);
         if (op == '/') return (a / b);
         if (op == '*') return (a * b);
    }

private:
    Expression const * left;
    Expression const * right;
    char op;
};