#!/usr/bin/env bash

message="# # ###  #   #  ###     # # ### ###  #  ###
### ##   #   #  # #     ### # # #    #  # #
# # ###  ##  ## ###     ### ### #    ## ###
";

for ((i=0; i<${#message}; i++)); do echo "after 100" | tclsh;

printf "\033[4;32m${message:i:1}\033[0m"; done;