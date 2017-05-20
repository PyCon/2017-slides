/**
 ** in: MEMBERSHIP COMPARISON
 **/
res = PySequence_Contains(w, v);
    if (PyType_HasFeature(seq->ob_type, Py_TPFLAGS_HAVE_SEQUENCE_IN))
    PySequenceMethods *sqm = seq->ob_type->tp_as_sequence;
    if (sqm != NULL && sqm->sq_contains != NULL)
    return (*sqm->sq_contains)(seq, ob);
        return PyObject_RichCompareBool(el, PyTuple_GET_ITEM(a, i), Py_EQ);
                (((PyTupleObject *)(op))->ob_item[i])
            if (v == w)
            if (op == Py_EQ)
            return 1;
v = res ? Py_True : Py_False;
Py_INCREF(v);

