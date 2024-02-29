#!/bin/bash

echo $FT_NBR1+$FT_NBR2 |tr \'\\\\\"\?! 0-4 |tr mrdoc 0-4 |xargs echo "ibase=5;obase=23;" |bc |tr 0-9A-C 'gtaio luSnem'
