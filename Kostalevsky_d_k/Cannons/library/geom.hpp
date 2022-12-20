#include<geom.cpp>

std::ostream& operator << (std::ostream& ostrm, const Rdec2D& cd);

Rdec2D operator*(const Rdec2D& n, const double& num);

Rdec2D operator+(const Rdec2D& n, const Rdec2D& n1);

Rdec2D operator-(const Rdec2D& n, const Rdec2D& n1);

Rdec2D operator/(const Rdec2D& n, const double& num);

Rdec2D& operator*=(Rdec2D& n, const double& num);

Rdec2D& operator+=(Rdec2D& n, const Rdec2D& n1);

Rdec2D& operator-=(Rdec2D& n, const Rdec2D& n1);

Rdec2D& operator/=(Rdec2D& n, const Rdec2D& num);

double norm(const Rdec2D& n);

double dot(const Rdec2D& n,const Rdec2D& n1);

Rpol2D ToPol(Rdec2D vector);