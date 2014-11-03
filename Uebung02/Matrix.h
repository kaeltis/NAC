#ifndef __MATRIX_H__
#define __MATRIX_H__

class Matrix
{
private:
	static int counter;
protected:
	int m_Zeilen;
	int m_Spalten;
	float* m_Element;
public:
	Matrix(int, int);
	virtual ~Matrix();
	virtual void ausgabe(bool) const;
	static int getCounter();
};
#endif