#include <iostream>
#include <math.h>
#include "MyClass.hpp"


Complex::Complex(){
	        _real=0;
		_imag=0;
		}

Complex::Complex(double real){
	_real=real;
	_imag=0;
}
Complex::Complex(double real, double imag){
		_real = real;
		_imag = imag;
	}	
Complex::Complex(const Complex &value){
	_real=value._real;
	_imag=value._imag;
}
Complex::~Complex(){
	}
void Complex::print(){
	std::cout<<_real<<" + "<<_imag<<"i"<<std::endl;
}


double Complex::real() const{
	return _real;
}


double Complex::imag() const{
	return _imag;

Complex Complex::conj(Complex c){
	if(*c.imag<0){
		std::cout<< " " <<c.real<<"  " << -c.imag;
		std::cout<<endl;
	else {	
		std::cout<< " " <<c.real<<"  " << -c.imag;
		std::cout<<endl;
	}
}


Complex Complex::add(Complex value){
	Complex temp;
	temp._real = _real +value._real;
	temp._imag = _imag +value._imag;
	return temp;
}
Complex Complex::sub(Complex value){
	Complex temp;
	temp._real = _real -value._real;
	temp._imag = _imag -value._imag;
	return temp;
}
Complex Complex::mult(Complex value){
	Complex temp;
	temp._real = (_real *value._real)-(_imag*value._imag);
	temp._imag = (_imag *value._imag)+(_imag*value._real);
	return temp;
}
Complex Complex::div(Complex value){
	Complex temp;
	temp._real = _real /value._real;
	temp._imag = _imag /value._imag;
	return temp;
}

double Complex::magnitude(){
	return sqrt((_real*_real)+(_imag*_imag));
}

double Complex::phase(){
	double My_Phase= atan(_imag/_real)*(180/M_PI);
        return My_Phase;
}
Complex Complex::operator+(Complex value){
	Complex temp;
	temp._real = _real +value._real;
	temp._imag = _imag +value._imag;

	return temp;
}

Complex Complex::operator-(Complex value){
	Complex temp;
	temp._real = _real - value._real;
	temp._imag = _imag - value._imag;

	return temp;
}

Complex Complex::operator*(Complex C1) {
	Complex temp;
	temp._real = _real * C1._real;
	temp._imag = _imag * C1._imag;

	return temp;
}

Complex Complex::operator/(Complex C1){
	
	Complex temp;
	temp._real = _real / C1._real;
	temp._imag = _imag / C1._imag;
	
	return temp;
}

Complex Complex::operator=(Complex value){
	
	_real = value._real;
	_imag = value._imag;

	return *this;
}

/* bool operator!=(Complex val){
	return((_real!=val.real)&&(_image!=val._real));
}


bool operator==(Complex val){
	return((_real==val.real)&&(_image==val._real));
}*/
std::ostream &operator<<(std::ostream &out,const Complex &c1){
	if(c1._imag<0){
		double temp =-1 * c1._imag;
		out<<c1._real<< "  -  " <<temp<<"i";
	}
	else{
		out<<c1._real<<"+"<<c1._imag<<"i";
	}
	return out;
} 
std::istream &operator>>(std::istream &in,Complex &Data){
	in>>Data._real>>Data._imag;
	return in;
}







