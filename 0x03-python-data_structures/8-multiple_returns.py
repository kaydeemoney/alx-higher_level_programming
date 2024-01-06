#!/usr/bin/python3
def multiple_returns(sentence):
    mykd_tuple = ()
    if len(sentence) == 0:
        mykd_tuple = 0, "None"
    else:
        mykd_tuple = len(sentence), sentence[0]
    return mykd_tuple
