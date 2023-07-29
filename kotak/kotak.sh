#!/bin/bash

function ganda() {
  input_string=$1
  num_duplicates=$2
  duplicated_string=""

  for (( i = 0; i < $num_duplicates; i++ )); do
    duplicated_string="$duplicated_string$input_string"
  done

  echo "$duplicated_string"
}

function kotak() {
  o=$1
  p=$2
  n1=$(($p - 1))

  a="┏"$(ganda "━┳" $n1)"━┓"
  b="\n┣"$(ganda "━╋" $n1)"━┫"
  c=$(ganda $b $(($o - 1)))
  d="\n┗"$(ganda "━┻" $n1)"━┛"
  echo -e "$a$b$c$d"
}

echo -e "$(kotak 10 7)"
