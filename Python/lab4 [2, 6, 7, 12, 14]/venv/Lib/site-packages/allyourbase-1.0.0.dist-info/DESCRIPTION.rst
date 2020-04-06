allyourbase
===========

All Your Base is a python library for converting number strings from any base to number strings of any other base.

This library was created to make the following improvements on existing base conversion libraries out there:

- Can convert both integers and floats
- Uses Decimal package to allow for arbitrary precision / number of digits
- Uses Decimal package to avoid binary rounding errors
- Is not limited to base 36, 62, 64 due to available characters. Can convert to/from any integer base from 2 to whatever you like. (higher bases use delimited decimal format)


