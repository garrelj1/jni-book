#!/bin/bash
java -XshowSettings:properties > tmp 2>&1
grep "java.library.path" tmp
rm tmp
