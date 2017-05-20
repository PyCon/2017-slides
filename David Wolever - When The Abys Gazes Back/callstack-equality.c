/**
 ** ==: EQUALITY COMPARISON
 **/
return PyObject_RichCompare(v, w, op);
    if (Py_EnterRecursiveCall(" in cmp"))
    if (v->ob_type == w->ob_type && !PyInstance_Check(v))
    richcmpfunc frich = RICHCOMPARE(v->ob_type);
        (PyType_HasFeature((t), Py_TPFLAGS_HAVE_RICHCOMPARE)? (t)->tp_richcompare : NULL)
    if (frich != NULL)
    res = (*frich)(v, w, op);
        if (!(PyString_Check(a) && PyString_Check(b)))
            PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_STRING_SUBCLASS)
            PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_STRING_SUBCLASS)
        if (a == b)
        result = Py_True;
        Py_INCREF(result);
    Py_LeaveRecursiveCall();
    return res;


