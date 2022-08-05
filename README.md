# FCluster
# Language: C++
# Input: TXT
# Output: PREFIX
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependencies: AmpliconNoise 1.29

PluMA plugin to cluster flowgrams using FCluster (Quince et al, 2011).

The plugin accepts as input a TXT file of the flowgram distance matrix (one element per line, see PyroDist plugin).

The output is a prefix.  Three files will be produced:
PREFIX.list
PREFIX.otu
PREFIX.tree

