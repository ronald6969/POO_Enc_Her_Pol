#pragma once
#include <iostream>

using namespace std;

template<typename T>
class ColaF
{
private:
	T* cola;
	int prim;
	int fin;
	int tamano;
public:
	ColaF(int tamano);
	~ColaF();
	void push(T dato);
	T pop();
	int getPrim();
	bool vacio();
	void imprimir();
};

template<typename T>
inline ColaF<T>::ColaF(int _tamano) {
	tamano = _tamano;
	cola = new T[tamano];
	prim = -1;
	fin = -1;
}

template<typename T>
inline ColaF<T>::~ColaF() {
	delete[] cola;
}

template<typename T>
inline void ColaF<T>:: push(T dato) {
	if (vacio()) {
		prim = 0;
	}
	if (fin < tamano - 1) {
		fin++;
		cola[fin] = dato;
	}
	else {
		cout << "Cola llena" << endl;
	}
}

template<typename T>
inline T ColaF<T>::pop() {
	if (!vacio()) {
		T dato = cola[prim];
		if (prim == fin) {
			prim = -1;
			fin = -1;
		}
		else {
			prim++;
		}
		return dato;
	}
	else {
		cout << "Cola vacia" << endl;
	}
}

template<typename T>
inline int ColaF<T>::getPrim() {
	return prim;
}

template<typename T>
inline bool ColaF<T>::vacio() {
	return prim == -1 && fin == -1;
}

template<typename T>
inline void ColaF<T>::imprimir() {
	if (!vacio()) {
		for (int i = prim; i <= fin; i++) {
			cout << cola[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Cola vacia" << endl;
	}
}
