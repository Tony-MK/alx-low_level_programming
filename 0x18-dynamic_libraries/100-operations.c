#include "Python.h"
/*
 *
 */
PyObject *add(PyObject *a, PyObject *b)
{
	printf("%d\n", PyNumber_Check(a));
	return PyNumber_Add(a, b);
}

PyObject *mod(PyObject *args)
{
	register float *n_a = NULL, *n_b = NULL;
	if (PyArg_ParseTuple(args, "ff", n_a, n_b))
	{
		return PyFloat_FromDouble(*n_a + *n_b);
	}
	return NULL;
}
